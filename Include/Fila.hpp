#ifndef FILA_HPP
#define FILA_HPP

struct NoFila {
    int info;
    NoFila* prox;
};

class Fila {
private:
    NoFila* inicio;
    NoFila* fim;
public:
    Fila();
    ~Fila();
    void enfileirar(int valor);
    void desenfileirar();
    void exibir();
    bool vazia();
};

#endif