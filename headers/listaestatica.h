#include <stdio.h>
#include <stdbool.h>

#define MAX 10000  // Tamanho máximo da lista

/*struct de um nó*/
typedef struct Node{
    int dado;
    int proximo; // Índice do próximo elemento
}Node;

/*
Struct da Lista Enc. Estática

inicializa com ListaE lista1; (lista1 é o nome da lista, multiplas podem ser criadas ao mesmo tempo).

tamanho máximo de 10.000, com atributo de início e livre, quando vazia inicio é igual a -1 e proximo = 0. 

precisa ser inicializada com InicializarLista (LisatE *l), recebe o ponteiro da lista que se deseja inicializar.
não precisa de free.
*/
typedef struct ListaE{
    struct Node node[MAX];
    int inicio;

    /*inicio indica o primeiro indice lógico da sequencia da lista, nessa composição ele marca o último índice preenchido do array em sequência de contgaem normal de índice (lista[0] a lista[5], o inicio diria que o lista[5] é o início lógico da lista), facilita quanto a manter tamanho sob controle. */

    int livre; //livre indica qual o próximo elemento lógico da lista sem preenchimento.
}ListaE;// Início da lista de nós livres

typedef struct ListaE ListaE;

/* Inicializa a lista encadeada estática,

 recebe ponteiro de lista (&lista1) */
void inicializarListaE (ListaE *l) {
    l->inicio = -1; // Lista vazia
    l->livre = 0;   // Início da lista de nós livres
    for (int i = 0; i < MAX - 1; i++) {
        l->node[i].proximo = i + 1; // Próximo nó livre para cada índice (pode ser alterado)
    }
    l->node[MAX - 1].proximo = -1; // Último nó
}

/* Exibe a lista estática,

recebe ponteiro de lista (&lista1) */
void exibirListaE(ListaE *l) {
    int atual = l->inicio; //recebe inicio da lista
    printf("Lista ");
    while (atual != -1) { //enquanto o atual não for atualizado para o proximo = -1 (fim da lista)
        printf("-> %d ", l->node[atual].dado);
        atual = l->node[atual].proximo; //atualiza para o próximo nó
    }
    printf("\n");
}

/* Insere no início da lista estática,

recebe valor a ser adicionado e ponteiro de lista (5, &lista1) */
void inserirInicioE(int valor, ListaE *l) {
    if (l->livre == -1) { //livre terá valor -1 apenas se a lista estiver 100% preenchida
        printf("Lista cheia!\n");
        return;
    }
    int novo = l->livre; //usa o indice livre para preencher novo nó
    printf("tamanho atual da lista = %d\n", novo+1);
    l->livre = l->node[l->livre].proximo; //atualiza o indice livre para o próximo livre
    l->node[novo].dado = valor;
    l->node[novo].proximo = l->inicio; //coloca o "pointer" para o antigo primeiro elemento
    l->inicio = novo; //faz o início da lista ser o nó preenchido
}

/* Insere ao final da lista estática,

recebe valor a ser adicionado e ponteiro de lista (5, &lista1) */
void inserirFimE(int valor, ListaE *l) {
    if (l->livre == -1) {
        printf("Lista cheia!\n");
        return;
    }
    
    int novo = l->livre;  // Pega o próximo nó livre
        printf("tamanho atual da lista = %d\n", novo+1);
    l->livre = l->node[l->livre].proximo;  // Atualiza o ponteiro de livres
    l->node[novo].dado = valor;
    l->node[novo].proximo = -1;  // Novo nó tem a condição de último (aponta para "NULL" basicamente)
    
    if (l->inicio == -1) {  // Se lista está vazia
        l->inicio = novo;
    } else {  // Se lista tem elementos
        int atual = l->inicio;
        while (l->node[atual].proximo != -1) {  // Percorre até o último
            atual = l->node[atual].proximo;
        }
        l->node[atual].proximo = novo;  // Liga o antigo último nó ao novo nó
    }
}