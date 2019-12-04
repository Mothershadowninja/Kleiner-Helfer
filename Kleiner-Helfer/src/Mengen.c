/*
 ============================================================================
 Name        : Kleiner-Helfer.c
 Author      : Nicola Anesini,Maruis Otto
 Version     : v0,1
 Copyright   : Your copyright notice
 Description : Kleiner Helfer für Mengen

 Version 	Datum 		Initalen		Was
 0.1		03.12		NA				Hauptmenu
 0.2 		04.12 		NA				Haupmenge,Intervall,Modifkationen
 ============================================================================
 */
// Benutze Libarys
#include <stdio.h>
#include <stdlib.h>

int Menge (){
    int auswahl;
    char i,j;
	printf("Willkommen im Reich der Mengen\n");
    printf("Das kann ich dir biten\n");

    while (i != 'e')
    {

	    printf(" -1- Grundmenge        \n");
	    printf(" -2- Modiifikationen   \n");
	    printf(" -3- Intervalle        \n");
	    printf(" -4- Zuruck zum Hauptmenu\n");
	    printf("Was draf sein:");
	    scanf("%d",&auswahl);

	    switch (auswahl)
	    {
	    case 1:
		Grundmengen();
		break;
	    case 2:
		Modifikationen();
		break;
	    case 3:
		Intervalle();
		break;
	    case 4:
        printf("Danke für vorbeischauen und bis bald");
        i = 'e';
		break;

	    default:
        printf("Falsche Eingabe bitte erneut eingeben\n");

		break;
	    }


    }

    system("PAUSE");

}

int Grundmengen (void){

	printf("Es gibt folgende Grundmenge\n\n");
	printf("N = natuerlichen Zahlen\n");
	printf("0,1,2,3,4,25,695,114554\n\n");
	printf("Z = ganze Zahlen\n");
	printf("0,-1,1,-2,2,-3,3,-25,25,-605,605,-114554,144554\n\n");
	printf("Q = rationale Zahlen\n");
	printf("1/2,3/4,4/5\n\n");
	printf("R = relle Zahlen\n");
	printf("1/5,1/9,1/10\n\n");
	printf("C = komplexe Zahlen\n");
	printf("6\n");


}
int Modifikationen(void){
	printf("Es gibt folgende Modifkatoren\n");
	printf("A^+ := {x in A | x > 0}\n");
	printf("A_0^+ := {x in A | x >= 0}\n");
	printf("A^- := {x in A | x < 0}\n");
	printf("A_0^- := {x in A | x <= 0}\n\n");

	printf("Erklaerung\n");
	printf("A^+ = A hoch +\n");
	printf("A^+- = A hoch -\n");
	printf("A_0^+ = A0 hoch +\n");
	printf("A_0^- = A0 hoch -\n");
	printf("<= = kleiner/gleich\n");
	printf(">= = groesser/gleich\n");

}
int Intervalle(void){
    char b;
	printf("Das sind die Intervallen\n\n");
	printf("Endliche Intervalle b > a\n");
	printf("[a,b] := {x in R | a <= x <= b}\n");
    printf("[a,b[ := {x in R | a <= x < b}\n");
    printf("]a,b] := {x in R | a < x <= b}\n");
	printf("]a,b[ := {x in R | a < x < b}\n");
	printf("Unendliche Intervalle a,b\n");
	printf("]-∞,b] := {x in R | x <= b}\n");
	printf("]-∞,b[ := {x in R | x <  b}\n");
	printf("[a, ∞[ := {x in R | a <= x}\n");
    printf("]a, ∞[ := {x in R | a < x}\n");


}
