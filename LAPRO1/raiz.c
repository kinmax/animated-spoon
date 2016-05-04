#include <stdio.h>
#include <math.h>

int main ()
{
	float x, raiz;

	printf ("\nDigite o número: ");
	scanf ("%f", & x);
	raiz = sqrtf(x);
	printf ("A raiz quadrada do número é: %f", raiz);
	printf ("\n\n");

	return 0;
}
