#include "lista_sequencial.hpp"

ListaSequencial::ListaSequencial(int tamanhoMax) {
    tamAtual = 0;
    tamMax = tamanhoMax;
    dados = new int[tamMax];
}

ListaSequencial::~ListaSequencial() {
    delete[] dados;
}

bool ListaSequencial::isEmpty() const {
    return tamAtual == 0;
}

bool ListaSequencial::isFull() const {
    return tamAtual == tamMax;
}

int ListaSequencial::sizeLista() const {
    return tamAtual;
}

int ListaSequencial::getOrSetElement(int posicao, int novoValor, bool modificar) {
    if (posicao < 1 || posicao > tamAtual) {
        cout << "Posição inválida!" << endl;
        return -1;
    }
    if (modificar) {
        dados[posicao - 1] = novoValor;
    }
    return dados[posicao - 1];
}

bool ListaSequencial::insertElement(int novoElemento, int posicao) {
    if (isFull()) {
        cout << "Lista cheia!" << endl;
        return false;
    }
    if (posicao < 1 || posicao > tamAtual + 1) {
        cout << "Posição inválida!" << endl;
        return false;
    }
    for (int i = tamAtual; i >= posicao; i--) {
        dados[i] = dados[i - 1];
    }
    dados[posicao - 1] = novoElemento;
    tamAtual++;
    return true;
}

bool ListaSequencial::removeElement(int posicao) {
    if (isEmpty()) {
        cout << "Lista vazia!" << endl;
        return false;
    }
    if (posicao < 1 || posicao > tamAtual) {
        cout << "Posição inválida!" << endl;
        return false;
    }
    for (int i = posicao - 1; i < tamAtual - 1; i++) {
        dados[i] = dados[i + 1];
    }
    tamAtual--;
    return true;
}

void ListaSequencial::printLista() const {
    cout << "Lista (tamanho atual: " << tamAtual << ", tamanho máximo: " << tamMax << ")" << endl;
    for (int i = 0; i < tamAtual; i++) {
        cout << " -> Elem(" << i + 1 << "): " << dados[i] << endl;
    }
}

int ListaSequencial::getTamanhoMax() const {
    return tamMax;
}
