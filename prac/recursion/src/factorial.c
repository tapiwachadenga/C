#include "factorial.h"
#include <stdlib.h>

llu factorial(llu num)
{
	if (num <= 0) return 1llu;
	return num * factorial(num - 1llu);
}

llu _factorial(llu num, llu acc)
{
	if(num == 0) return acc;
	return _factorial(num - 1llu, num * acc);
}

llu tail_factorial(llu num)
{
	llu acc = 1llu;
	return _factorial(num, acc);
}

llu fibonacci(llu num)
{
	if(num <= 0) return 0llu;
	if(num == 1llu) return 1llu;
	if(num == 2llu) return 1llu;
	return fibonacci(num - 1llu) + fibonacci(num -2llu) + fibonacci(num - 3llu);
}
