#include <stdio.h>
#include <stdlib.h>
#include "average.h"

double *average(int *arr, int *len)
{
	double *result = (double *)malloc(sizeof(double));
	double total = 0.0;

	for (int i = 0; i < *len; i++)
		total += (double) *(arr + i );

	*result = total / (double) *len;
	return result;	
}

