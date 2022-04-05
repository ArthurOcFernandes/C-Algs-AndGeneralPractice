#pragma once

typedef struct node
{

    int value;
    struct node *next;
    struct node *previous;

} node;

node *createNode(node *previous, node *next, int value);
void printList(node *first);
void printNode(node *n);
void forEach(node *first, void (*func)(node *a));