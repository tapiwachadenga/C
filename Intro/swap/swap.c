#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int*, int*);

int main()
{
	srand(time(NULL));
	int a = rand() % 200;
	int b = rand() % 200;

	printf("Before swap, value of a : %d\n", a );
	printf("Before swap, value of b : %d\n", b );

	swap(&a, &b);

	printf("After swap, value of a : %d\n", a );
	printf("After swap, value of b : %d\n", b );

	return 0;
}

/* function definition to swap the values */
void swap(int *x, int *y)
{
	int temp;
	temp = *x; /* save the value at address x */
	*x = *y; /* put y into x */
	*y = temp; /* put x into y */
	return;
}
