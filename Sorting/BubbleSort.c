#include <stdio.h>
#include "troca.h"
#include "printM.h"

void sort(int vet[], int n);

int main()
{

    int vet[] = {
        2, 3, 12, 3, 1, 56, 7, 2};

    sort(vet, 8);
    printM(vet, 8);

    return 0;
}

void sort(int vet[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int trocou = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                troca(&vet[j], &vet[j + 1]);
                trocou = 1;
            }
        }
        if (trocou == 0)
            break;
    }
}
