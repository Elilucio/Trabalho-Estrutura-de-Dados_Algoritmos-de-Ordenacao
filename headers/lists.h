#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

// List struct
struct list
{
    int value;
    struct list *next;
};
/*
Creates a chain list.

Might be initialized as:
    List* list = NULL;

And its memory might be free after use:
    freeList(list);

*/
typedef struct list List;


// -----Insertions-----

/*
Inserts a new node (element) at the beginning of the list;
takes the list adress and the new node's value;
*/
void insertAtBeginning(List **lst, int val)
{
    // Allocate a new node
    List *newNode = (List*) malloc(sizeof(List));
    if (newNode == NULL) return;

    // Point to the current head
    newNode->value = val;
    newNode->next = *lst; 

    // Update head
    *lst = newNode;
}

/*
Inserts a new node (element) at the end of the list;
takes the list adress and the new node's value;
*/
void insertAtEnd(List **lst, int val)
{
    // Allocate a new node
    List* newNode = (List*) malloc(sizeof(List));
    if (newNode == NULL) return;

    newNode->value = val;
    newNode->next = NULL;

    if (*lst == NULL) // Empty list case
    {
        *lst = newNode;
        return;
    }

    // Traverse to the last node
    List* currNode = *lst;

    while (currNode->next != NULL)
        currNode = currNode->next;

    // Update last node's next
    currNode->next = newNode;
}

/*
Inserts a new node (element) to the list after a given element;
takes the previous node and the new node's value;
*/
void insertAfter(List *prevNode, int val)
{
    if (prevNode == NULL) return;

    // Allocate a new node
    List *newNode = (List*) malloc(sizeof(List));
    if (newNode == NULL) return;

    // Set its values
    newNode->value = val;
    newNode->next = prevNode->next;

    // Update previous node's next
    prevNode->next = newNode;
}

// ----- Free List -----

/*
Removes the list and free the memory.
*/
void freeList(List *lst)
{
    while (lst != NULL)
    {
        List *node = lst;
        lst = lst->next;
        free(node);
    }
}

/*
Removes the first node (element) of the list;
takes the list adress.
*/
void removeFirstElement(List **lst)
{
    if (lst == NULL) return;

    List *node = *lst;
    *lst = (*lst)->next;
    free(node);
}



// ----- Length -----

/*
Returns the number of nodes (elements) of an given list.
*/
int listLength(List *lst)
{
    int len = 0;
    while (lst != NULL)
    {
        len++;
        lst = lst->next;
    }
    return len;
}

// ----- Printing -----

/*
Prints the values of an given list.
*/
void printList(List *lst)
{
    if (lst == NULL)
    {
        printf("\nThis list has no elements.\n");
        return;
    }

    printf("\nList: [");
    int i = 0;
    while (lst != NULL)
    {
        printf("%d, ", lst->value);
        lst = lst->next;
        i++;
    }
    printf("\b\b]\n");
}