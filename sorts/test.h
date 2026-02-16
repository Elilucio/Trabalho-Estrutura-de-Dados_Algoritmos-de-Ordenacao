#include <stdio.h>
#include <stdlib.h>
#include "../headers/lists.h"

/*
 * Estrutura de um nó da lista simplesmente encadeada.
 * - 'value'  : dado armazenado List nó
 * - 'next'   : ponteiro para o próximo nó da lista
 */
/* typedef struct List {
  int value;
  struct List *next;
} List; */

/*
 * Aloca dinamicamente um Listvo nó na memória
 * e inicializa seus campos.
 * Retorna o endereço do nó criado.
 */
/* List *criarList(int value) {
  List *Listvo = malloc(sizeof(List));
  Listvo->value = value;
  Listvo->next = NULL;
  return Listvo;
} */

/*
 * Percorre a lista do início até o fim
 * imprimindo os valuees armazenados em cada nó.
 *
 * Como a lista é encadeada, percorremos usando ponteiros.
 */
/* void imprimirLista(List *inicio) {
  while (inicio) {
    printf("%d ", inicio->value);
    inicio = inicio->next;
  }
  printf("\n");
}
 */
/*
 * Retorna o último nó da lista.
 *
 * É necessário porque o QuickSort trabalha
 * com intervalos [inicio e fim].
 */
List *ultimo(List *inicio) {
  while (inicio && inicio->next)
    inicio = inicio->next;
  return inicio;
}

/*
 * Particiona a lista entre os nós 'inicio' e 'fim'.
 *
 * Retorna:
 * - O nó que ficou com o value do pivô,
 *   agora na posição correta.
 */
List *particionar(List *inicio, List *fim) {
  int pivo = fim->value;
  List *i = inicio;
  /*
   * 'i' marca a posição onde o próximo value meListr
   * ou igual ao pivô deve ser colocado.
   */
  List *j = inicio;
  /*
   * 'j' percorre a lista do início até o nó anterior ao pivô,
   * comparando cada value com o pivô.
   */

  while (j != fim) {
    if (j->value <= pivo) {
      // Troca os valuees de 'i' e 'j'
      int tmp = i->value;
      i->value = j->value;
      j->value = tmp;
      // Avança 'i' para a próxima posição válida
      i = i->next;
    }
    j = j->next;
  }

  /*
   * Coloca o pivô exatamente após a região
   * dos valuees meListres ou iguais.
   */
  int tmp = i->value;
  i->value = fim->value;
  fim->value = tmp;

  // Retorna o nó onde o pivô foi colocado
  return i;
}

/*
 * Cada par representa um intervalo da lista
 * que ainda precisa ser ordenado.
 */
void quickSort(List *inicio) {
  if (!inicio)
    return;

  // Obtém o último nó da lista
  List *fim = ultimo(inicio);

  List *pilha[100]; // tamanho fixo (pode ajustar)
  int topo = 0;

  // empilha intervalo inicial
  pilha[topo++] = inicio;
  pilha[topo++] = fim;

  /*
   * Enquanto houver intervalos pendentes
   * na pilha, continuamos o algoritmo.
   */
  while (topo > 0) {
    // desempilha fim e inicio
    List *f = pilha[--topo];
    List *i = pilha[--topo];

    if (!i || i == f)
      continue;

    List *pivo = particionar(i, f);

    /*
     * Sublista da esquerda:
     * de i até nó anterior ao pivô
     */
    List *antesPivo = i;
    while (antesPivo && antesPivo->next != pivo)
      antesPivo = antesPivo->next;

    // Se existir sublista válida à esquerda
    if (antesPivo && i != pivo) {
      pilha[topo++] = i;
      pilha[topo++] = antesPivo;
    }

    /*
     * Sublista à direita do pivô
     *
     * Vai do nó seguinte ao pivô até o fim do intervalo.
     */
    if (pivo->next && pivo->next != f->next) {
      pilha[topo++] = pivo->next;
      pilha[topo++] = f;
    }
  }
}
