#include <stdio.h>
#include "linkedList.h"
#include <stdlib.h>

int main()
{   
    node *first = createNode(NULL, NULL, 5);
    node *second = createNode(first, NULL, 10);
    node *third = createNode(second, NULL, 17);
    node *realSecond = createNode(first, second, 500);

    node *element = createNode(realSecond, second, 900);
    node *realFirst = createNode(NULL, first, 10345);
    printf("%d\n", second->next->value);


    return 0;
}

node *createNode(node *previous, node *next, int value)
{
    node *self;

    self = malloc(sizeof(node));
    self->value = value;
    self->next = next;
    self->previous = previous;
    if (previous != NULL)
    {
        previous->next = self;
    }
    else if (next != NULL)
    {
        next->previous = self;
    }

    return self;
}

void forEach(node *first, void (*func)(node *a))
{
    node *current = first;

    while (current)
    {
        func(current);
        current = current->next;
    }
}

void printNode(node *n)
{
    printf("%d ", n->value);
}

void printList(node *first)
{

    node *current = first;

    while (current)
    {
        printNode(current);
        current = current->next;
    }
    printf("\n");
}