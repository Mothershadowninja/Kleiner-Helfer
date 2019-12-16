/* differentialrechnung.c
Unterprogramm zum Thema Differentialrechnung
FHGR, Photonics Studiengang
Version 1.0
Created at: Dec. 2019
Changes:
NONE */

// Include Headers in Programlibrary.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>



int differentialrechnung (void)
{
	// Variablen
	const float e = 2.718281828459;

	// Theorie
	printf("\n");
	printf("Sie haben Differentialrechnung gewaehlt\n");
	printf("\n");
	printf("Um eine Funktion in WOLFRAMALPHA abzuleiten, gebe folgenden Befehl ein:\n");
	printf("1. Ableitung:\t D[x^2,x]\n");
	printf("5. Ableitung:\t D[y^2*x^7,{x,5}]\n");
	printf("\n");
	printf("Produkt-Regel: f(x) = g(x)*h(x) --> f'(x) = g'(x)*h(x)+g(x)*h'(x)\n");
	printf("Quadrat-Regel: f(x) = g^2(x)    --> f'(x) = 2*g(x)*g'(x)\n");
	printf("Wurzel-Regel:  f(x) = sqrt(g(x) --> f'(x) = (g'(x)/(2*sqrt(g(x))))\n");
	printf("Ketten-Regel:  f(x) = g(h(x))   --> f'(x) = g'(h(x))*h'(x)\n");
	printf("Kurzregel:     f(x) = a^x       --> f'(x) = ln(a)*a^x\n");
	printf("\n");
	printf("Trigonometrische Ableitungen:\n");
	printf("sin'(x) = cos(x)\n");
	printf("cos'(x) = -sin(x)\n");
	printf("tan'(x) = 1+tan^2(x)\n");
	printf("cot'(x) = -1-cot^2(x)\n");
	printf("\n");
	printf("Hyperbolische Ableitungen:\n");
	printf("sinh'(x) = cosh(x)\n");
	printf("cosh'(x) = sinh(x)\n");
	printf("tanh'(x) = 1-tanh^2(x)\n");
	printf("coth'(x) = 1-coth^2(x)\n");
	printf("\n");
	printf("Eulersche Zahl e = %f\n",e);
	printf("exp(x) = e^x\n");
	printf("ln(x) = log(e)(x)\n");
	printf("exp'(x) = exp(x)\n");
	printf("ln'(x) = 1/x\n");
	printf("\n");

return 0;
}
