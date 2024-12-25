#ifndef MYGRAPH_H_
#define MYGRAPH_H_
#include <stdbool.h>

typedef union label
{
	// char *str;
	int integer;
	float flt;
}Label;

typedef struct vertex
{
	Label label;
	bool visited;
}Vertex;

typedef struct vertices
{
	Vertex *vertices;
}Vertices;

typedef struct edges
{
	Vertex **edges;	
}Edges;

typedef struct graph
{
	Vertices vs;
	Edges es;
}Graph;

Graph *graphinit(int);

Vertex *addvertex(Label);

void addvertices(Graph*, int);

void addedges(Graph *, int);

void printGraph(Graph *);

#endif
