#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "getIntArray.h"

int *getIntArray(int size)
{
	srand((unsigned)time(NULL));
	int *arr = (int*) malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 26;
	}
	return arr;
}
