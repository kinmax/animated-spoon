#include <stdio.h>

int main ()
{
	FILE *arquivo;  	
	
	arquivo = fopen ("saida.txt", "w");
	fprintf (arquivo, "\nHello World\n\n");
	fclose (arquivo);

  	return 0;
}
