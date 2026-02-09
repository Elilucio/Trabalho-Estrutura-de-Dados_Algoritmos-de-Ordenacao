#include <stdio.h>
#include "listaestatica.h"

void insertionSortE(ListaE *l) {
    // Se a lista estiver vazia ou tiver apenas um elemento imediatamente para
    if (l->inicio == -1 || l->node[l->inicio].proximo == -1) {
        return;
    }
    int novoInicio = -1; // Dita o início da lista enquanto está sendo ordenada, o valor de início da ListaE será atualizado para este no final
    int atual = l->inicio;   // Percorre a parte da lista ainda não ordenada
    while (atual != -1) {
        int proximoNo = l->node[atual].proximo; // Salva o próximo antes de desconectar o nó atual
        //Inserção no início da lista ou primeira inserção
        if (novoInicio == -1 || l->node[atual].dado < l->node[novoInicio].dado) {
            l->node[atual].proximo = novoInicio;
            novoInicio = atual;
        } 
        else {
            // Procurar o lugar correto na parte ordenada da lista
            int busca = novoInicio;
            while (l->node[busca].proximo != -1 && 
                   l->node[l->node[busca].proximo].dado < l->node[atual].dado) {
                busca = l->node[busca].proximo;
            }
            // Insere o nó atual entre "busca" e "busca->proximo"
            l->node[atual].proximo = l->node[busca].proximo;
            l->node[busca].proximo = atual;
        }
        atual = proximoNo; // Avança para o próximo da parte desordenada
    }
    l->inicio = novoInicio; // Atualiza o início da lista original para a nova lista ordenada
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