#include <stdio.h>

int count = 5;
extern void write_extern();

void main()
{
	// count = 5;
	// printf("count is %d\n", count);
	write_extern();
}
