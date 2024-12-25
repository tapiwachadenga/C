#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "myArray.h"

int main()
{
	srand(time(NULL));
	int *size = (int *) malloc (sizeof(int));  
	*size = (rand() % 20) + 1;

	int *arr = myArray(size);
	// fprintf( stdout, "%ld", sizeof(arr));
	myArrayPrint(arr, size);

	int index = rand() % *size;
	int value = 99999;
	myArrayInsert( arr, size, index, value);
	myArrayPrint(arr, size);

	index = rand() % *size;
	fprintf( stdout, "\nRemoved %d originally at index %d\n", myArrayDelete(arr, size, index), index);
	myArrayPrint(arr, size);

	index = rand() % *size;
	value = 11111;
	myArrayUpdate(arr, index, value);
	myArrayPrint(arr, size);

	value = rand() % 250;
	fprintf( stdout, "\nIs %d in array: %d\n", value, myArraySearch(arr, size, value));

	myArraySort(arr, size);
	myArrayPrint(arr, size);

	return EXIT_SUCCESS;
}

