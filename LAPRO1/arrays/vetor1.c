#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main (void)
{
    int s[SIZE], j, total = 0;

    for (j = 0; j < SIZE; j++)
    {
        s[j] = 2+2*j;
        total = total + s[j];
    }
    printf ("\n%s%13s\n", "Elemento", "Valor");
    for (j = 0; j < SIZE; j++)
    {
        printf ("%8d%13d\n", j, s[j]);
    }
    printf ("\n%8s%13d\n", "Total", total);

    return EXIT_SUCCESS;
}
