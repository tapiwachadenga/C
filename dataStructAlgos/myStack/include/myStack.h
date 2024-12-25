#ifndef MYSTACK_H_
#define MYSTACK_H_

#include <stdbool.h>

#define MAX 8

typedef struct stack
{
	int stack[MAX];
	int top;
}Stack;

Stack *stackinit();

void push(Stack *, int);

void printStack(Stack *);

int pop(Stack *);

bool isEmpty(Stack *);

bool isFull(Stack *);

int peek(Stack *);

#endif

