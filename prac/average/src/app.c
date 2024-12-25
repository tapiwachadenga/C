#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "average.h"
#include "array.h"

int main ()
{
	srand((unsigned)time(NULL));

	int *len = (int *) malloc(sizeof(int));
	double *result = (double *) malloc(sizeof(double));

	*len =  1 + rand() % 15;
	int *array = createArray(len);
	result = average(array, len);
	fprintf (stdout, "\nArray Average: %.2f\n\n", *result);
	return EXIT_SUCCESS;
}

