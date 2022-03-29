#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
    int *arr, size, elements;
} vector;

void printVector(vector *v);
void initializeVector(vector *v);

int main()
{
    vector v;
    initializeVector(&v);

    for(int i = 0; i < v.size; i++){
        v.arr[i] = i;
    }

    printVector(&v);

    return 0;
}

void initializeVector(vector* v){
    v->size = 20;
    v->arr =  (int*)(malloc(sizeof(int) *  20));
    v->elements = 0;
}

void printVector(vector *v)
{
    for (int i = 0; i < v->size; i++)
    {
        printf("%d ", v->arr[i]);
    }
    printf("\n");
}
