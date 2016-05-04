/* Kin Max Piamolini Gusmão	LAPRO I		Turma 490	kin.gusmao@acad.pucrs.br*/

#include <stdio.h>

int main (void)
{
	int n, i; // n = entrada; i = contador/saída
	i = 1; // inicializa o contador i como 1
	printf ("\nDigite um número: ");
	scanf ("%d", &n);
        printf ("\n"); 
	while (i <= n)
	{
		printf ("%d ", i);
		i++; // acrescenta 1 ao contador i
	}
	printf ("\n");		

	return 0;
}
