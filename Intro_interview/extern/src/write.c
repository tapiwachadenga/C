#include <stdio.h>

extern int count;

void write_extern(void)
{
	// count = 543210;
	printf("count = %d\n", count);
}
