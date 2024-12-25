#include <stdio.h>

int main(int argc, char **argv)
{

	const int limit = 10;
 	int const * limitp = &limit;
	// int *limitpp = &limit;
	int i = 27;

	fprintf(stdout,"limitp = %p\n *limitp = %d\n", limitp, *limitp);

	// *limitp = 234;
	limitp = &i;

	fprintf(stdout,"limitp = %p\n *limitp = %d\n", limitp, *limitp);
	i = 9876;
	fprintf(stdout,"limitp = %p\n *limitp = %d\n", limitp, *limitp);

	/*
	int a, b = 10, c = 234;

	a = b = c;

	fprintf(stdout, "a = %d\n", a);
*/
	return 0;
}
