/*
 ============================================================================
 Name        : Kleiner-Helfer.c
 Author      : Nicola Anesini,Mauris Otto
 Version     : v0,1
 Copyright   : Your copyright notice
 Description : Kleienr Helfer f�r Analaysi

 Version 	Datum 		Initalen		Was
 0.1		03.12		NA				Hauptmenu
 0.2		04.12		NA				Modul Menge l�uft
 ============================================================================
 */
// Benutze Libarys
#include <stdio.h>
#include <stdlib.h>

// Benutze Header
#include "analysi.h"


// Definiert Variabeln
int Auswahl;
int Stop_Scheilfe;
char i;

int main(void) {

	printf("Willkomen in der Welt von Analaysis\n");
	printf("Das kann ich dir bieten\n");

	while (i != 'e'){
	printf("\t -1- Menge \n");
	printf("\t -2- Funktion\n");
	printf("\t -3- Reihen,Folgen & Grenzwerte\n");
	printf("\t -4- Elemtarfunktionen\n");
	printf("\t -5- Differentzialrechnung\n");
	printf("\t -6- Integralrechnung\n");
	printf("\t -7- Kurvendiskusion\n");
	printf("\t -8- Mulitable-Choosie Fragen\n");
	printf("\t -0- Zurueck zum Hauptmenu\n");
	printf("Was draf es sein ?");
	scanf("%d",&Auswahl);

	switch (Auswahl){
	 case 1:
		 printf("1");
		 Menge();
	   	 break;
	 case 2:
		 printf("2");
	   	 break;
	 case 3:
		 printf("3");
	   	 break;
	 case 4:
		 printf("4");
		 break;
	 case 5:
		 printf("5");
		 break;
	 case 6:
		 printf("6");
	   	 break;
	 case 7:
		 printf("7");
		 break;
	 case 8:
		 printf("8");
		 break;
	 case 0:
	   printf("0");
	   i = 'e';
	   prinft("Danke das sie unser System genutz haben");
	   break;
	 default:

	   break;
	}

	}



}
