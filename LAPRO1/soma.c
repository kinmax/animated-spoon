#include <stdio.h>
#include <math.h>

int main ()
{
	int x,y,ans;

	printf ("\nDigite o primeiro número: ");
	scanf ("%d", &x);
	printf ("\nDigite o segundo número: ");
	scanf ("%d", &y);
	ans = x + y;
	printf ("\nA resposta é: %d", ans);
	printf ("\n\n");

	return 0;	
}
