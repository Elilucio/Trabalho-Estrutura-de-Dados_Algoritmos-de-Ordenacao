#include <stdio.h>
#include "../headers/listaestatica.h"
#include "../headers/lists.h"

void selectionSortE(ListaE *l) {
    int i, j, menor, aux;
// Percorre a lista, e coloca o menor elemento na posição i
    for (i = 0; i < l->livre - 1; i++) {
        menor = i; 
        for (j = i + 1; j < l->livre; j++) { // Procura um número na menor parte, que ainda não foi organizada
            if (l->list[j] < l->list[menor]) {
                menor = j;
            }
        }// Troca se encontrar um numero menor 
        if (menor != i) {
            aux = l->list[i];
            l->list[i] = l->list[menor];
            l->list[menor] = aux;
        }
    }
}

void selectionSortD(List *lst)
{
    List *i, *j, *minNode;
    int aux;
    for (i = lst; i != NULL; i = i->next)
    {
        minNode = i;
        for (j = i->next; j != NULL; j = j->next)
        {
            if (j->value < minNode->value)
            {
                minNode = j;
            }
        }
        // Troca os valores
        if (minNode != i)
        {
            aux = i->value;
            i->value = minNode->value;
            minNode->value = aux;
        }
    }
}


