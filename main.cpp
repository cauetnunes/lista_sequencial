#include <iostream>
#include "lista_sequencial.hpp"

using namespace std;

int main() {
    ListaSequencial* lista = nullptr; 

    int opcao;
    do {
        cout << "\n--- Menu ---\n";
        cout << "1 - Criar nova lista\n";
        cout << "2 - Inserir elemento\n";
        cout << "3 - Remover elemento\n";
        cout << "4 - Obter/Modificar elemento\n";
        cout << "5 - Exibir lista\n";
        cout << "6 - Sair\n";
        cout << "Escolha uma opção: " << endl;
        cin >> opcao;

        switch (opcao) {
            case 1: {
                // Criar nova lista
                int tamanhoMax;
                cout << "Digite o tamanho máximo da lista: " << endl;
                cin >> tamanhoMax;
                if (lista != nullptr) {
                    delete lista; 
                }
                lista = new ListaSequencial(tamanhoMax);
                cout << "Nova lista criada com sucesso!" << endl;
                break;
            }
            case 2: {
                // Inserir elemento
                if (lista == nullptr) {
                    cout << "Você precisa criar uma lista primeiro!" << endl;
                    break;
                }
                int elemento, posicao;
                cout << "Digite o elemento a ser inserido: " << endl;
                cin >> elemento;
                cout << "Digite a posição (1 a " << lista->getTamanhoMax() << "): " << endl;
                cin >> posicao;
                if (lista->insertElement(elemento, posicao)) {
                    cout << "Elemento inserido com sucesso!\n";
                }
                break;
            }
            case 3: {
                // Remover elemento
                if (lista == nullptr) {
                    cout << "Você precisa criar uma lista primeiro!" << endl;
                    break;
                }
                int posicao;
                cout << "Digite a posição do elemento a ser removido: "<< endl;
                cin >> posicao;
                if (lista->removeElement(posicao)) {
                    cout << "Elemento removido com sucesso!\n";
                }
                break;
            }
            case 4: {
                // Obter ou modificar elemento
                if (lista == nullptr) {
                    cout << "Você precisa criar uma lista primeiro!" << endl;
                    break;
                }
                int posicao, novoValor;
                bool modificar;
                cout << "Digite a posição do elemento: " << endl;
                cin >> posicao;
                cout << "Deseja modificar o valor? (1 - Sim, 0 - Não): " << endl;
                cin >> modificar;
                if (modificar) {
                    cout << "Digite o novo valor: " << endl;
                    cin >> novoValor;
                    lista->getOrSetElement(posicao, novoValor, true);
                    cout << "Valor Atualizado!: ";
                } else {
                    int valor = lista->getOrSetElement(posicao);
                    if (valor != -1) {
                        cout << "Valor encontrado: " << valor << endl;
                    }
                }
                break;
            }
            case 5:
                // Exibir lista
                if (lista == nullptr) {
                    cout << "Você precisa criar uma lista primeiro!" << endl;
                    break;
                }
                lista->printLista();
                break;
            case 6:
                // Sair
                if (lista != nullptr) {
                    delete lista; 
                }
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (opcao != 6);

    return 0;
}
