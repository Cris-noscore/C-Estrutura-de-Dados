#ifndef PILHA_HPP
#define PILHA_HPP

struct No {
    int info;
    No* prox;
};

class Pilha {
private:
    No* topo;
public:
    Pilha();
    ~Pilha();
    void empilhar(int valor);
    void desempilhar();
    void exibir();
    bool vazia();
};

#endif