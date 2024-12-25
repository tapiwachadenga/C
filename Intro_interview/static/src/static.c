#include <stdio.h>
#include <stdlib.h>

void func(void);

static int count = 5;

int main()
{
	while(count) func();

	return EXIT_SUCCESS;
}

void func(void)
{
	static int i = 5;
	i++;
	count--;

	printf("i = %d\t|  count = %d\n", i, count);
}
