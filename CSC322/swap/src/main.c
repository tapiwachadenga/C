#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "swap.h"

int main()
{
	srand(time(NULL));

	FILE *f = fopen("/dev/pts/2", "w");

	int x = rand() % 250;
	int y = rand() % 250;

	fprintf ( f, "\nBefore swap, x = %d and y = %d\n", x, y);
	
	swap( &x, &y );
	
	fprintf (f, "\nAfter swap, x = %d and y = %d\n\n", x, y);

	return EXIT_SUCCESS;
}
