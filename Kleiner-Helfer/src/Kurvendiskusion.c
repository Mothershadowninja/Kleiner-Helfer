/* kurvendiskussion.c
Unterprogramm zum Thema Kurvendiskussion
FHGR, Photonics Studiengang
Version 1.1
Created at: Dec. 2019
Changes: Dec. 2019 - Added some code...
*/

// Include Headers in Programlibrary..,
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#define WIDTH  80
#define HEIGHT 40
#define idx(x, y) ((x)+WIDTH*(y))

// Funktionen
struct trail {
	float start;
	float end;
	float speed;
} trails[WIDTH];

void init_trail(struct trail *trail)
{
	trail->start = -(float)(rand() % HEIGHT);
	trail->end = 0;
	trail->speed = (rand() % 5) / 10.0f + 0.2f;
}

void update(CHAR_INFO consoleBuffer[])
{
	CHAR_INFO space = {.Char.AsciiChar=' ', .Attributes=0};

	for (int x = 0; x < WIDTH; x++) {
		for (int y = 0; y < HEIGHT; y++)
			consoleBuffer[idx(x, y)] = space;

		int start = trails[x].start < 0 ? 0 : (int)trails[x].start;
		int end = trails[x].end > HEIGHT ? HEIGHT : (int)trails[x].end;

		for (int y = start; y < end; y++)
			consoleBuffer[idx(x, y)] = (CHAR_INFO) {
			.Char.AsciiChar = rand() % 256,
			.Attributes = FOREGROUND_GREEN |
			(y < (int)trails[x].end-1 ? 0 :
			FOREGROUND_RED | FOREGROUND_BLUE)};

		trails[x].start += trails[x].speed;
		trails[x].end += trails[x].speed;

		if (trails[x].start >= HEIGHT)
			init_trail(&trails[x]);
	}
}


int kurvendiskussion (void)
{
	// Variablen:
	float x = 0;
	float y = 0;
	float a = 0;
	float b = 0;
	float c = 0;	// 666
	float x_1 = 0;
	float x_2 = 0;
	float d = 0;

	// Theorie
	printf("\n");
	printf("Sehr gut - Sie haben das Kapitel Kurvendiskussion gewaehlt\n");
	printf("\n");

	printf("An Tiefpunkt T, Hochpunkt H und Terassenpunkt S hat der Graph von f horizontale Tangenten.\n");
	printf("Es gilt darum: f'(xk)=0\n");
	printf("\n");

	printf("Einfache Kriterien:\n");
	printf("f''(x) < 0                   --> hat Hochpunkt bei xk\n");
	printf("f''(x) > 0                   --> hat Tiefpunkt bei xk\n");
	printf("f''(x) = 0 und f'''(x) != 0  --> hat Terassenpunkt bei xk\n");
	printf("\n");
	printf("Erweiterte Kriterien:\n");
	printf("1) f''(xk) = f'''(xk) = ... = f^(m-1)(xk) = 0\n");
	printf("2) f^(m)(xk) != 0\n");


	printf("Fall 1: Falls m gerade und f^(m)(xk) < 0 --> f hat Hochpunkt bei xk\n");
	printf("Fall 2: Falls m gerade und f^(m)(xk) > 0 --> f hat Tiefpunkt bei xk\n");
	printf("Fall 3: Falls m ungerade                 --> f hat Sattelpunkt bei xk\n");

	printf("\n");

	printf("Fuer die maximalen Anzahlen Nullstellen und kritische Stellen folgt:\n");
	printf("n\t N\t K\n");
	printf("1\t 1\t 0\n");
	printf("2\t 2\t 1\n");
	printf("3\t 3\t 2\n");
	printf("4\t 4\t 3\n");
	printf("5\t 5\t 4\n");
	printf("\n");

    printf("lokales max / min:  in der naeheren Umgebung gibt es keinen groesseren oder kleineren Funktionswert.\n");
	printf("globales max / min: groesster bzw. kleinster Funktionswert im Definitionsbereich.\n");
	printf("\n");
	printf("Falls Sie gerade Lust und Laune haben, die Nullstellen einer quadratischen Funktion zu bestimmen:\n");
	// Eingabe Parameter
	printf("Eingabe Parameter a: ");
	scanf("%f",&a);
	printf("Eingabe Parameter b: ");
	scanf("%f",&b);
	printf("Eingabe Parameter c: ");
	scanf("%f",&c);

	printf("\n");
	// printf("0 = %fa^2 + %fb + (%f)\n",a,b,c);
	// Rechnungen
	x_1=((-b)+(sqrt((b*b)-(4*a*c))))/(2*a);		//Mitternachtsformel x1
	x_2=((-b)-(sqrt((b*b)-(4*a*c))))/(2*a);		//Mitternachtsformel x2
	d=(b*b)-(4*a*c);

	printf("x1 = %.4f\n",x_1);		//Nullstellen
	printf("x2 = %.4f\n",x_2);
	printf("Diskriminante D = %.2f\n",d);

	x=-(b/(2*a));					// Scheitelpunkt x
	y=(c-((b*b)/(4*a)));			// Scheitelpunkt y

	printf("Der Scheitelpunkt liegt bei: S( %.2f | %.2f )\n",x,y);

	printf("\n");

// Rest...
	if (c == 666)
{

	//
	srand((unsigned)time(NULL));

	/* Console window */
	HANDLE wHnd = GetStdHandle(STD_OUTPUT_HANDLE);

	SMALL_RECT windowSize = {0, 0, WIDTH-1, HEIGHT-1};
	SetConsoleWindowInfo(wHnd, TRUE, &windowSize);

	COORD bufferSize = {WIDTH, HEIGHT};
	SetConsoleScreenBufferSize(wHnd, bufferSize);

	CHAR_INFO consoleBuffer[WIDTH * HEIGHT];
	COORD charBufSize = {WIDTH, HEIGHT};
	COORD characterPos = {0, 0};
	SMALL_RECT writeArea = {0, 0, WIDTH-1, HEIGHT-1};

	SetConsoleTitle(TEXT("Enter the Matrix"));


	for (int i = 0; i < WIDTH; i++)
		init_trail(&trails[i]);


	for (;;) {
		update(consoleBuffer);
		WriteConsoleOutputA(wHnd, consoleBuffer,
				charBufSize, characterPos, &writeArea);
		Sleep(16);
	}
	//
}

else
{
	return 0;
}


return 0;
}


