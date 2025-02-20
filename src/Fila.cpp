#include <iostream>
#include "Fila.hpp"

Fila::Fila() : inicio(nullptr), fim(nullptr) {}

Fila::~Fila() {
    while (!vazia()) {
        desenfileirar();
    }
}

void Fila::enfileirar(int valor) {
    NoFila* novo = new NoFila{valor, nullptr};
    if (vazia()) {
        inicio = fim = novo;
    } else {
        fim->prox = novo;
        fim = novo;
    }
}

void Fila::desenfileirar() {
    if (vazia()) {
        std::cout << "Fila vazia!\n";
        return;
    }
    NoFila* temp = inicio;
    inicio = inicio->prox;
    delete temp;
    if (inicio == nullptr) {
        fim = nullptr;
    }
}

void Fila::exibir() {
    NoFila* atual = inicio;
    while (atual != nullptr) {
        std::cout << atual->info << " ";
        atual = atual->prox;
    }
    std::cout << "\n";
}

bool Fila::vazia() {
    return inicio == nullptr;
}