#ifndef LISTAESTATICA_H
#define LISTAESTATICA_H

#define MAX 10000

typedef struct {
    int list[MAX];
    int livre;
} ListaE;

void inicializarListaE(ListaE *l);
void exibirListaE(ListaE *l);
void inserirInicioE(int valor, ListaE *l);
void inserirFimE(int valor, ListaE *l);
void preencherListaE(int quantia, ListaE *l);

#endif