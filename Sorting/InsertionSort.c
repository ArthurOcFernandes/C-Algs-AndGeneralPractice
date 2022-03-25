#include <stdio.h>
#include "troca.h"
#include "printM.h"

void sort(int vet[], int n);

int main()
{

    int vet[] = {
        5,4,3,2,1
    };
    sort(vet, 5);
    printM(vet, 5);

    return 0;
}

void sort(int vet[], int n)
{
    int i, aux, j;
    for (i = 1; i < n; i++) {
        aux = vet[i];
        j = i - 1;
        while (j >= 0 && vet[j] > aux) {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = aux;
    }
}
