#ifndef LISTA_SEQUENCIAL_HPP
#define LISTA_SEQUENCIAL_HPP
#include <iostream>

using namespace std;

class ListaSequencial {
private:
    int tamAtual;
    int tamMax;
    int *dados;

public:
    ListaSequencial(int tamanhoMax);
    ~ListaSequencial();
    bool isEmpty() const;
    bool isFull() const;
    int sizeLista() const;
    int getOrSetElement(int posicao, int novoValor = 0, bool modificar = false);
    bool insertElement(int novoElemento, int posicao);
    bool removeElement(int posicao);
    void printLista() const;
    int getTamanhoMax() const;
};

#endif
