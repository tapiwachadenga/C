#ifndef MYLINKEDLIST_H_
#define MYLINKEDLIST_H_

#include <stdbool.h>

typedef struct node
{
	char data[255];
	int index;
	struct node *next;
}Node;

extern Node *head;

void insertHead(char *data);

void insertIndices();

void printNodes();

bool isEmpty();

int myLinkedListSize();

char *deleteHead();

char *find(int index);

void reverse(Node **head_ref);

#endif 
