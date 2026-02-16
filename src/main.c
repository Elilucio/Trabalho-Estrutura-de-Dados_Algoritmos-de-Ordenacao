#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "../headers/lists.h"
#include "../headers/listaestatica.h"
#include "../sorts/bubblesort.h"
#include "../sorts/selectionsort.h"
#include "../sorts/insertionsort.h"
#include "../sorts/quicksort.h"

#define NUM_ITERACOES 100

int main()
{
    srand((unsigned int) time(NULL));

    struct timespec inicio, fim;
    long double media_ns = 0.0;

    printf("Executando %d iteracoes\n", NUM_ITERACOES);
    for (int i = 0; i < NUM_ITERACOES; i++) {

        // List *listaD = NULL;
        // fillWithRandomValues(&listaD, 10000);

        clock_gettime(CLOCK_MONOTONIC, &inicio);

        // insertionSortD(&listaD);

        clock_gettime(CLOCK_MONOTONIC, &fim);


        long long tempo_ns = (fim.tv_sec - inicio.tv_sec) * 1000000000LL +
                             (fim.tv_nsec - inicio.tv_nsec);


        media_ns += (tempo_ns - media_ns) / (i + 1); // Média incremental
        // freeList(listaD);
    }
    printf("\nMedia: %Lf nanosegundos", media_ns);
    printf(" \nMedia: %Lf segundos\n", media_ns / 1000000000LL);

    return 0;
}