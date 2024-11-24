#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#define idVertex(v) (v->idVertex)
#define nextVertex(v) (v->nextVertex)
#define firstEdge(v) (v->firstEdge)
#define firstVertex(G) (G.firstVertex)

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

struct vertex {
    char idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct edge {
    char destVertexID;
    int weight;
    adrEdge nextEdge;
};

struct graph {
    adrVertex firstVertex;
};

void createVertex_103012300198(char newVertexID, adrVertex &v);
void initGraph_103012300198(graph &G);
void addVertex_103012300198(graph &G, char newVertexID);
void buildGraph_103012300198(graph &G);

#endif // GRAPH_H_INCLUDED
