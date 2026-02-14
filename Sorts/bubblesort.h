#include <stdbool.h>
//#include "../headers/lists.h"
//#include "../headers/listaestatica.h"
/*
O Bubble Sort percorre repetidamente a lista, comparando elementos adjacentes
e trocando-os caso estejam na ordem incorreta.

Dessa forma, a lista é dividida em duas partes: a parte ordenada, que cresce a cada
iteração, e a parte não ordenada, que diminui.

Consequentemente, a cada iteração, o maior elemento da parte não ordenada
é movido para sua posição final.

Algumas otimizações foram implementadas para melhorar a performace do algoritmo,
mas sua essência permanece a mesma: a complexidade de tempo ainda é O(n²), no pior caso.
*/

void bubbleSortD(List *lst)
{
    if (lst == NULL) return;
    // se a lista for vazia, a função retorna.

    List *unsortedEnd = NULL;
    /*
    marca o ultimo elemento ordenado. o Bubble Sort cria duas porçôes: uma ordenada e
    outra desordenada. o unsortedEnd marca o fim da porção desordenada, ou seja, o
    início da porção ordenada.
    A cada iteração, o maior elemento da porção desordenada é colocado no final dela, e
    o unsortedEnd é atualizado para marcar o novo fim da porção desordenada.
    Essa abordagem otimiza o processo de ordenação, pois evita comparações desnecessárias
    com os elementos já ordenados, melhorando um pouco a eficiência do algoritmo.
    */
    bool has_swapped;
    /*
    indica se houve troca de elementos durante uma passagem pela lista. Se não houver trocas, significa que a lista já está ordenada, e o algoritmo pode ser interrompido mais cedo, evitando iterações desnecessárias.
    */

    do {
        has_swapped = false;
        // reinicia o indicador de troca para a nova iteração.
        List *node = lst;
        // node recebe o primeiro elemento da lista.

        while (node->next != unsortedEnd)
        // percorre a lista até o último elemento não ordenado.
        {
            if (node->value > node->next->value)
            /*
            compara o valor do nó atual com o próximo nó. Se o valor do nó atual for
            maior, eles são trocados de posição.
            */
            {
                int temp = node->value;
                node->value = node->next->value;
                node->next->value = temp;
                has_swapped = true;
            }

            node = node->next;
            // move para o próximo nó.
        }
        unsortedEnd = node;
        /*
        atualiza o limite da parte não ordenada para o último nó processado,
        que agora é o maior elemento da porção desordenada.
        */

    } while (has_swapped);
    // se não houve troca, a lista já está ordenada, e o loop é interrompido.
}

void bubbleSortE(ListaE *l)
{
    if (l == NULL || l->livre <= 1) return;
    /*
    Se a lista for NULL ou tiver 0 ou 1 elemento,
    ela já está ordenada, então não é necessário processar.
    */

    int unsortedEnd = l->livre - 1;
    /*
    Marca o índice final da parte não ordenada da lista.
    A cada iteração, o maior elemento "sobe" para o final,
    então podemos diminuir essa região progressivamente.
    */

    bool has_swapped;
    /*
    Indica se houve troca durante uma passagem completa.
    Se nenhuma troca ocorrer, a lista já está ordenada.
    */

    do {
        has_swapped = false;
        // reinicia o indicador de troca para a nova iteração.

        for (int i = 0; i < unsortedEnd; i++)
        /*
        Percorre a parte não ordenada da lista,
        comparando elementos adjacentes.
        */
        {
            if (l->list[i] > l->list[i + 1])
            /*
            Troca os elementos se estiverem na ordem incorreta.
            */
            {
                int temp = l->list[i];
                l->list[i] = l->list[i + 1];
                l->list[i + 1] = temp;
                
                has_swapped = true;
                /*
                Marca que houve pelo menos uma troca nesta passagem.
                */
            }
        }

        unsortedEnd--;
        /*
        O último elemento da passagem já está ordenado,
        então diminuímos o limite da parte não ordenada.
        */

    } while (has_swapped);
    /*
    Se nenhuma troca ocorreu, a lista está completamente ordenada
    e o loop é encerrado.
    */
}


