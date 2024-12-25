#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "intArray.h"

int *createArray(int *len)
{
	int *arr = (int*)malloc(sizeof(int) * *len);
	
	for (int i = 0; i < *len; i++)
		*(arr + i) = 1 + rand() % 15;
	
	return arr;
}

void printArray(int *arr, int *len)
{
	char *punc = (char*)malloc(sizeof(char) * 2);
	strcpy(punc, ", ");

	fprintf(stdout, "\nintArray: [ ");

	for(int i = 0; i < *len; i++) 
	{
		if (i == *len - 1) strcpy(punc, " ");
		fprintf(stdout, "%d%s", *(arr + i), punc);
	}

	fprintf(stdout, "]\n");
}

void insertInt(int *arr, int index, int value, int *len)
{
	*len += 1;
	int k = *len;
	
	while(k >= index)
	{
	       	*(arr + k + 1) = *(arr + k);
		k--;
	}

	*(arr + index) = value;
}

int deleteInt(int *arr, int index, int *len)
{
	*len -= 1;
	int value = *(arr + index);
	int k = index;

	while(k <= *len)
	{
		*(arr + k) = *(arr + k + 1);
		k++;
	}
	return value;
}

int searchArray(int *arr, int *len, int value)
{
	for(int i = 0; i < *len; i++)
		if(*(arr + i) == value ) 
			return i;
	return -1;
}

void updateArray(int *arr, int index, int value)
{
	*(arr + index) = value;
}

void swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

int comparator(const void *p, const void *q)
{
	return ( *(int*)p - *(int*)q ); 
}

void sortArray(int *arr, int *len)
{
	qsort(arr, *len, sizeof(int), comparator);
}
