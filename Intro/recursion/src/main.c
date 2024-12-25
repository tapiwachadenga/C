#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <recursion.h>

int main()
{
	srand(time(NULL));
	int n = rand() % 10;
	fprintf(stdout, "\nfactorial(%d) = %ld\n", n, factorial(n));
	fprintf(stdout, "\nfibonacci(%d) = %ld\n\n", n, fibonacci(n));
	return 0;
}
