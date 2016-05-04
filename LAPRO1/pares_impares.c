//kin.gusmao@acad.pucrs.br

#include <stdio.h>

int main (void)
{
	int n, r;

	printf ("\nDigite o número a ser analisado: ");
	r = scanf ("%d", &n);
	printf ("\n\n");

	if (r != 1)  //impede que o usuario insira letras, por exemplo
	{
		printf ("Valor invalido!!\n\n");
		return 1;
	} 

	if (n%2 == 0)
	{
		printf ("É par!");
	}

	else
	{
		printf ("É ímpar!");
	}

	printf ("\n\n");

	return 0;
}
