//Kin Max Piamolini Gusmão	Turma: 490	16104046-4	kin.gusmao@acad.pucrs.br

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
	int dia;
	char diaext [51];	

	printf ("\nDigite o número do dia da semana (1-7): ");
	fscanf (stdin, "%d", &dia); //variação do scanf que diz onde o texto está sendo lido. No caso, no fluxo padrão de entrada.
	switch (dia)
	{
		case 1:
			strcpy(diaext, "Domingo");
			break;
		case 2:
			strcpy(diaext, "Segunda-Feira");
			break;
		case 3:
			strcpy(diaext, "Terça-Feira");
			break;
		case 4:
			strcpy(diaext, "Qaurta-Feira");
			break;
		case 5:
			strcpy(diaext, "Quinta-Feira");
			break;
		case 6:
			strcpy(diaext, "Sexta-Feira");
			break;
		case 7:
			strcpy(diaext, "Sábado");
			break;
		default:
			fprintf (stderr, "\n***ERRO: Valor Inválido***\n"); //variação do printf que diz onde o texto está sendo impresso. No caso, no fluxo padrão de erro.
			return EXIT_FAILURE;
	}

	fprintf (stdout, "\nO dia %d corresponde ao dia: %s\n", dia, diaext); //variação do printf que diz onde o texto está sendo impresso. No caso, no fluxo padrão de saída.	

	return EXIT_SUCCESS;
}
			
	
