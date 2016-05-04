#include <stdio.h>

int main (void)
{
	int dia;

	printf ("\nDigite do número do dia da semana, 0 para sair: ");
	scanf ("%d", &dia);	

	if (dia == 1)
	{
		printf ("\nDomingo\n");
	}
	else if (dia == 2)
	{
		printf ("\nSegunda-Feira\n");
	}
	else if (dia == 3)
	{
		printf ("\nTerça-Feira\n");
	}
	else if (dia == 4)
	{
		printf ("\nQuarta-Feira\n");
	}
	else if (dia == 5)
	{
		printf ("\nQuinta-Feira\n");
	}
	else if (dia == 6)
	{
		printf ("\nSexta-Feira\n");
	}
	else if (dia == 7)
	{
		printf ("\nSábado\n");
	}
	else if (dia == 0)
	{
		printf ("\n****FIM****\n");
	}	
	else
	{
		printf ("\nValor Inválido\n");
	}


	return 0;
}
