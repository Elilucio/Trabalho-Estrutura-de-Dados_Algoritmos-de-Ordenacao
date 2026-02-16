#include <stdio.h>
#include <stdlib.h>
#include "../headers/lists.h"
#include "../headers/listaestatica.h"

// Função para misturar (merge) dois sub-arrays
// O primeiro sub-array é arr[esquerda..meio]
// O segundo sub-array é arr[meio+1..direita]
void mergeE(int arr[], int esquerda, int meio, int direita) {
    int i, j, k;
    
    // Tamanhos dos dois sub-arrays temporários
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[esquerda + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];

    /* Agora começa a fusão (merge) dos arrays temporários de volta no array principal */
    i = 0; // Índice inicial do primeiro sub-array (L)
    j = 0; // Índice inicial do segundo sub-array (R)
    k = esquerda; // Índice inicial do array misturado (arr)

    while (i < n1 && j < n2) {
        // Se o elemento da esquerda for menor ou igual, coloque-o no array principal
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            // Senão, coloque o elemento da direita
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal que ordena o array arr[esquerda..direita]
void mergeSortE(int arr[], int esquerda, int direita) {
    if (esquerda < direita) {
        // Encontra o ponto médio
        // (esquerda + direita) / 2 funciona, mas a forma abaixo evita estouro de inteiro (overflow)
        int meio = esquerda + (direita - esquerda) / 2;

        // Ordena a primeira metade e a segunda metade recursivamente
        mergeSortE(arr, esquerda, meio);
        mergeSortE(arr, meio + 1, direita);

        // Une as duas metades ordenadas
        mergeE(arr, esquerda, meio, direita);
    }
}

// Teste da lista estática
/*
int main() {
    ListaE lista;
    ListaE *lp = &lista;
    int i = 0;

    inicializarListaE(lp);
    while (i < 20){   
    i++;
    inserirInicioE(7, lp);
    inserirInicioE(8, lp);
    inserirInicioE(9, lp);
    inserirInicioE(14, lp);}
    exibirListaE(lp);
    // printf("%d", lp->list[0]);
    int tamanho_array = sizeof(lp->list) / sizeof(lp->list[0]);
    printf("%d", tamanho_array);
    mergeSort(lp->list,0, lp->livre - 1);
    exibirListaE(lp);
}
*/

List* acharMeioD(List* lista) {
    if (lista == NULL || lista->next == NULL)
        return lista;

    List* lento = lista;
    List* rapido = lista->next;

    while (rapido != NULL && rapido->next != NULL) {
        lento = lento->next;
        rapido = rapido->next->next;
    }
    return lento;  // ponteiro para o nó do meio
}

List* mergeD(List* esquerda, List* direita) {
    if (esquerda == NULL) return direita;
    if (direita == NULL) return esquerda;

    List* resultado = NULL;  // cabeça da lista que vamos montar
    List* cauda = NULL;      // último nó dessa lista

    while (esquerda != NULL && direita != NULL) {
        List* menor;
        if (esquerda->value <= direita->value) {
            menor = esquerda;
            esquerda = esquerda->next;
        } else {
            menor = direita;
            direita = direita->next;
        }
        menor->next = NULL;   // desliga o nó da lista de origem

        if (resultado == NULL) {
            resultado = menor;
            cauda = menor;
        } else {
            cauda->next = menor;
            cauda = menor;
        }
    }

    // sobra só uma das listas; encaixa o resto
    if (esquerda != NULL) cauda->next = esquerda;
    if (direita != NULL) cauda->next = direita;

    return resultado;
}

List* mergeSortListaD(List* head) {
    if (head == NULL || head->next == NULL)
        return head;

    List* meio = acharMeioD(head);
    List* direita = meio->next;
    meio->next = NULL;   // corta: lista esquerda termina em meio

    List* esquerda = head;

    esquerda = mergeSortListaD(esquerda);
    direita = mergeSortListaD(direita);

    return mergeD(esquerda, direita);
}

// Teste da lista dinâmica
/*
int main() {
    List* lista = NULL;
    insertAtBeginning(&lista, 2);
    insertAtBeginning(&lista, 3);
    insertAtBeginning(&lista, 4);
    insertAtBeginning(&lista, 1);

    printList(lista);   // 1 -> 4 -> 3 -> 2

    lista = mergeSortListaD(lista);

    printList(lista);   // 1 -> 2 -> 3 -> 4

    freeList(lista);
    return 0;
}
*/
