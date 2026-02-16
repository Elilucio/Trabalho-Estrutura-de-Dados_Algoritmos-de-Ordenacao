#include "../headers/lists.h"
#include "../headers/listaestatica.h"

// O(log n²)
void quickSortE(ListaE *lista, int tamanho) {

  int inicio = 0;
  int fim = tamanho - 1;
  int pilha[tamanho + 1];
  int topo = -1;

  int i, j, pivo, temp;

  // empilha intervalo inicial
  pilha[++topo] = inicio;
  pilha[++topo] = fim;

  while (topo >= 0) {
    fim = pilha[topo--];
    inicio = pilha[topo--];

    pivo = lista->list[fim];
    i = inicio - 1;

    for (j = inicio; j < fim; j++) {
      if (lista->list[j] <= pivo) {
        i++;
        temp = lista->list[i];
        lista->list[i] = lista->list[j];
        lista->list[j] = temp;
      }
    }

    temp = lista->list[i + 1];
    lista->list[i + 1] = lista->list[fim];
    lista->list[fim] = temp;

    int pos = i + 1;

    // subvetor da esquerda
    if (pos - 1 > inicio) {
      pilha[++topo] = inicio;
      pilha[++topo] = pos - 1;
    }

    // subvetor da direita
    if (pos + 1 < fim) {
      pilha[++topo] = pos + 1;
      pilha[++topo] = fim;
    }
  }
}


/*
 A implemetação para listas encadeadas dinâmicas ainda precisa ser feita.
 */