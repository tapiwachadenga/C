#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "myGraph.h"

Graph *graphinit(int size)
{
	Graph *graph = (Graph *) malloc (sizeof(Graph));
	Vertices vertices = (Vertices *) malloc (sizeof(Vertex) * size);
	Edges edges = (Edges *) malloc (sizeof(Vertex) * size * 2);

	graph->vs = vertices;
	graph->es = edges;
	return graph;
}
 /*
Vertex *addvertex(Label l)
{
        Vertex *vet = (Vertex *) malloc (sizeof(Vertex));
        vet->label = l;
        vet->visited = 0;
        return vet;
}
*/

void addvertices(Graph *gr, int size)
{
	for (int i = 0; i < size; i++ ) 
	{
	    Label l;
            l.integer = rand() % 250;
            Vertex v;
            v.label = l;
            v.visited = 0;
	    *(gr->vs.vertices + i) = v;// (Vertex) ( (Label) ( rand() % 250 ) );
	}
}

void addedges(Graph *gr, int num)
{
	int vertices[2];
	for (int i = 0; i < num; i++)
	{
		fprintf( stdout, "Enter 1st vertex: ");
		fscanf( stdin, "%d", &vertices[0]);
		fprintf( stdout, "Enter 2nd vertex: ");
		fscanf( stdin, "%d", &vertices[1]);
		*(gr->es) = vertices;
	}
}
