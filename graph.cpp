#include <iostream>
#include "graph.h"

using namespace std;

void createVertex_103012300198(char newVertexID, adrVertex &v)
{
    v = new vertex;
    idVertex(v) = newVertexID;
    nextVertex(v) = NULL;
    firstEdge(v) = NULL;
}
void initGraph_103012300198(graph &G)
{
    firstVertex(G) = NULL;
}
void addVertex_103012300198(graph &G, char newVertexID)
{
    // Buat vertex baru
    adrVertex v;
    createVertex_103012300198(newVertexID, v);

    // Tambahkan vertex baru ke dalam graf
    if (firstVertex(G) == NULL)
    {
        firstVertex(G) = v;
    }
    else
    {
        adrVertex Q = firstVertex(G);
        while (nextVertex(Q) != NULL)
        {
            Q = nextVertex(Q);
        }
        nextVertex(Q) = v;
    }
}

void buildGraph_103012300198(graph &G)
{
    char ID;
    bool vertextExist;
    cin >> ID;
    while ((ID >= 'A' && ID <= 'Z')) {
        vertextExist = false;
        adrVertex Q = firstVertex(G);
        while (Q != NULL)
        {
            if (idVertex(Q) == ID) {
                vertextExist = true;
                break;
            }
            Q = nextVertex(Q);
        }

        if (!vertextExist)
        {
            addVertex_103012300198(G, ID);
        }
        cin >> ID;
    };
}
