#include <stdio.h>

int main (void)
{
	FILE *arquivo;
	int c, i;

	arquivo = fopen ("file_in_byte", "r");
	for (i = 1; i <= 10; i++)
	{	
	c = getc(arquivo);
	printf ("\n%d %c %x\n", c, c, c);
	}
	fclose (arquivo);

	return 0;
}
