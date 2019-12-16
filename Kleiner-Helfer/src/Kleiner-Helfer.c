/*
 ============================================================================
 Name        : Kleiner-Helfer.c
 Author      : Nicola Anesini,Mauris Otto
 Version     : v0,1
 Copyright   : Your copyright notice
 Description : Kleienr Helfer für Analaysi

 Version 	Datum 		Initalen		Was
 0.1		03.12		NA				Hauptmenu
 0.2		04.12		NA				Modul Menge läuft
 0.3        09.12       CS				Modul Diff. Integrall läuft
 0.4		10.12		CS				Modul Kurvendiskussion hinzugefügt
 0.5		10.12		NA				Modul Menge fertig, Logo Hauptmenu, Console Clear
 0.6		14.12		NA				Modul Mulitabel choose läuft+ Easter EGG
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
int i;

int main(void){

	printf(R"EOF(
  ___              _           _     
 / _ \            | |         (_)    
/ /_\ \_ __   __ _| |_   _ ___ _ ___ 
|  _  | '_ \ / _` | | | | / __| / __|
| | | | | | | (_| | | |_| \__ \ \__ \
\_| |_/_| |_|\__,_|_|\__, |___/_|___/
                      __/ |          
                     |___/   

	)EOF");
	printf("\n");
	printf("Willkommen in der Welt von Analysis\n");
	printf("Das kann ich dir bieten\n");

	while (i != 'e'){
	printf("\t -1- Menge \n");
	printf("\t -2- Funktion\n");
	printf("\t -3- Reihen, Folgen & Grenzwerte\n");
	printf("\t -4- Elementarfunktionen\n");
	printf("\t -5- Differentialrechnung\n");
	printf("\t -6- Integralrechnung\n");
	printf("\t -7- Kurvendiskussion\n");
	printf("\t -8- Multiple Choice Fragen\n");
	printf("\t -0- Zurueck zum Hauptmenu\n");
	printf("Was darf es sein ?");
	scanf("%d",&Auswahl);

	switch (Auswahl){
	 case 1:
		 system("cls");
		 Menge();
		 system("cls");
	   	 break;
	 case 2:
		 system("cls");
		 printf("2");

	   	 break;
	 case 3:
		 system("cls");
		 printf("3");

	   	 break;
	 case 4:
		 system("cls");
		 Elementarfunktion ();

		 break;
	 case 5:
		 system("cls");
		 differentialrechnung();

		 break;
	 case 6:
		 system("cls");
		 integralrechnung();

	   	 break;
	 case 7:
		 system("cls");
		 kurvendiskussion();

		 break;
	 case 8:
		 system("cls");
		 mulitablechose();

		 break;
	 case 0:
	   printf("0");
	   i = 'e';
	   printf("Danke das sie unser System genutzt haben");
	   break;
	 default:
		 printf("Bisch du blöd?? Flasche Eingabe");
	   break;
	}

	}
}

