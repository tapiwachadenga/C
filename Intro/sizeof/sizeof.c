#include <stdio.h>
#include <limits.h>
#include <float.h>


int main()
{	
	printf("Storage size for int : %lu \n", sizeof(int));
	printf("Maximum float +ve value : %E \n", FLT_MAX);
	printf("Minimum float -ve value : %E \n", FLT_MIN);
	printf("precision value : %d \n", FLT_DIG);

	return 0;
}
