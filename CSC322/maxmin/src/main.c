#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "minmax.h"

int main()
{
	srand(time(NULL));
	int size = rand() % 15;

	int *arr = newarray(size);
	int *range = minmax (arr, size);
	fprintf (stdout, "minimum = %d\nmaximum = %d\n\n", *(range), *(range + 1));

	const int b = 999;
	const int * const p = &b;
	// *p = 100;

	fprintf( stdout, "p = %p\t*p = %d\n", p, *p );
}
