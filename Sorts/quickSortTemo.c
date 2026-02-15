
#include <stdio.h>

// protótipos das funções
void quickSort(int v[], int n);

// função auxiliar só para imprimir o vetor
void imprimirVetor(int v[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}
/* // main de teste
int main() {

  int v[] = {34, 7, 23, 32, 5, 62, 15, 3};

  int n = sizeof(v) / sizeof(v[0]);

  printf("Vetor antes da ordenacao:\n");
  imprimirVetor(v, n);

  quickSort(v, n);

  printf("\nVetor depois da ordenacao:\n");
  imprimirVetor(v, n);

  return 0;
}
*/

/*
 * Troca dois valores de lugar na memoria
 * Os ponteiros alteram os valores originais do vetor
 */
void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

/*
 * Funcao de particionamento do quick sort
 *
 * Escolhe o ultimo elemento como pivo
 * Reorganiza o vetor para que:
 * - todos os valores menores ou iguais ao pivô fiquem à esquerda
 * - todos os valores maiores fiquem à direita
 * Coloca o pivô na posição correta
 * Retorna a posição final do pivô
 */
int particionar(int v[], int inicio, int fim) {
  int pivo = v[fim];  // Escolhe o pivo (ultimo elemento do intervalo)
  int i = inicio - 1; // 'i' marca o final da regiao dos valores menores que o
                      // pivo Comeca antes do início do intervalo

  for (int j = inicio; j < fim;
       j++) { // 'j' percorre o intervalo comparando cada valor com o pivo
    if (v[j] <= pivo) {     // Se o valor atual for menor ou igual ao pivo
      i++;                  // Expande a regiao dos menores itens
      trocar(&v[i], &v[j]); // Troca o valor atual para a regiao correta
    }
  }
  trocar(&v[i + 1], &v[fim]); // Coloca o pivo logo apos a regiao dos menores,
                              // essa sera a posicao definitiva do pivo
  return i + 1;               // retorna a posicao final do pivo
}

/*
 * Quicksort iterativo.
 *
 * Usa uma pilha manual para armazenar os intervalos do vetor
 * que ainda precisam de ordenacao
 */
/*O(log n²*/
void quickSort(int v[], int n) {
  // pilha para armazenar pares (inicio, fim), cada intervalo ocupa duas
  // posicoes
  int pilha[n * 2];
  int topo = 0;

  // Empilha o intervalo inicial do vetor inteiro
  pilha[topo++] = 0;
  pilha[topo++] = n - 1;

  while (topo > 0) {
    // Desempilha o último intervalo inserido
    int fim = pilha[--topo];
    int inicio = pilha[--topo];

    // Particiona o intervalo e obtém a posição do pivô
    int posPivo = particionar(v, inicio, fim);

    /*
     * Se existirem elementos à esquerda do pivô,
     * empilha esse novo subvetor para ordenação futura.
     */

    if (inicio < posPivo - 1) {
      pilha[topo++] = inicio;
      pilha[topo++] = posPivo - 1;
    }

    /*
     * Se existirem elementos à direita do pivô,
     * Empilha esse novo subvetor para ordenação futura.
     */
    if (posPivo + 1 < fim) {
      pilha[topo++] = posPivo + 1;
      pilha[topo++] = fim;
    }
  }
}
