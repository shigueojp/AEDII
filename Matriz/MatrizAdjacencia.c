#include "grafo_matrizadj.h"

bool inicializaGrafo(TipoGrafo *grafo, int nv)
{
    int i, j;
    if (nv > MAXNUMVERTICES)
    {
        fprintf(stderr, "Erro: MAXNUMVERTICES > nv");
        return false;
    }
    if (nv < 0)
    {
        fprintf(stderr, "Erro: nv precisa ser positivo");
        return false;
    }
    grafo->numVertices = nv;
    for (int i = 0; i <= grafo->numVertices; i++)
    {
        for (int j = 0; j <= grafo->numVertices; j++)
        {
            grafo->mat[i][j] = AN;
        }

        return true;
    }
}

bool removeAresta(int v1, int v2)
{
}

void insereAresta(int v1, int v2, TipoPeso peso, TipoGrafo *g)
{
    if (existeAresta(v1, v2, g))
    {
        g->mat[v1][v2] = peso;
        g->mat[v2][v1] = peso;
    }
    else
    {
        g->numArestas++;
        g->mat[v1][v2] = peso;
        g->mat[v2][v1] = peso;
    }
}

bool existeAresta(int v1, int v2, TipoGrafo *g)
{
    if (g->mat[v1][v2] != AN || g->mat[v2][v1] != AN)
        return true;
    return false;
}
