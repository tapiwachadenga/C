#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp = fopen("/dev/pts/3", "w");
	const int x = 10;
	// int *xp = &x;

	// *xp = 9876;
	fprintf(fp, "\nx = %d\n\n", x);

	return EXIT_SUCCESS;
}
