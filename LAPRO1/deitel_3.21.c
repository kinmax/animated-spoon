//Exercício 3.21 - Calculadora de salário. Desenvolva um programa que determine o salário semanal bruto de vários funcionários. A empresa paga 'uma hora normal' para cada funcionário pelas primeiras 40 horas trabalhadas, 'uma hora normal e meia' por hora trabalhada a partir de 40 horas. Você recebe uma lista de funcionários da empresa, o número de horas que cada funcionário trabalhou na semana anterior e o valor ganho por hora de cada funcionário. Seu programa deverá ler essas informações para cada funcionário e determinar e exibir o salário que cada um deverá receber.

#include <stdio.h>

int main (void)
{
	int nh;
	float sph, sal, x, vhe;

	nh = 0;

	printf ("\nDigite o número de horas trabalhadas (-1 para finalizar): ");
	scanf ("%d", &nh);		
	
	while (nh != -1)
	{
		printf ("Digite o salário por hora do funcionário: ");
		scanf ("%f", &sph);
		if (nh <= 40)
		{
			sal = nh*sph;
		}
		else
		{
			x = 40*sph;
			vhe = (nh-40)*sph*1.5;
			sal = x+vhe;
		}
		
		printf ("O salário é de R$ %.2f\n\n", sal);

		printf ("\nDigite o número de horas trabalhadas (-1 para finalizar): ");
		scanf ("%d", &nh);


	}

	return 0;
}
		 
	
