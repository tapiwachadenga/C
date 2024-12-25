#include <stdio.h>
#include <string.h>
#include "printIntArray.h"

void printIntArray(int *arr, int size)
{
	char separator[] = ", "; 
	printf("\n[ ");
	for (int i = 0; i < size; i++)
	{
		if(i == size - 1) strcpy(separator, " ");
		printf("%d%s", *(arr + i), separator);
	}
	printf("]\n");
}
