typedef struct vector
{
    int *arr, size, elements;
} vector;

void printVector(vector *v);
void initializeVector(vector *v);
void add(vector *v, int value);
int get(vector *v, int index);
int size(vector v);