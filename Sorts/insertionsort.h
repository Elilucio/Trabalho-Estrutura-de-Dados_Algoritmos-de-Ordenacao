#include <stdio.h>
#include "listaestatica.h"

void insertionSortE(ListaE *l) {
    // Se a lista estiver vazia ou tiver apenas um elemento imediatamente para
        int aux, j;
        for(int i = 1; i < l->livre-1; i++){
            aux = l->list[i];
            for(j = i-1; j >= 0; j--){
                if (l->list[j] > aux){
                    l->list[j+1] = l->list[j];
                }
                else{
                    break;
                }
            }
            l->list[j + 1] = aux;
        }
    }

/* int main(){
    ListaE lista1;
    inicializarListaE(&lista1);
    inserirInicioE(6, &lista1);
    inserirInicioE(7, &lista1);
    inserirInicioE(4, &lista1);
    inserirInicioE(1, &lista1);
    inserirFimE(61, &lista1);
    inserirInicioE(10, &lista1);
    exibirListaE(&lista1);
    insertionSortE(&lista1);
    exibirListaE(&lista1);
} */

/* output:
tamanho atual da lista = 1
tamanho atual da lista = 2
tamanho atual da lista = 3
tamanho atual da lista = 4
tamanho atual da lista = 5
tamanho atual da lista = 6
Lista -> 10 -> 1 -> 4 -> 7 -> 6 -> 61 
Lista -> 1 -> 4 -> 6 -> 7 -> 10 -> 61 
*/