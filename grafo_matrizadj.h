#include <stdio.h>
#include <stdlib.h>

#define MAXNUMVERTICES 100
#define AN -1
#define VERTICE_INVALIDO -1

#define false 0
#define true 1
#define bool int

typedef int TipoPeso;
typedef struct
{
    TipoPeso mat[MAXNUMVERTICES + 1][MAXNUMVERTICES + 1];
    int numVertices;
    int numArestas;
} TipoGrafo;
typedef int TipoApontador;
