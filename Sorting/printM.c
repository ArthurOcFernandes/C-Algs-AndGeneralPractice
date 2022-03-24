#include "printM.h"
#include <stdio.h>

void printM(int vet[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", vet[i]);
    }
    printf("\n");
}