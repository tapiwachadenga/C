#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "intArray.h"

int main()
{

	srand((unsigned)time(NULL));
	int *len = (int*)malloc(sizeof(int));
	int mod = 25;
	*len = 1 + rand() % mod;

	int *arr = createArray(len);
	printArray(arr, len);

	int value = 99999;
	int index = rand() % *len + 1;
	fprintf(stdout, "\ninsert value %d at index %d", value, index);
	insertInt(arr, index, value, len);
	printArray(arr, len);
	fprintf(stdout, "\n");

	index = rand() % *len;
	fprintf(stdout, "delete value %d at index %d", *(arr + index), index);
	deleteInt(arr, index, len);
	printArray(arr, len);
	fprintf(stdout, "\n");

	value = 1 + rand() % mod;
	fprintf(stdout, "Array[%d] = %d", searchArray(arr, len, value), value);
	fprintf(stdout, "\n");
	fprintf(stdout, "\n");

	value = 111111;
	index = rand() % *len;
	fprintf(stdout, "Array[%d] = %d", index, value);
	updateArray(arr, index, value);
	printArray(arr, len);
	fprintf(stdout, "\n");
/*	fprintf(stdout, "\n");


	int x = 9999;
	int y = 2222;
	fprintf(stdout, "Before swap x = %d, y = %d", x, y);
	swap(&x, &y);
	fprintf(stdout, "After swap x = %d, y = %d", x, y);
*/

	fprintf(stdout, "%s", "Sorted Array");
	sortArray(arr, len);
	printArray(arr, len);
	fprintf(stdout, "\n");

	return EXIT_SUCCESS;
}
