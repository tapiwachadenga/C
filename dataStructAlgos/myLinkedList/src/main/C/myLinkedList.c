#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "myLinkedList.h"

Node *head = NULL;

void insertHead(char *data)
{
	Node *node = (Node *) malloc (sizeof(Node));
	strcpy(node->data, data);
	node->next = head;
	head = node;
	insertIndices();
	printNodes();
}

void insertIndices()
{
	// Node *crt = head;
	int i = 0;
	for ( Node  *crt = head; crt != NULL; crt = crt->next) 
	{
		crt->index = i;
		i++;
	}
}

void printNodes()
{
	// Node *crt = head;
	char *punct = (char *) malloc(sizeof(char) * 2);
	strcpy(punct, "; ");

	fprintf( stdout, "\n[ ");

	for ( Node *crt = head; crt != NULL; crt = crt->next) 
	{
		if (crt->next == NULL) strcpy(punct, " ");
		fprintf( stdout, "(%d, %s)%s", crt->index, crt->data, punct);
	}
	fprintf( stdout, "]\n\n");
}

bool isEmpty()
{
	return head == NULL;
}

int myLinkedListSize()
{
	// Node *crt = head;
	int i = 0;

	for( Node *crt = head; crt != NULL; crt = crt->next )
	{
		i++;
	}
	return i;
}

char *deleteHead()
{
	char *value = (char *) malloc ( sizeof(char) * 255);
	strcpy(value, head->data);
	head = head->next;
	insertIndices();
	printNodes();
	return value;
}

char *find(int index)
{
	// char *value = (char *) malloc ( sizeof(char) * 255 );
	if (index > myLinkedListSize()) index %= myLinkedListSize();
	if ( head == NULL) return NULL;
	Node *crt = head;

	while (crt->index != index)
	{
		if (crt->next == NULL) return NULL;
		else crt = crt->next;
	}

	// strcpy(value, crt->data);
	return crt->data;
}

void reverse(Node **head_ref)
{
	Node *prev = NULL;
	Node *crt = *head_ref;
	Node *next = NULL;

	while (crt != NULL)
	{
		next = crt->next;
		crt->next = prev;
		prev = crt;
		crt = next;
	}
	*head_ref = prev;
	insertIndices();
	printNodes();	
}
