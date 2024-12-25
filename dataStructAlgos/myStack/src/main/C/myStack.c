#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "myStack.h"

Stack *stackinit()
{
	Stack *stack = (Stack *) malloc (sizeof(Stack));
	stack->top = -1;
	return stack;
}

bool isFull(Stack *st)
{
	return st->top == 7;
}

bool isEmpty(Stack *st)
{
	return st->top == -1;
}

void push(Stack *st, int num)
{
	if (!isFull(st))
	{
		st->stack[++st->top] = num;
		fprintf( stdout, "\nPushed %d to stack.\n", num);
		// st->top++;
	}
	else
		fprintf( stdout, "\nThe stack is full!\n\n");
}

int pop(Stack *st)
{
	if (!isEmpty(st))
	{
		int value = st->stack[st->top];
		st->top--;
		return value;
	}
	else 
	{
		fprintf (stdout, "\nThe stack is empty!\n\n");
		return -999;
	}
}

int peek(Stack *st)
{
	return st->stack[st->top];
}

void printStack(Stack *st)
{
	char *punct = (char *) malloc ( sizeof(char) * 2 );
	strcpy(punct, "; ");

	fprintf (stdout, "\n[ ");
	for ( int i = 0; i <= st->top; i++)
	{
		if ( i == st->top ) strcpy ( punct, " " );
		fprintf ( stdout, "%d%s", st->stack[i], punct);
	}
	fprintf (stdout, "]\n\n");
}
