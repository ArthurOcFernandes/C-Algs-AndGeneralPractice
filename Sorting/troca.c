#include "troca.h"

void troca(int *x1, int *x2)
{
    int aux = *x1;
    *x1 = *x2;
    *x2 = aux;
}
