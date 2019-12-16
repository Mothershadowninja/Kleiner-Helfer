#ifndef analysi.h
#define analysi.h

// Mengen
int Menge (void);
int Grundmengen (void);
int Modifikationen(void);
int Intervalle(void);
int Defition (void);
int Vereinungsmenge (void);
// Funktionen

// Folgen Reihen & Grenzwerte

// Integralrechnung
int integralrechnung (void);

// Elemtarfunktionen

// Kurvendiskussion
int kurvendiskussion (void);

//Diffenrzialrechnung
int differentialrechnung (void);

//Mulitablechose Fragen
int mulitablechose (void);
int Random (void);
void genMap();
void draw();
void move();
void genPlayer();
void genEnemy();
void hideCursor();
void kInp();
void genDefDir();
void goToXY(int column, int line);
void grow();
void freeMove();
void reset();
int Snake();

#endif
