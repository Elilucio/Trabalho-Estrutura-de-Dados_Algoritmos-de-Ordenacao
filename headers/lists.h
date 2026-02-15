#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
Lista Encadeada Dinâmica

Estrutura de dados linear onde cada elemento (nó) contém um valor e um ponteiro para o
próximo nó.

Modo de Implementação:
   
    List *nome_da_lista = NULL; // Inicializa a lista 
    
    ...

    freeList(nome_da_lista); // Libera a memória alocada para a lista depois do uso
*/
typedef struct list {
    int value;
    struct list *next;
} List;

// ----- Inserções -----

/*
Insere um novo nó no início da lista.
Recebe:
    - O endereço da lista: &nome_da_lista (List**)
    - O valor do novo elemento
*/
void insertAtBeginning(List **lst, int val)
{
    // Aloca memória para um novo nó
    List *newNode = (List*) malloc(sizeof(List));
    if (newNode == NULL) return;

    // Define o valor do novo nó e aponta para o antigo início
    newNode->value = val;
    newNode->next = *lst; 

    // Atualiza o início da lista
    *lst = newNode;
}

/*
Insere um novo nó no final da lista.
Recebe:
    - O endereço da lista: &nome_da_lista (List**)
    - O valor do novo elemento
*/
void insertAtEnd(List **lst, int val)
{
    // Aloca memória para um novo nó
    List* newNode = (List*) malloc(sizeof(List));
    if (newNode == NULL) return;

    newNode->value = val;
    newNode->next = NULL;

    // Caso especial: lista vazia
    if (*lst == NULL)
    {
        *lst = newNode;
        return;
    }

    // Percorre a lista até o último nó
    List* currNode = *lst;

    while (currNode->next != NULL)
        currNode = currNode->next;

    // Atualiza o ponteiro do último nó
    currNode->next = newNode;
}

/*
Insere um novo nó (elemento) após um nó específico.
Recebe:
    - O nó anterior: prevNode (nome_da_lista->next->next, por exemplo)
    - O valor do novo elemento
*/
void insertAfter(List *prevNode, int val)
{
    if (prevNode == NULL) return;

    // Aloca memória para o novo nó
    List *newNode = (List*) malloc(sizeof(List));
    if (newNode == NULL) return;

    // Define valor e encadeamento
    newNode->value = val;
    newNode->next = prevNode->next;

    // Atualiza o ponteiro do nó anterior
    prevNode->next = newNode;
}


// ----- Liberação de Memória -----

/*
Remove todos os nós da lista e libera a memória alocada.
Recebe:
    - variável da lista: nome_da_lista (List*)
*/
void freeList(List *lst)
{
    while (lst != NULL)
    {
        List *node = lst;
        lst = lst->next;
        free(node);
    }
}

/*
Remove o primeiro nó (elemento) da lista.
Recebe:
    - O endereço da lista: &nome_da_lista (List**)
*/
void removeFirstElement(List **lst)
{
    if (lst == NULL) return;

    List *node = *lst;
    *lst = (*lst)->next;
    free(node);
}


// ----- Tamanho da Lista -----

/*
Retorna a quantidade de nós da lista.
Recebe:
    - variável da lista: nome_da_lista (List*)
*/
int listLength(List *lst)
{
    int len = 0;
    while (lst != NULL)
    {
        len++;
        lst = lst->next;
    }
    return len;
}


// ----- Impressão -----

/*
Exibe os valores armazenados na lista.
Recebe:
    - O ponteiro para o início da lista: nome_da_lista (List*)
*/
void printList(List *lst)
{
    if (lst == NULL)
    {
        printf("\nEsta lista não possui elementos.\n");
        return;
    }

    printf("\nList: [");
    int i = 0;

    while (lst != NULL)
    {
        printf("%d, ", lst->value);
        lst = lst->next;
        i++;
    }

    printf("\b\b]\n");
}


// ----- Preenchimento com Valores Aleatórios -----

/*
Preenche uma lista encadeada dinâmica com valores aleatórios.

Recebe:
    - O endereço da lista (&nome_da_lista)
    - A quantidade de elementos a serem inseridos

A função:
    - Libera a lista atual (evitando vazamento de memória)
    - Gera números inteiros aleatórios
    - Insere os valores no final da lista
*/
void fillWithRandomValues(List **lst, int quantity)
{
    if (lst == NULL || quantity <= 0) return;
    /*
    Se o ponteiro da lista for NULL ou a quantidade for inválida,
    não há processamento a ser feito.
    */

    // Libera a lista atual para evitar vazamento de memória
    freeList(*lst);
    *lst = NULL;
    /*
    Garante que a lista esteja vazia antes de ser preenchida.
    */

    // Inicializa a semente do gerador de números aleatórios
    srand((unsigned int) time(NULL));
    /*
    Utiliza o tempo atual como semente.
    Sem isso, a sequência gerada por rand() será sempre a mesma.
    */

    for (int i = 0; i < quantity; i++)
    {
        int randomValue = rand() % 101;
        /*
        Gera um número aleatório entre 0 e 100.
        */

        insertAtEnd(lst, randomValue);
        /*
        Insere o valor gerado no final da lista.
        */
    }
}
#endif