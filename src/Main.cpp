#include <iostream>
#include "Pilha.hpp"
#include "Fila.hpp"
#include "ListaEncadeada.hpp"
#include "SelectionSort.hpp"

int main() {
    // Exemplo de uso das estruturas
    Pilha pilha;
    pilha.empilhar(10);
    pilha.empilhar(20);
    pilha.exibir();

    Fila fila;
    fila.enfileirar(30);
    fila.enfileirar(40);
    fila.exibir();

    ListaEncadeada lista;
    lista.inserir(50);
    lista.inserir(60);
    lista.exibir();

    std::vector<int> vetor = {5, 3, 1, 4, 2};
    SelectionSort::ordenar(vetor);
    for (int valor : vetor) {
        std::cout << valor << " ";
    }
    std::cout << "\n";

    return 0;
}