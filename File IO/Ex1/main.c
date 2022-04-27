#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i = 0;
    char str[1000];
    FILE *inp, *out;

    if (argc != 3)
        return 1;

    inp = fopen(argv[1], "r");

    if (inp == NULL)
    {
        printf("couldn't open the %s file", argv[1]);
        return 2;
    }
    out = fopen(argv[2], "w");

    while (fscanf(inp, "%c", &str[i++]) != EOF)
        ;

    for (int j = 0; j < i; j++)
    {
        str[j] == 97 ? str[j] -= 32 : 1;
    }
    str[i - 1] = '\0';

    fprintf(out, "%s", str);

    fclose(inp);
    fclose(out);

    return 0;
}