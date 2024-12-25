#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "factorial.h"

int main()
{

	srand((unsigned)time(NULL));
	llu num = 1llu + rand() % 25llu;

	fprintf(stdout, "\nfactorial(%llu) = %llu", num, factorial(num));
	fprintf(stdout, "\ntail_factorial(%llu) = %llu", num, tail_factorial(num));
	fprintf(stdout, "\nfibonacci(%llu) = %llu\n\n", num, fibonacci(num));

	return EXIT_SUCCESS;
}
