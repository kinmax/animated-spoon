#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct strfunc
{
	char nome[71];
	char nascimento[11];
	int rg;
	char admissao[11];
	float salario;
} func[2];

int main (void)
{
	int n, i, menor, maior, p = 0, r = 0;
	printf ("Digite o número de funcionários: ");
	scanf ("%d", &n);
	for (i = 0; i <= n-1; i++)
	{
		printf ("\nDigite o nome do funcionário: ");
		scanf("%s", func[i].nome);
		printf ("Digite a data de nascimento do funcionário no formato AAAA-MM-DD: ");		
		scanf("%s", func[i].nascimento);
		printf ("Digite o RG do funcionário: ");
		scanf ("%d", &func[i].rg);
		printf ("Digite a data de admissão do funcionário no formato AAAA-MM-DD: ");
		scanf("%s", func[i].admissao);
		printf ("Digite o salário do funcionário: ");
		scanf ("%f", &func[i].salario);
		printf ("\n");
	}
	menor = func[p].salario;
	maior = func[r].salario;
	for (i = 0; i <= n-1; i++)
	{
		if ((func[i].salario) < menor)
		{
			p = i;
		}
		if ((func[i].salario) > maior)
		{
			r = i;
		}
	}
	printf ("Nome do funcionário com maior salário: %s\n", func[r].nome);
	printf ("Nome do funcionário com menor salário: %s\n", func[p].nome);
	printf ("Data de admissão do funcionário com menor salario: %s\n", func[p].admissao);

	return 0;
}	
