#include <stdio.h>

int main (void)
{
	FILE *arquivo;
	int n;

	arquivo = fopen ("entrada.txt", "r");
	while (! feof(arquivo))
	{
		fscanf (arquivo, "%d", &n);
		printf ("\nO número lido foi %d\n\n", n);
		n = -1;	

	}
	fclose (arquivo);

	return 0;
}
