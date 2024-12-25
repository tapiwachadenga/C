#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "array.h"

int *createArray(int *len)
{
	srand((unsigned)time(NULL));
	char *punctuation = (char *)malloc(sizeof(char) * 2); 
	strcpy(punctuation, ", ");
	int *arr = (int *) malloc(*len * sizeof(int));

	fprintf (stdout, "\nArray [ ");

	for (int i = 0; i < *len; i++)
	{
		*(arr + i ) = 1 + rand() % 250;
		if (i == *len - 1) strcpy(punctuation, " ");
		fprintf (stdout, "%d%s", *(arr + i), punctuation);
	}

	fprintf (stdout, "]\n");
	return arr;
}
