
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int *array, int size);
void quickSort(int v[], int tamnaho);

int main() {
  int VALUE = 5;
  int inputed[VALUE];

  srand(time(NULL));

  for (int i = 0; i < VALUE; i++) {
    inputed[i] = rand() % (VALUE + 1);
  }

  printf("Original array: ");
  printArray(inputed, VALUE);

  int tamanho = sizeof(inputed) / sizeof(inputed[0]);

  quickSort(inputed, tamanho);

  printf("Final array: ");
  printArray(inputed, VALUE);

  return EXIT_SUCCESS;
}

/*O(log n²*/
void quickSort(int *v, int tamanho) {
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

    pivo = v[fim];
    i = inicio - 1;

    for (j = inicio; j < fim; j++) {
      if (v[j] <= pivo) {
        i++;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }

    temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

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

void printArray(int *array, int size) {

  for (int i = 0; i < size; i++) {
    printf("%d, ", array[i]);
  }
  printf("\n");
}
