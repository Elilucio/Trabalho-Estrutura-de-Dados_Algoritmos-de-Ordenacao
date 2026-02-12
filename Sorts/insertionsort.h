#include <stdio.h>
#include "listaestatica.h"

void insertionSortE(ListaE *l) {
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

void insertionSortD(List **lst) {
if (*lst == NULL || (*lst)->next == NULL) return;
    List *sorted = NULL; //Lista auxiliar que estará ordenada
    List *current = *lst;//O que irá percorrer a lista
    while (current != NULL){
        List *next = current->next; //Guarda o ponteiro do próximo nó a ser organizado
        if (sorted == NULL || sorted->value >= current->value){ //Condição para iniciar a lista e inserir o current no início caso seja menor
            current->next = sorted;
            sorted = current;
        }
        else{ //Ordenação conforme o insertion sort
            List *temp = sorted;
            while (temp->next != NULL && temp->next->value < current->value) 
            {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    *lst = sorted;
}

/* int main() {
    List* minhaLista = NULL;
    insertAtEnd(&minhaLista, 5);
    insertAtEnd(&minhaLista, 2);
    insertAtEnd(&minhaLista, 8);
    insertAtEnd(&minhaLista, 1);
    insertAtBeginning(&minhaLista, 30);
    printList(minhaLista);
    insertionSortD(&minhaLista);
    printList(minhaLista);
    freeList(minhaLista);
    return 0;
} */

/*output:
List: [30, 5, 2, 8, 1] 

List: [1, 2, 5, 8, 30]

*/
