#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "../headers/lists.h"
#include "../headers/listaestatica.h"
#include "../sorts/bubblesort.h"
#include "../sorts/insertionsort.h"
#include "../sorts/quicksort.h"

int main()
{
   struct timespec start, end;
   long long time_ns;

   clock_gettime(CLOCK_MONOTONIC, &start);


   // código a ser mensurado


   clock_gettime(CLOCK_MONOTONIC, &end);
   
   time_ns = (end.tv_sec - start.tv_sec) * 1000000000LL + (end.tv_nsec - start.tv_nsec);

   printf("\nTime taken: %lld nanoseconds\n", time_ns);
   printf("Time taken: %.6f milliseconds\n", time_ns / 1000000.0);

   return 0;
}