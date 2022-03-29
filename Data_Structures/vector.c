#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main()
{
    vector v;
    initializeVector(&v);

    for (int i = 0; i < 82; i++)
    {
        add(&v, i);
    }

    printf("%d\n", v.elements);
    printVector(&v);
    return 0;
}

int size(vector v)
{
    return v.size;
}

int get(vector *v, int index)
{
    return v->arr[index];
}

void add(vector *v, int value)
{

    if (v->elements <= v->size)
    {
        v->arr[v->elements++] = value;
    }
    else
    {
        printf("realocando...\n\n");
        v->arr = realloc(v->arr, 2 * v->size * sizeof(int));
        v->size *= 2;
        add(v, value);
    }
}

void initializeVector(vector *v)
{
    v->size = 20;
    v->arr = (int *)(malloc(sizeof(int) * 20));
    v->elements = 0;
}

void printVector(vector *v)
{
    for (int i = 0; i < v->elements; i++)
    {
        printf("%d ", v->arr[i]);
    }
    printf("\n");
}
