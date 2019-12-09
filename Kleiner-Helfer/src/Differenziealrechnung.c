// Include Headers in Programlibrary.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>



int Differentialrechnung (void)
{


	printf("Sie haben Differentialrechnung gewaehlt\n");
	printf("Um eine Funktion in WolframAlpha abzuleiten, gebe folgenden Befehl ein:\n");
	printf("1. Ableitung:\t\t\t D[x^2,x]\n");
	printf("Um die 5. Ableitung zu erhalten: D[y^2*x^7,{x,5}]\n");

	printf("\n");

	printf("Produkt-Regel (=Leibniz-Regel): f(x) = g(x)*h(x) --> f'(x) = g'(x)*h(x)+g(x)*h'(x)\n");
	printf("Quadrat-Regel: f(x) = g^2(x) --> f'(x) = 2*g(x)*g'(x)\n");

	printf("\n");
	printf("\n");


return 0;
}


