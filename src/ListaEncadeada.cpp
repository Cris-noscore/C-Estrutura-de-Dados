#include <iostream>
#include "ListaEncadeada.hpp"

ListaEncadeada::ListaEncadeada() : cabeca(nullptr) {}

ListaEncadeada::~ListaEncadeada() {
    NoLista* atual = cabeca;
    while (atual != nullptr) {
        NoLista* temp = atual;
        atual = atual->prox;
        delete temp;
    }
}

void ListaEncadeada::inserir(int valor) {
    NoLista* novo = new NoLista{valor, cabeca};
    cabeca = novo;
}

void ListaEncadeada::remover(int valor) {
    NoLista* atual = cabeca;
    NoLista* anterior = nullptr;
    while (atual != nullptr && atual->info != valor) {
        anterior = atual;
        atual = atual->prox;
    }
    if (atual == nullptr) {
        std::cout << "Valor não encontrado!\n";
        return;
    }
    if (anterior == nullptr) {
        cabeca = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }
    delete atual;
}

void ListaEncadeada::exibir() {
    NoLista* atual = cabeca;
    while (atual != nullptr) {
        std::cout << atual->info << " ";
        atual = atual->prox;
    }
    std::cout << "\n";
}

bool ListaEncadeada::vazia() {
    return cabeca == nullptr;
}