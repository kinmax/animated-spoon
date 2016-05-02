//kin.gusmao@acad.pucrs.br

#include <stdio.h>
#include "s.h"

int main (void)
{
	float x, y, res, a, b;

	printf ("\nDigite um inteiro: ");
	scanf ("%f", &a);
	printf ("\n\nDigite outro inteiro: ");
	scanf ("%f", &b);
	res = somar(a, b);
	printf ("\n\nA soma é: %.2f\n\n", res);

	return 0;

}
