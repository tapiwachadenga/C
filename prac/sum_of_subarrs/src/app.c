#include <stdio.h>
#include <stdlib.h>
#include "sum_of_subarrs.h"

int main(void)
{
	int arr[] = {0, 0, 1, 1, 1, 1, 2, 2, 2, 3};
	int ttl = 4;
	fprintf( stdout, "\nnumber of subsets adding is %d: %d\n\n", ttl, sum_of_subarrs(arr, ttl, 10) );
	return EXIT_SUCCESS;
}
