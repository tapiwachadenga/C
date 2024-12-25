#include <stdio.h>
#include <stdlib.h>
#include "sum_of_subarrs.h"

int sum_of_subarrs(int *arr, int ttl, int num)
{
	int count = 0;

	for(int j = 0; j < num; j++)
		for(int i = 0; i <= j; i++)
			if( sum(arr, i, j) == ttl )
				count++;
	return count;
}

int sum(int *arr, int fst_idx, int snd_idx)
{
	int sum = 0;

	for(int i = fst_idx; i <= snd_idx; i++) 
		sum += *(arr + i);
	
	return sum;
}
