#include <stdio.h>

typedef long inteiro;

typedef struct defcli {int a; int b;} CLIENTE; //o nome defcli é opcional e, nesse caso, inútil

CLIENTE c1, c2;
CLIENTE c3;

int main (void)
{
	inteiro a; //long a;
	CLIENTE c4;
	
	a = 42;
	printf ("A=%ld\n", a);
	
	return 0;
}
