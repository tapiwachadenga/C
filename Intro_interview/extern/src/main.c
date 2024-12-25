#include <stdio.h>
#include <stdlib.h>

int count = 5;
extern void write_extern(void);

int main()
{
	write_extern();
	return EXIT_SUCCESS;
}
