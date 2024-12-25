#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "header_file.h"

double average ( int *arr, int size )
{
	double sum = 0.0;
	for ( int i = 0; i < size; i++) sum += *(arr +i);
	return sum / size;
}


int *array(const int size)
{
	int *arr = (int*) malloc(sizeof(int) * size);

	// srand(time(NULL));

	for ( int i = 0; i < size; i++) 
	{
		*(arr +i) = rand() % 25;
		printf("%d\n", *(arr + i));
	}
	return arr;
}
