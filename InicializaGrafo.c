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

main() {
    printf("%d", true);
    getchar();
}