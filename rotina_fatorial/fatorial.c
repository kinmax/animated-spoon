//kin.gusmao@acad.pucrs.br
#include <stdio.h>

double fatorial (double);

double fatorial (double n)
{
	double r = 1, f;
	for (f = 1; f <= n; f++)
	{
		r = r * f;
	}
	
	return r;
}

int main (void)
{
	double n;
	printf ("\nDigite um número inteiro: ");
	scanf ("%lf", &n);
	double f = fatorial(n);
	printf ("\n\nN=%.0lf, F=%.0lf\n\n", n, f);
}
