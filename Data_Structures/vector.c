#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
    int *arr, size, elements;
} vector;

void printVector(vector *v);
void initializeVector(vector *v);
void push(vector *v, int value);

int main()
{
    vector v;
    initializeVector(&v);

    for (int i = 0; i < v.size; i++)
    {
        push(&v, i);
    }
    push(&v, 20);
    push(&v, 22);
    push(&v, 50);
    push(&v, 2);
    printf("%d\n", v.elements);
    printVector(&v);
    return 0;
}

void copy(int vet[], int vet2[], int size1){

    for(int i = 0; i < size1; i++){
        vet2[i] = vet[i];
    }

}

void push(vector *v, int value)
{

    if (v->elements <= v->size)
    {
        v->arr[v->elements++] = value;
    }
    else
    {   
        v->arr = realloc(v->arr, 2 * v->size * sizeof(int));
        v->size *= 2;
        push(v, value);
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
