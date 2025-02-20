#ifndef LISTA_ENCADEADA_HPP
#define LISTA_ENCADEADA_HPP

struct NoLista {
    int info;
    NoLista* prox;
};

class ListaEncadeada {
private:
    NoLista* cabeca;
public:
    ListaEncadeada();
    ~ListaEncadeada();
    void inserir(int valor);
    void remover(int valor);
    void exibir();
    bool vazia();
};

#endif