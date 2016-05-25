#include <stdio.h>
#include <string.h>

struct scliente 
{
	char nome[41]; //até 40 caracteres
	int ano_nascimento; //quatro dígitos
	char endereco[100]; //até 100 caracteres
	int conta; //número da conta no vetor de contas
	char cgc[15]; //número do Cadastro Geral de Contribuintes (CGC) - 123.123.123-00
} clientes[2000];

struct sconta
{
	int cliente; //número do cliente no vetor de contas
	int ano_abertura; //em anos, desde a abertura da conta
	float saldo; //em reais
} contas[2000];

int main (void)
{
	strcpy(clientes[0].nome, "Michel Miguel Elias Temer Lulia");
	clientes[0].ano_nascimento = 1940;
	strcpy(clientes[0].endereco, "Palacio do Planalto, Brasilia, DF, Brasil");
	clientes[0].conta = 0;
	strcpy(clientes[0].cgc, "123.123.123-00");

	strcpy(clientes[1].nome, "Dilma Vana Roussef");
	clientes[1].ano_nascimento = 1947;
	strcpy(clientes[1].endereco, "Indeterminado, Brasilia, DF, Brasil");
	clientes[1].conta = 1;
	strcpy(clientes[1].cgc, "234.234.234-11");

	strcpy(clientes[2].nome, "José Renan Vasconcelos Calheiros");
	clientes[2].ano_nascimento = 1955;
	strcpy(clientes[2].endereco, "Senado Federal, Brasilia, DF, Brasil");
	clientes[2].conta = 2;
	strcpy(clientes[2].cgc, "666.666.666-66");

	contas[0].cliente = 0;
	contas[0].ano_abertura = 2016;
	contas[0].saldo = 100.00;

	contas[1].cliente = 1;
	contas[1].ano_abertura = 2016;
	contas[1].saldo = 200.00;

	contas[2].cliente = 2;
	contas[2].ano_abertura = 2016;
	contas[2].saldo = 300.00;

		

	return 0;
}
