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
#include <conio.h>




int Elementarfunktion (){
    int auswahl;
    char i;

    printf("Das kann ich Dir bieten\n");

    while (i != 'e')
    {
		printf(" -1- Lineare Funktion \n");
		printf(" -2- Verallgemeinerte Exponentialfunktion\n");
		printf(" -3- Zuruck zum Hauptmenu\n");
	    printf(" -4- Tictactoe");
		printf("Was darf es sein?:");
	    scanf("%d",&auswahl);

	    switch (auswahl)
	    {
		case 1:
		lineare_funktion();
		break;
	    case 2:
		verallgemeinerte_exponentialfunktion();
		break;
		case 3:
        tictactoe();
		break;
		case 4:
		printf("Danke fürs vorbeischauen und bis bald");
        i = 'e';
		break;
	    default:
        printf("Falsche Eingabe bitte erneut eingeben\n");

		break;
	    }


    }

    system("PAUSE");
    return 0;
}

int lineare_funktion  (void){

	printf("Lineare Funktionen: \n\n");
	printf(" Grund - Form \n");
	printf("  f(x)= m * x  +  q \n");
	printf(" Steigung delta y / delta x \n");
	printf(" Taylor - Form/Punkt - Steigungsform\n");
	printf("    gegeben: m, (x0 ; y0) \n");
	printf("    f(x) = m * (x - x0) + y0   \n");
	printf("2-Punkt-Form  \n");
	printf("              y2 - y1      y1 - y2                                       \n");
	printf(" (a) m= ---------- = -------------                                              \n");
	printf("             x2 - x1       x1 - x2                                       \n");
	printf("  \n");
	printf(" (b)  f(x)= m * (x - x1) +y1 = m * (x-x2) +y2 \n");



	return 0;


}
int verallgemeinerte_exponentialfunktion(void){

	printf("Verallgemeinerte Exponentialfunktion  \n");
	printf("                           x - x0         \n");
	printf("  f(x) = y0 * a^ -------------	\n");
	printf("                              E         \n");
	printf("                                          y \n");
	printf("  f^-1(y) = x0 + E * loga (-----)\n");
	printf("                                         y0      \n");
	printf("Basis - Schrittweitentransformation  \n");
	printf("                         Es                                   Es = sigma schlange  \n");
	printf("  (a)    as =  a^ -----                                  as= a schlange            \n");
	printf("                          E                                                                        \n");
	printf("      \n");
	printf("  (b)    Es = E * loga (as)  \n");

	return 0;
}

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();
int tictactoe()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);

    board();

    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

/*********************************************

FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
O GAME IS OVER AND NO RESULT
 **********************************************/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}


/*******************************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
 ********************************************************************/


void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}

/*******************************************************************
END OF PROJECT
 ********************************************************************/

