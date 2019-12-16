/*
 ============================================================================
 Name        : Kleiner-Helfer.c
 Author      : Nicola Anesini,Maurice Otto, Christoph Sturzenegger
 Version     : v0,1
 Copyright   : Your copyright notice
 Description : Kleiner Helfer für Elementarfunktionen

 Version 	Datum 		Initalen		Was
 0.1		08.12		NA				funktionen
 ============================================================================
 */
// Benutze Libarys
#include <stdio.h>
#include <stdlib.h>




int funktionen (){
    int auswahl;
    char i;



    printf("Das kann ich Dir bieten\n");

    while (i != 'e')
    {
		printf(" -1- Definition \n");
		printf(" -2- Grundbegriffe\n");
	    printf(" -3- Massenverarbeitung\n");
	    printf(" -4- Eigenschaften  \n");
	    printf(" -5- Zuruck zum Hauptmenu\n");
	    printf(" -6- SNES??\n");
	    printf("Was darf es sein?:");
	    scanf("%d",&auswahl);

	    switch (auswahl)
	    {
		case 1:
		erklaerung();
		break;
	    case 2:
		grundbegriffe();
		break;
		case 3:
		massenverarbeitung();
		break;
	    case 4:
		eigenschaften();
		break;
	    case 5:
        printf("Danke fürs vorbeischauen und bis bald");
        i = 'e';
		break;
	    case 6:
	    system("START http://www.snesfun.com");
	    break;

	    default:
        printf("Falsche Eingabe bitte erneut eingeben\n");

		break;
	    }


    }

    system("PAUSE");
    return 0;
}

int erklaerung (void){

	printf("Definition: \n\n");
	printf("Seien A,B Mengen. Eine Funktion ist eine eindeutige Zuordnung der Form: \n\n");
	printf("f: A--->B\n");
	printf("   x|--->f(x)   Zuordnungsvorschrift\n");
	printf(" Beispiel: \n");
	printf("f(3,4}--->{7,8,9}\n");
	printf("     x |---> f(x):= x+4\n");
	printf("Schreibweise: f(3)= 3+4 = 7\n");
	printf("f(4)= 4+4 = 8\n");

	return 0;


}
int grundbegriffe(void){

	printf("Grundbegriffe: \n\n");
	printf("|  f     Funktionsname");
	printf("|  x    Argumentenvariable, unabhängige Variable\n");
	printf("| A    Definitionsmenge");
	printf("| f(x) Funktionswert abhängige Variable\n");
	printf("| B    Zielmenge\n");


	return 0;
}
int massenverarbeitung(void){

	printf("Massenverarbeitung:\n\n");
	printf("Ã Teilmenge von A --> f(Ã) := {y E B | y= f(x) mit x E Ã} \n");
	printf(" = Bild von Ã \n");
	printf(" Ñ Teilmenge von N --> f^-1(Ñ) := {x E N | y= f(x)  x E Ñ} \n");
	printf(" = Urbild von  Ñ \n");
	printf(" f(A) = Bildmenge der Funktion\n");
	printf(" Beispiele: f: [0,1] --> [0,2]\n");
	printf("                       x   |--> f(x):= 2x  \n");
	printf(" f(0.3) = 0.6 \n");
	printf(" f({0.1, 0.4, 0.9})  =  {0.2, 0.8, 1.8}  \n");
    printf(" f([0.3, 0.7])  =  [0.6,1.4]  \n\n");

	printf(" Bemerkungen:  \n");
	printf(" Die Zielmenge darf 'zu gross sein'  \n");
	printf("  f: {3,4} --> {7, 8, 9} \n");
	printf("          x |--> f(x):= x+4 \n\n");
	printf(" Die Zielmenge darf NICHT zu klein sein!  \n");
	printf("  f: {3,4} --> {7,9,12} \n");
	printf("          x |--> f(x):=  \n");
	printf("Problem: f(4)= 4+4 = 8 nicht E B\n") ;
	return 0;

}
int eigenschaften (void){

	printf(" Wir betrachten die Funktion der Form  \n");
	printf("  f: A --> B        \n");
	printf("  x |--> f(x)= ...       \n\n");

	printf("1.Surjektivität         \n");
	printf("  f  ist surjektiv  <=> f(A) = B       \n");
	printf(" --> Die Zielmenge ist NICHT zu gross         \n");
	printf(" --> Jedes Element der Zielmenge B wird MINDESTENS einmal erreicht         \n");
	printf(" --> Durch Reduktion von B auf f(A) wird jede Funktion surjektiv.         \n \n");

	printf("2.Injektivität       \n");
	printf(" f ist injektiv  <=> (f(x1) = f(x2) => x1=x2)    \n");
	printf(" --> Jedes Element der Zielmenge wird HÖCHSTENS EINMAL erreicht. \n");
	printf(" --> Durch Reduktion der Definitionsmenge wird jede Funktion injektiv.   \n");
	printf(" Beispiele:   \n");
	printf(" 		f: IR --> IR  \n");
	printf(" 			x  --> f(x)=x^2      f(-x) = f(x) \n");
	printf("                                    --> nicht Injektiv \n");
	printf("     f: IR^+ 0 --> IR  \n");
	printf("         x --> f(x) = x^2    --> injektiv \n\n");

	printf("3.Bijektivität \n");
	printf(" f ist bijektiv <=> f ist surjektiv und injektiv \n");
	printf(" Jedes Element der Zielmenge wird genau einmal erreicht.\n");
	printf(" --> 1 zu 1 - Abbildung. \n");
	printf(" Beispiel:   \n");
	printf("  f: IR^+ 0 --> IR^+ 0\n");
	printf("  		x     --> f(x) = x^2   --> bijektiv\n");
	printf(" --> Umkehrabbildung:   \n");
	printf("  f^-1: IR^+ 0 --> IR^+ 0\n");
	printf("               x     --> f(x)= sqrt x. \n\n");
	printf("Satz:  Eine Funktion ist genau dann umkehrbar, wenn sie bijektiv ist.\n\n");
	printf("Wichtig:  Surjektivität und Injektivität sind unabhängig voneinander.\n\n");
	printf("Def:  Zwei Mengen A,B haben gleich viele Elemente, falls es eine\n");
	printf("         bijektive Funktion     f: A --> B     gibt\n");
    printf("Def:    Eine Menge A heisst ABZAEHLBAR, falls es eine \n");
    printf("           bijektive Funktion   f: IN --> A    gibt oder A endlich ist. \n");
	printf("Satz: IR ist NICHT abzählbar. \n");


	return 0;





}
