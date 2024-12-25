#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "myArray.h"

int *myArray(int *size)
{
	int *arr = (int *) malloc ( sizeof(int) * *size);

	for (int i = 0; i < *size; i++) 
	{
		*(arr + i) = rand() % 250;
	}
	return arr;
}

void myArrayPrint(int *arr, int *size)
{
        char *punct = (char *) malloc ( sizeof(char) * 2); 
	strcpy(punct, ", ");
        fprintf (stdout, "\n[ ");
        for (int i = 0; i < *size; i++)
        {
                if ( *size - 1 == i) strcpy(punct, " ");
                fprintf (stdout, "%d%s", *(arr + i), punct);
        }
        fprintf (stdout, "]\n\n");
}

int myArrayInsert(int *arr, int *size, int index, int value) 
{
	int k = *size;
	*size += 1;
	while (	k-- >= index ) *(arr + k + 1) = *(arr + k); 
	*(arr + index) = value;
	return EXIT_SUCCESS;
}

int myArrayDelete(int *arr, int *size, int index)
{
	int k = index;
	int value = *(arr + index);
	while ( k < *size ) 
	{
		*(arr + k) = *(arr + k + 1);
		k++;
	}
	*size -= 1;	
	return value;
}

int myArrayUpdate(int *arr, int index, int value)
{
	*(arr + index) = value;
	return EXIT_SUCCESS;
}

bool myArraySearch(int *arr, int *size, int value)
{
	int index = 0;
	while (index <= *size)
	{
		if (*(arr + index) == value) return 1;
		index++;
	}
	return 0;
}

int comparator(const void* p, const void* q)
{
	int l = *(const int *)p;
	int r = *(const int *)q;
/*
	if ((l & 1) && (r & 1)) return (r - l);

	if (!(l & 1) && !(r & 1)) return (l - r);

	if (!(l & 1)) return 1;

	return -1;
*/
	return ( l - r );
}

int myArraySort(int *arr, int *size)
{
	qsort(arr, *size, sizeof(int), comparator);
	return EXIT_SUCCESS;
}
