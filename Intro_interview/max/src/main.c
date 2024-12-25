#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "max.h"

int main ()
{
	srand((unsigned)time(NULL));
	int num1 = rand() % 250;
	int num2 = rand() % 250;

	printf("\nmax(%d, %d) = %d\n\n", num1, num2, max(num1, num2));
}

