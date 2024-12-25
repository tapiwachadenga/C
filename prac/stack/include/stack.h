#include <stdbool.h> 
#ifndef STACK_H
#define STACK_H

typedef struct strStack
{
	char **data;
	int length;
	int max_length;	
}strStack;

strStack* initStrStack(int);

void reverseArray(char **, int);

void push(strStack *, char *);

char *pop(strStack*);

char *strStackPeek(strStack*);

bool strStackEmpty(strStack*);

bool strStackFull(strStack*);

int sizeOfStrStack(strStack*);
 
void printStrStack(strStack*);

#endif
