/*Kin Max Paimolini Gusmão	LAPRO I		Turma 490
kin.gusmao@acad.pucrs.br*/

#include <stdio.h>

int main (void)
{
	int n, i, j;
	i = 1;
	j = 1;
	printf ("\nDigite o comprimento do lado do quadrado: ");
	scanf ("%d", &n);
	printf ("\n\n");
	j = 1;
	while (j <= n)
	{
		i = 1;
		while (i <= n)
		{
			printf ("* ");
			i++;
		}
		printf ("\n");
		j++;
	}
}


	
