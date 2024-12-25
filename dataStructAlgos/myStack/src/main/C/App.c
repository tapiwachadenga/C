#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "myStack.h"

int main()
{
	srand(time(NULL));
	Stack *stack = stackinit();
	fprintf( stdout, "\nisEmpty() = %d\n\n", isEmpty(stack));

	for ( int i = 0; i < rand() % ( MAX + 15); i++) push( stack, rand() % 250 );

	fprintf( stdout, "\nisEmpty() = %d\n\n", isEmpty(stack));
//	fprintf( stdout, "\npeek() = %d\n\n", peek(stack));
	fprintf( stdout, "\nisFull() = %d\n\n", isFull(stack));

	printStack(stack);

	fprintf( stdout, "\npeek() = %d\n\n", peek(stack));

	for ( int i = 0; i < rand() % MAX + 3; i++) pop( stack );

	printStack(stack);

	fprintf( stdout, "\npeek() = %d\n\n", peek(stack));

	return EXIT_SUCCESS;
}
