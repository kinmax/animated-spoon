#include <stdio.h>

void somar (float, float, float *);

void somar(float x, float y, float *r)
{
	*r = x+y;
}

int main ()
{
	float a, b, s;

	printf ("\nDigite o primeiro número: ");
	scanf ("%f", &a);
	printf ("\nDigite o segundo número: ");
	scanf ("%f", &b);
	somar (a, b, &s);
	printf ("\nA resposta é: %.2f", s);
	printf ("\n\n");

	return 0;	
}
