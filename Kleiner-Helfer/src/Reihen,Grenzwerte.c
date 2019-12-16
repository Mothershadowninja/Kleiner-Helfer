/*
 ============================================================================
 Name        : Kleiner-Helfer.c
 Author      : Nicola Anesini,Maurice Otto, Christoph Sturzenegger
 Version     : v0,1
 Copyright   : Your copyright notice
 Description : Kleiner Helfer für Elementarfunktionen

 Version 	Datum 		Initalen		Was
 0.1		      12.12 		   mo       funktionen
 0.2            13.12           mo       Grenzwerte


 ===========================================================================
 */
// Benutze Libarys
#include <stdio.h>
#include <stdlib.h>




int reihe (){
    int auswahl;
    char i;

    printf("Das kann ich Dir bieten\n");

    while (i != 'e')
    {
		printf(" -1- Definition \n");
		printf(" -2- Eigenschaften\n");
	    printf(" -3- Beschraenktheit\n");
	    printf(" -4- Bekannte Ergebniss  \n");
	    printf(" -5- Reihen\n");
		printf(" -6- Zuruck zum Hauptmenu\n");
	    printf("Was darf es sein?:");
	    scanf("%d",&auswahl);

	    switch (auswahl)
	    {
		case 1:
		Definition();
		break;
	    case 2:
		Eigenschaften();
		break;
		case 3:
		Beschraenktheit();
		break;
	    case 4:
		Bekannte_Ergebnisse();
		break;
		case 5:
		Reihen();
		break;

	    case 6:
        printf("Danke fürs vorbeischauen und bis bald");
        i = 'e';
		break;
	    case 7 :
	    system("START http://www.windows93.net/#!hl3");
	    break;

	    default:
        printf("Falsche Eingabe bitte erneut eingeben\n");

		break;
	    }


    }

    system("PAUSE");
    return 0;
}

int Definition (void){

	printf("Definition: \n\n");
	printf("Eine FOLGE ist eine Funktion der Form:  \n");
	printf("    			a: IN --> B\n");
	printf("Bemerkungen:     \n");
	printf(" 1.Statt IN kann auch IN^+ verwendet werden\n");
	printf(" 2.Schreibweise    \n");
	printf("   a(0) =: a0 \n");
	printf("   a(1) =: a1 \n");
	printf("   a(n) =: an \n");
	printf(" 3. Die Funktionswerte a0, a1, a2.... \n");
	printf("       heissen Folgeglieder. \n");
	printf(" 4. Jedes Folgeglied hat einen eindeutigen \n");
	printf("     Nachfolger: a k+1 ist nachfolger von a k\n");
	printf(" 5. Anwendungen: \n");
	printf("     Informatik (Algorithmen) \n");
	printf("     Computersimulationen \n");
	printf("Schreibweise: f(3)= 3+4 = 7\n");
	printf("f(4)= 4+4 = 8\n");

	return 0;


}
int Eigenschaften(void){

	printf("Eigenschaften: \n\n");
	printf("Reelle Zahlenfolge Beispiele\n");
	printf(" an := 2^n\n");
	printf(" a0 = 1; a1 = 2; a2 = 4; a3 = 8,... \n");
	printf(" an: 3n+1 \n");
	printf(" a0= 1; a1= 4; a2= 7;...\n");
	printf(" an= (-1)^n \n");
	printf(" a0= 1; a1=-1; a2=1; a3=-1;...\n");
	printf(" Spezielle Folgen\n");
	printf(" Arithmetische Folge:\n");
	printf(" a0 = Startwert; a k+1 = ak + C \n");
	printf(" --> lineare Funktion \n");
	printf(" Geometrische Folge \n");
	printf(" a0 = Startwert; a k+1 = ak * C\n");
	printf(" --> Exponentialfunktion \n");


	return 0;
}
int Beschraenktheit(void){

	printf("Beschraenktheit:\n\n");
	printf("nach oben beschraenkt <=> an <= a0 \n");
	printf("nach UNTEN beschraenkt <=> an=> au\n");
	printf("                       beschraenkt <=> an E [au,ao] \n");
	printf("Die Werte der Schranken au und ao haengen von der Folge ab. \n");
	printf("Beispiel: an = n+2/n+1\n");
	printf("Abschaetzung nach unten: \n");
	printf(" an= n+2/n+1>= n+2/n+2= 1 =: au\n");
	printf("Abschaetzung nach oben: \n");
    printf("an= n+2/n+1<= 2n+2/n+1 = 2*(n+1)/n+1 = 2 =: a0\n");
	printf("  --> an E [1,2] \n\n");

	printf(" Monotonie: \n");
	printf(" monoton steigend <=> a k+1 >= ak\n");
	printf(" streng monoton steigend <=>a k+1 > ak  \n");
	printf(" monoton fallend <=> a k+1 <= ak\n");
	printf(" streng monoton fallend <=> a k+1 < ak  \n");
	printf("Beispiele:  \n");
	printf("        n+2                ( (n+1)+2)              n+3                   \n");
	printf("an= -----  ; an+1 = ------------------  =   -----------         \n");
	printf("        n+1                   (n+1)+1               n+2    \n");

	printf("                                      n+3         n+2        (n+3) * (n+1)        (n+2) * (n+2)    \n");
	printf(" dn:= an+1 - an  =       ---------  -  -------  =  -------------------- -   ------------------    \n");
	printf("                                      n+2         n+1         (n+2) * (n+1)       (n+2) * (n+1)    \n");


	printf("   (n^2 + 3n + n + 3 - n^2 - 4n - 4)                     -1 < 0              \n");
	printf("   -------------------------------------------   =  -----------------------------  \n");
	printf("        ((n+2) * (n+1))                                       (n+2) * (n+1)       \n");
	printf(" --> an ist streng monoton fallend !  \n\n");

	printf(" Konvergenz \n");
	printf("Idee: Für Steigendes n naehert sich  an  immer mehr einem Grenzwert a an.      \n");
	printf(" Beispiel: \n");

	printf("        n+2      (n * (1+(2/n)))       1+ (2/n)                  1+0    \n");
	printf("an= -----  =   ------------------  =   -----------     ---->     ------- = 1\n");
	printf("        n+1       n * (1+(1/n))         1+ (1/n)    n ->∞     1+0 	\n");
	printf(" an ist konvergent mit Grenzwert a=1  \n");
	printf("Kriterium von Cauchy:\n");
	printf("Def: Eine Folge an konvergiert gegen den Grenzwert a, \n");
	printf("        falls es für jede noch so kleine Abweichung E > 0 ein N E IN \n");
	printf("        gibt mit \n");
	printf("              |an - a| < E \n");
	printf("        für alle n >= N. \n");
	printf("Def: Eine Folge divergiert, falls sie nicht konvergiert.   \n");
	printf("Beispiele: \n");
	printf("          1                             \n");
	printf("an =  ---     ---->   0     (Konvergent)       \n");
	printf("          n    n ->∞                \n");

	printf("                                 \n");
	printf("an =  3n    ---->     ∞  (divergent)       \n");
	printf("                 n ->∞                \n");

	printf("                                 \n");
	printf("an =  (-1)^n     -------->     ?  (divergent)       \n");
	printf("                         n ->∞                \n");

	printf("          1                      \n");
	printf("an =  ---- (-1)^n   --------->     0 (konvergent)       \n");
	printf("          n                 n ->∞                \n");

	return 0;

}
int Bekannte_Ergebnisse (void){

	printf("an beschraenkt --> an divergent\n");
	printf("an beschraenkt und an monoton --> an konvergent\n");
	printf("Exponentialterme besiegen Potenzterme  \n");
	printf("   an = n^3 (1/2)^n \n");
	printf("                          1    \n");
	printf("   an =  n^3  *  (---)^n     --------->     0 (konvergent)       \n");
	printf("               |          2          n ->∞                \n");
	printf("               |           |                \n");
	printf("              ∞          0  \n");

	printf("               1                                                                                 \n");
	printf("   an =  -----             *   (1.000`000`000`000`1)^n             --------->     ∞ (divergent)       \n");
	printf("             n^10`000                                                               n ->∞                \n");

	printf("   an = C = konst.  \n");
	printf("   --> an ist beschränkt \n");
	printf("         an ist monotonfallend 1 monoton steigend  \n");
	printf("         an --------->      c (Konvergent) \n");
	printf("              n ->∞                                    \n");


	return 0;





}

int Reihen (void){

	printf(" Summen - Zeichen              (Beachte: grosses E stellt im diesen Abschnitt Summen-Zeichen dar  \n");
	printf("Idee: Schreibweise für Summen mit vielen Summanden \n");
	printf("Beispiele: 	\n");
	printf("                                      118            \n");
	printf("  7 + 8 + 9 +.... + 118 =  E K \n");
	printf("                                      K=7 \n");

	printf("                                                12\n");
	printf("  4+ 9 + 16 + 25 +....+ 144 =   E K^2\n");
	printf("                                                 K=2\n");

	printf(" 1      2             58         58  K                                                                                      \n");
	printf(" --- + --- +     + ---- =      E  ----                                                                                     \n");
	printf(" 3       3    ....     3        K=1  3                                                                                      \n");

	printf(" 												  50														\n");
	printf("  2 + 4 + 6 + 8 + .... + 100  =  E	 2K	\n");
	printf(" 												 K=1															\n");

	printf("                                    26                  25                                                    \n");
	printf(" 7 + 9 + 11 +...+ 51 =   E  (2K -1) =   E (2K + 1)                                      \n");
	printf("                                  K=4                K=3                                                   \n");

	printf("      1       1     1                 1       81   (-1)^K+1                                           \n");
	printf(" 1- ---- + --- -	---	 + ....  + -----	 =   E 	------------										      \n");
	printf(" 		 2		  3	 4				   81		K=1		  K 											     \n");

	printf("Satz Rechenregeln  \n");
	printf("                 b                        b                                                                      \n");
	printf(" (a)           E C * f(k) = C *  E  f(k)       (Ausklammern)                               \n");
	printf("    		     k=a                      k=a                                                                  \n");

	printf("                b              b+c               b-c                                                          \n");
	printf(" (b)          E f(k)  =     E   f(k-c) =    E  f(k+c)          (Verschiebung)             \n");
	printf("              k=a          k=a+c           k=a-c                                                     \n\n");

	printf("                                     b                                                                           \n");
	printf(" (c)     Die Summe       E   besteht aus  (b-a+1) Summanden.                \n");
	printf("                                   k=a                                                                         \n");

	printf("                   b                                                                                            \n");
	printf(" (d)             E C  =  (b-a+1) * C                                                                \n");
	printf("                 k=a                                                                                    \n  \n");

	printf("Satz: Geometrische Summen - Formel                                                 \n");
	printf("  Für alle x E IR \ {0.1} und m,n E IN mit m<n gilt.                                 \n");
	printf("      n                                       x^m - x^n+1                                             \n");
	printf("      E    x^k     =  G(m;n)^x = ------------------                                           \n");
	printf("     k=m                                       1 -  x                                                 \n\n");

	printf("Geometrische Reihen                                                                            \n");
	printf(" Idee: Geometrische Summe für  n --> ∞                                              \n");
	printf(" Beispiele: 	\n");
	printf("    x=2 ; m=0 	                                                                                     \n");
	printf("        n                                                                                                     \n");
	printf("        E     2^k = 1+2+3+8+...+2^n    ---------->  ∞  divergent                 \n");
	printf("     K=0                                                n ->∞                                          \n");

	printf("Satz: Konvergenz geometrischer Reihen                                             \n");
	printf("   sei x E IR \ {0,13} dann gilt                                                                 \n");

	printf("          ∞                          n                       x^m - x^n+1                            \n");
	printf("          E    x^k =   lim      E   x^k = lim     -------------------                          \n");
	printf("        k=m          n ->∞  k=m         n ->∞        1 - x                                   \n");

	printf("              x^m          |                                                                  \n");
	printf("        ={ ---------       |   x E ] -1,1[                                                \n");
	printf("              1 - x         |      sonst.                                                   \n");
    printf("            divergent   |                                                                   \n");


	printf("Basler Reihen                                                                                                    \n");
	printf("Satz Euler - Regeln                                                                                           \n");
	printf("              n   1                     1        1      1               1                                           \n");
	printf("   (a)      E  ---        = 1 +  ---- +  ---- + ---- + .... + ----  -------->  ∞                      \n");
	printf("          K=1   k                    2        3       4               n    n ->∞                         \n \n");

	printf("              n   1                   1        1      1               1                           pi ^2            \n");
	printf("   (b)      E  ---       = 1 +  ---- +  ---- + ---- + .... + ----     -------->  ∞  ----------         \n");
	printf("          K=1   k^2               4        9      16             n^2    n ->∞             6           \n \n");

	printf("                        1                                             \n");
    printf("  (b)      E        ---  ----->  ∞      divergent.        \n");
	printf("      p e prim-   p                                              \n");
	printf("         zahlen                                                    \n");


		return 0;

}
