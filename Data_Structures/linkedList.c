#include <stdio.h>
#include "linkedList.h"
#include <stdlib.h>

int main()
{
    LinkedList *list = createList();

    node *first = createNode(list, NULL, NULL, 5);
    node *second = createNode(list, first, NULL, 10);
    node *third = createNode(list, second, NULL, 17);
    node *realSecond = createNode(list, first, second, 500);

    node *element = createNode(list, realSecond, second, 900);
    node *realFirst = createNode(list, NULL, first, 2);

    forEach(list, &printNode);
    add(list, 4, 350);
    printf("\n");
    addLast(list, 95);
    addFirst(list, 354);
    printList(list);
    printf("\n%d", get(list, 3)->value);

    return 0;
}

LinkedList *createList()
{

    LinkedList *list;

    list = (LinkedList *)malloc(sizeof(LinkedList));

    return list;
}

node *createNode(LinkedList *list, node *previous, node *next, int value)
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
    else
    {
        if (next != list->first)
        {
            printf("Error! Invalid operation\n\n");
            exit(1);
        }
        list->first = self;
    }
    if (next != NULL)
    {
        next->previous = self;
    }
    else
        list->last = self;

    return self;
}

void add(LinkedList *list, int index, int value)
{
    node *curr = list->first;
    int currPos = 0;
    while (curr)
    {
        if (currPos++ == index)
        {
            createNode(list, curr->previous, curr, value);
            return;
        }
        curr = curr->next;
    }

    printf("\nError! Theres no such index\n");
    exit(1);
}

void addLast(LinkedList *list, int value)
{
    createNode(list, list->last, NULL, value);
}

void addFirst(LinkedList *list, int value)
{
    createNode(list, NULL, list->first, value);
}

void forEach(LinkedList *list, void (*func)(node *a))
{
    node *current = list->first;

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

node *get(LinkedList *list, int index)
{
    node *current = list->first;
    int i = 0;
    while (current)
    {
        if (i == index){
            return current;
        }

        current = current->next;
        i++;
    }
    return NULL;
}

void printList(LinkedList *list)
{

    node *current = list->first;

    while (current)
    {
        printNode(current);
        current = current->next;
    }
    printf("\n");
}