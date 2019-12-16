/* integral.c
Unterprogramm zum Thema Integralrechnung
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



int Integralrechnung (void)
{
	// Theorie
	printf("\n");
	printf("Sie haben das Modul Integralrechnung gewaehlt\n");
	printf("\n");

	printf("Um eine Funktion in WOLFRAMALPHA abzuleiten, gebe folgenden Befehl ein:\n");
	printf("Beispiel 1:\t Integrate[x^2,x]\n");
	printf("Beispiel 2:\t Integrate[x^2,{x,1,2}]\n");

	printf("\n");

	printf("Um eine Funktion in GEOGEBRA abzuleiten, gebe folgenden Befehl ein:\n");
	printf("Gebe zuerst die Funktion ein: h(x)=sin(x)\n");
	printf("Dann das Integral; von bis:   j=Integral(h,0,0.5*Pi)\n");

	printf("\n");

	printf("Regeln:\n");
	printf("--> Hochzahl +1\n");
	printf("--> durch neue Hochzahl teilen\n");
	printf("--> hinten + c\n");
	printf("\n");
	printf("F(x) --ableiten--> f(x) --ableiten--> f'(x)\n");
	printf("F(x) <--integrieren-- f(x) <--integrieren-- f'(x)\n");
	printf("\n");
	printf("Ableiten:    sin(x) ---> cos(x) ---> -sin(x) ---> -cos(x) ---> sin(x)");
	printf("Integrieren: sin(x) <--- cos(x) <--- -sin(x) <--- -cos(x) <--- sin(x)");
	printf("\n");



return 0;
}
