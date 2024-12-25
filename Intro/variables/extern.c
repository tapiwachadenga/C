#include <stdio.h>

extern int a, b;
extern int c;
extern float f;

int func();

int main()
{
	int a, b, c;
	float f;

	a = 10;
	b = 20;
	c = a + b;

	f = 70.0/30.0;

	printf("value of c ; %d \n", c);
	printf("value of func() ; %d \n", func() );

	return 0;
}

int func()
{
	return 7;
}
