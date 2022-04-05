#pragma once

typedef struct node
{
    int value;
    struct node *next;
    struct node *previous;
} node;

typedef struct LinkedList
{
    node *first, *last;
} LinkedList;

LinkedList *createList();
node *createNode(LinkedList *list, node *previous, node *next, int value);
void add(LinkedList *list, int index, int value);
void printList(LinkedList *list);
void printNode(node *n);
void forEach(LinkedList *list, void (*func)(node *a));