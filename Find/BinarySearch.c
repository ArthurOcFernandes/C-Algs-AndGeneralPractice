#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int search(int vet[], int start, int size, int numberToFind);
int isSorted(int vet[], int size);

int main()
{

    int vet[] = {
        1, 5, 14, 34, 47, 48, 60, 64, 65, 71, 80, 81, 92, 93, 94};

    printf("%d", search(vet, 0, 15, 71));

    return 0;
}

int search(int arr[], int start, int size, int numberToFind)
{
    if (size >= start) {
        int mid = start + (size - start) / 2;
 
        if (arr[mid] == numberToFind)
            return mid;
 
        if (arr[mid] > numberToFind)
            return search(arr, start, mid - 1, numberToFind);
 
        return search(arr, mid + 1, size, numberToFind);
    }
 
    return -1;
}

int isSorted(int vet[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (vet[i + 1] < vet[i])
            return 0;
    }
    return 1;
}