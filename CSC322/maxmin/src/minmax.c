#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "minmax.h"

int *minmax(int *arr, int size)
{
	int *range = (int *) malloc ( sizeof(int) * 2);
	*(range) = INT_MAX;
	*(range + 1) = INT_MIN;

	for ( int i = 0; i < size; i++ )
	{
		if ( *(arr + i) <= *(range) ) *(range) = *(arr + i);
		if ( *(arr + i) > *(range + 1) ) *(range + 1) = *(arr + i);
	}
	return range;
}

int *newarray(int size)
{
	int *arr = (int *) malloc(sizeof(int) * size);

	fprintf( stdout, "\n");
	for ( int i = 0; i < size; i++ ) 
	{
		*(arr + i) = rand() % 250;
		fprintf(stdout, "%d ", *(arr + i));
	}	

	fprintf( stdout, "\n");
	return arr;
}
