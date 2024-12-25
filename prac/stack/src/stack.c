#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "stack.h"

strStack *initStrStack(int size)
{
	strStack *stack = (strStack *) malloc (sizeof(strStack));
	char **arr = (char **) malloc (sizeof(char *) * size);
	for(int i = 0; i < size; i++) *(arr + i) = (char *) malloc (sizeof(char) * 8);
	stack->data = arr;
	stack->length = 0;
	stack->max_length = size;
	fprintf( stdout, "\nString stack created.\n");
	return stack;
}
 
void push(strStack *stk, char *str)
{
	if(stk->length >= stk->max_length) 
	
		fprintf(stdout, "\nStack has reached maximum length of %d. Cannot push more strings.\n", stk->max_length);
	else
	{
		reverseArray(stk->data, stk->length);
		strcpy( *(stk->data + stk->length), str );
		stk->length += 1;
		reverseArray(stk->data, stk->length);
		fprintf( stdout, "\"%s\" added to stack.\n", *(stk->data));
	}
}

 char *pop(strStack *stk)
{
	if(stk->length <= 0)
	{	
		fprintf(stdout, "\nStack length is %d. No more strings to pop.\n", stk->length);
		return NULL;
	}
	else 
	{	
		reverseArray(stk->data, stk->length);
		stk->length -= 1;	
		reverseArray(stk->data, stk->length);
		fprintf( stdout, "\"%s\" deleted from stack.\n", *(stk->data + stk->length));
		return *(stk->data + stk->length + 1);
	}
}

char *strStackPeek(strStack *stk)
{
	/*
	reverseArray(stk->data, stk->length);
	char *result = *(stk->data + ( stk->length - 1 ));
	reverseArray(stk->data, stk->length);
	*/
	return *(stk->data);
}

bool strStackEmpty(strStack *stk)
{
	if (stk->length <= 0) return true;
	return false;
}

bool strStackFull(strStack *stk)
{
	if(stk->length == stk->max_length) return true;
	return false;
}

int sizeOfStrStack(strStack *stk)
{
	return stk->length;
}

void printStrStack(strStack *stk)
{
	fprintf(stdout, "\nStack\n____________\n");
	for(int i = 0; i < stk->length; i++) fprintf(stdout, "%s\n", *(stk->data + i));
	fprintf(stdout, "____________\n");
}

void reverseArray(char **arr, int len)
{
	char *temp;

	int i = 0;
	int j = len - 1;

	while (i < j)
	{
		temp = *(arr + i);
		*(arr + i) = *(arr + j);
		*(arr + j) = temp;
		i++;
		j--;
	}
}
