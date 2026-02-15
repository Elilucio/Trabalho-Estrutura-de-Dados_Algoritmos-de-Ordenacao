#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "listaestatica.h"

// Tamanho máximo da lista
//#define MAX 10000

/*
Struct da Lista Enc. Estática

inicializa com ListaE lista1; (lista1 é o nome da lista, multiplas podem ser criadas ao mesmo tempo).

tamanho máximo de 10.000, com atributo de qual é o próximo elemento livre.

precisa ser inicializada com InicializarLista (*l), recebe o ponteiro da lista que se deseja inicializar.
não precisa de free.
*/
//typedef struct{
//    int list[MAX];

    /*Indica o tamanho da lista*/

//    int livre; //livre indica qual o próximo elemento lógico da lista sem preenchimento.
//}ListaE;

/* Inicializa a lista encadeada estática,

 recebe ponteiro de lista (&lista1) */

void inicializarListaE(ListaE *l){
    l->livre = 0;
}

/* Exibe a lista estática,

recebe ponteiro de lista (&lista1) */
void exibirListaE(ListaE *l) {
    int atual = 0; //recebe inicio da lista
    printf("Lista ");
    while (atual < l->livre) { //enquanto o atual não for atualizado para o fim da lista
        printf("-> %d \n", l->list[atual]);
        atual += 1; //atualiza para o próximo valor
    }
}

/* Insere no início da lista estática,

recebe valor a ser adicionado e ponteiro de lista (5, &lista1) */
void inserirInicioE(int valor, ListaE *l) {
    if (l->livre >= MAX) {
        printf("Erro: Lista cheia\n");
        return;
    }
    // Deslocar elementos para a direita
    for (int i = l->livre; i > 0; i--) {
        l->list[i] = l->list[i - 1];
    }
    // Inserir no início (índice 0)
    l->list[0] = valor;
    l->livre++;
    printf("tamanho atual da lista = %d\n", l->livre);
}
/* Insere ao final da lista estática,

recebe valor a ser adicionado e ponteiro de lista (5, &lista1) */
void inserirFimE(int valor, ListaE *l) {
    if (l->livre >= MAX) {
        printf("Lista cheia!\n");
        return;
    }
    l->list[l->livre] = valor;
    l->livre++;
    printf("tamanho atual da lista = %d\n", l->livre);

}
/* Preenche a lista estática com uma quantia de termos dita pelo usuário.
Randomiza entre 0 e 99999
Recebe quantia de termos a serem adicionados randomicamente e ponteiro de lista (10000, &lista1) */
void preencherListaE(int quantia, ListaE *l) {
    srand(time(NULL));
    for (int i = 0;i < quantia-1; i++){
        int randnum = rand() % quantia;
        inserirFimE(randnum, l);
    }
}
