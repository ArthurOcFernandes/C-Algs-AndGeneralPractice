#include <stdio.h>
#include "troca.h"
#include "printM.h"

int achaMenor(int vet[], int n, int ini);
void sort(int vet[], int n);
void printM(int vet[], int n);

int main()
{   
    int vet[] = {
        2, 3, 12, 3, 1, 56, 7, 2};
    printM(vet, 8);
    sort(vet, 8);
    printM(vet, 8);
    return 0;
}

int achaMenor(int vet[], int n, int ini)
{
    int menor = ini;

    for (int atual = ini + 1; atual < n; atual++)
        if (vet[menor] > vet[atual])
            menor = atual;

    return menor;
}

void sort(int vet[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int menor = achaMenor(vet, n, i);
        troca(&vet[menor], &vet[i]);
    }
}

