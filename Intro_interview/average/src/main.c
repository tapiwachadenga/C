#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "getIntArray.h"
#include "getIntArrayAverage.h"
#include "printIntArray.h"

int main()
{
	srand((unsigned)time(NULL));
	int size = rand() %  16;
	int *arr = getIntArray(size);
	printIntArray(arr, size);
	printf("\nAverage: %.2f\n\n", getIntArrayAverage(arr, size));
	return EXIT_SUCCESS;
}
