/*
 ============================================================================
 Name        : Kleiner-Helfer.c
 Author      : Nicola Anesini,Seam Reinmann
 Version     : v0,1
 Copyright   : Your copyright notice
 Description : Kleienr Helfer für Analaysi

 Version 	Datum 		Initalen		Was
 0.1		22:37		NA				Hauptmenu
 ============================================================================
 */
// Benutze Libarys
#include <stdio.h>
#include <stdlib.h>

// Benutze Header


// Definiert Variabeln
int Auswahl;
int Stop_Scheilfe;

int main(void) {

	printf("Willkomen in der Welt von Analaysi\n");
	printf("Das kann ich dir bieten\n");
	printf("\t -1- \n");
	printf("\t -2- \n");
	printf("\t -3- \n");
	printf("\t -4- \n");
	printf("\t -5- \n");
	printf("\t -6- \n");
	printf("\t -7- \n");
	printf("\t -0- \n");
	printf("Was draf es sein ?");
	scanf("%d",&Auswahl);

	switch (Auswahl){
	 case 1:
	   printf("1");
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
	 case 0:
	   printf("0");
	   break;
	 default:

	   break;
	}





}
