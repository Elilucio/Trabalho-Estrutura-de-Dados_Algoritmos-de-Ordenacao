#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "../headers/lists.h"
#include "../headers/listaestatica.h"
#include "../sorts/mergesort.h"
#include "../sorts/bubblesort.h"
#include "../sorts/selectionsort.h"
#include "../sorts/insertionsort.h"
#include "../sorts/quicksort.h"
#include "../sorts/test.h"

#define NUM_ITERACOES 100

int main()
{
    srand((unsigned int) time(NULL));

    struct timespec inicio, fim;
    Long double media_ns = 0.0;

    printf("Executando %d iteracoes\n", NUM_ITERACOES);
    for (int i = 0; i < NUM_ITERACOES; i++) {

         List *listaD = NULL;
         fillWithRandomValues(&listaD, 100);
         ListaE lista;
         ListaE *lp = &lista;
        inicializarListaE(&lista);
        //preencherListaE(100, &lista); 
        

        clock_gettime(CLOCK_MONOTONIC, &inicio);

        insertionSortD(&listaD);
        //bubbleSortD(listaD);
        //selectionSortD(listaD);
        //mergeSortListaD(listaD);
        //quickSort(listaD);

        //insertionSortE(&lista);
        //bubbleSortE(&lista);
        //selectionSortE(&lista);
        //mergeSortE(lp->list,0, lp->livre - 1);
        //quickSortE(&lista, 10000);

        clock_gettime(CLOCK_MONOTONIC, &fim);


        long long tempo_ns = (fim.tv_sec - inicio.tv_sec) * 1000000000LL +
                             (fim.tv_nsec - inicio.tv_nsec);
                             


        media_ns += ((double)tempo_ns - media_ns) / (i + 1); // Média incremental
        freeList(listaD);
        //printf("media %Lf\n", media_ns);
    }
    //printf("\nLista Dinamica: ");
    printf("\nMedia: %Lf nanosegundos", media_ns);
    printf(" \nMedia: %Lf segundos\n", media_ns / 1000000000LL);

    return 0;
}
