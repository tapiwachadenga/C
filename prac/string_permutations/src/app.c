#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "permutations.h"

int main()
{
	char str[] = "123";

	permutations(str, 0, 3);
	// swap(str, 2, 4);
	// fprintf( stdout, "%s\n", str );

	return EXIT_SUCCESS;
}
