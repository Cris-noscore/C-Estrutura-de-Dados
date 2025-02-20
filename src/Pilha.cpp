#include <iostream>
#include "Pilha.hpp"

Pilha::Pilha() : topo(nullptr) {}

Pilha::~Pilha() {
    while (!vazia()) {
        desempilhar();
    }
}

void Pilha::empilhar(int valor) {
    No* novo = new No{valor, topo};
    topo = novo;
}

void Pilha::desempilhar() {
    if (vazia()) {
        std::cout << "Pilha vazia!\n";
        return;
    }
    No* temp = topo;
    topo = topo->prox;
    delete temp;
}

void Pilha::exibir() {
    No* atual = topo;
    while (atual != nullptr) {
        std::cout << atual->info << " ";
        atual = atual->prox;
    }
    std::cout << "\n";
}

bool Pilha::vazia() {
    return topo == nullptr;
}