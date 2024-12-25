#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "stack.h"

int main()
{
	strStack *stack = initStrStack(4);
	fprintf(stdout, "\nstack is empty: %s\n", strStackEmpty(stack) ? "true" : "false");
	fprintf( stdout, "\n");

	push(stack, "one");
	push(stack, "two");
	push(stack, "three");
	push(stack, "four");
	push(stack, "five");
	push(stack, "six");
	printStrStack(stack);
	fprintf(stdout, "\ncurrent size of stack: %d\n", sizeOfStrStack(stack));
	fprintf( stdout, "\n");

	pop(stack);
	pop(stack);
//	pop(stack);
//	pop(stack);
	printStrStack(stack);
	fprintf(stdout, "\ncurrent size of stack: %d\n", sizeOfStrStack(stack));
	fprintf(stdout, "\npeek of stack: %s\n", strStackPeek(stack));
	fprintf( stdout, "\n");
	
	pop(stack);
	pop(stack);
	pop(stack);
	pop(stack);
	pop(stack);
	pop(stack);

	fprintf( stdout, "\n");
	return EXIT_SUCCESS;
}
