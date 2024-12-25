#include "getIntArrayAverage.h"

double getIntArrayAverage(int *arr, int size)
{
	double total = 0.0;
	for (int i = 0; i < size; i++) total += (double)*(arr + i );
	return total / (double) size;
}
