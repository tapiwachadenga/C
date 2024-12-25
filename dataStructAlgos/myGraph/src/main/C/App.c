#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "myGraph.h"

int main()
{
	Graph *gr = graphinit(5);
	addvertices(gr, 5);

	return EXIT_SUCCESS;
}
