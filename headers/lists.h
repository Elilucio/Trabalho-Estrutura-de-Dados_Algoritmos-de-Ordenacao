#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct list {
    int value;
    struct list *next;
} List;

void insertAtBeginning(List **lst, int val);
void insertAtEnd(List **lst, int val);
void insertAfter(List *prevNode, int val);

void removeFirstElement(List **lst);
void freeList(List *lst);

int listLength(List *lst);
void printList(List *lst);
void fillWithRandomValues(List **lst, int quantity);

#endif