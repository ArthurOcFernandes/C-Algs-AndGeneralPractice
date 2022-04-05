#pragma once

typedef struct vector
{
    int *arr, size, elements;
} vector;

void printVector(vector *v);
void initializeVector(vector *v);
void add(vector *v, int value);
int get(vector *v, int index);
int size(vector v);
int indexOf(vector *v, int n);
int isEmpty(vector *v);
void clear(vector *v);
void forEach(vector *v, void(*funcion)(int a));