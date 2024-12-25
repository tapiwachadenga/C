#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "linkedList.h"

Node *head = NULL;

int insertHead(char *data)
{
	Node *node = (Node *)malloc(sizeof(Node));
	char *_data_ = (char *)malloc(sizeof(char) * SIZE);
	strcpy(_data_, data);
	node->data = _data_;
	node->next = head;
	head = node;
	setIndices();
	return EXIT_SUCCESS;
}

void setIndices()
{
	int i = 0;
	for (Node *crt = head; crt != NULL; crt = crt->next)
	{
		crt->index = i;
		i++;
	}	
}

void printNodes()
{
	char *punct = (char *)malloc(sizeof(char) * 2);
	strcpy(punct, "; ");

	fprintf(stdout, "\n[ ");

	for(Node *crt = head; crt != NULL; crt = crt->next)
	{
		if (crt->next == NULL) strcpy(punct, " ");
		fprintf(stdout, "%d. %s%s", crt->index, crt->data, punct);
	}

	fprintf(stdout, "]\n");
}

char *deleteHead()
{
	char *data = (char *)malloc(sizeof(char) * SIZE);
	strcpy(data, head->data);
       	head = head->next;
	setIndices();
	return data;	
}

int insertTail(char *data)
{
	Node *node = (Node *)malloc(sizeof(Node));
	char *_data_ = (char *)malloc(sizeof(char) * SIZE);
	strcpy(_data_, data);
	node->data = _data_;

	for (Node *crt = head; crt != NULL; crt = crt->next)
		if(crt->next == NULL)
		{
			crt->next = node;
			setIndices();
			return EXIT_SUCCESS;
		}
	return EXIT_FAILURE;
}

char *deleteTail()
{
	char *data = (char *)malloc(sizeof(char) * SIZE);

	for(Node *crt = head; crt != NULL; crt = crt->next)
		if(crt->next->next == NULL)
		{
			strcpy(data, crt->next->data);
			crt->next = NULL;
			break;
		}
	
	return data;
}

int numberOfNodes()
{
	int i = 0;
	for(Node *crt = head; crt != NULL; crt = crt->next) i++;
	return i;
}

int insertAtIndex(char *data, int index)
{
	if (index == 0) return insertHead(data);

	
	if (index == numberOfNodes()) return insertTail(data);
		
	

	Node *crt = head;
	Node *pvs = NULL;

	while(crt != NULL)
	{			
		if(crt->index == index)
		{			
			Node *node = (Node *)malloc(sizeof(Node));
			char *_data_ = (char *)malloc(sizeof(char) * SIZE);
			strcpy(_data_, data);
			node->data = _data_;
			pvs->next = node;
			node->next = crt;
			setIndices();
			return EXIT_SUCCESS;
		}
		pvs = crt;
                crt = crt->next;
	}
	return EXIT_FAILURE;
}

char *deleteAtIndex(int index)
{
	index = rand() % ( numberOfNodes() );

	if(index == 0) return deleteHead();

	Node *crt = head;
	Node *pvs = NULL;

	while(crt != NULL)
	{
		pvs = crt;
		crt = crt->next;
		if(crt->index == index)
		{
			char *data = (char *)malloc(sizeof(char) * SIZE);
			strcpy(data, crt->data);
			pvs->next = crt->next;
			setIndices();
			return data;
		}
	}
	return NULL;
}

int indexOfNode(char *data)
{
	Node *crt = head;
	int i = 0;

	while(crt != NULL)
	{	
		if(strcmp(crt->data, data) == 0) return i; 
		i++;
		crt = crt->next;
	}
	return -1;
}

char **linkedListToArray()
{
	char **arr = (char **)malloc(sizeof(char*) * numberOfNodes());
	for(int i = 0; i < numberOfNodes(); i++) *(arr + i) = (char *) malloc(sizeof(char) * SIZE);
	
	int i = 0;

	for(Node *crt = head;crt != NULL; crt = crt->next)
	{       
		strcpy( *(arr + i), (crt->data) );
		i++;
	}

	return arr;
}

int comparator(const void *p, const void *q)
{
	return strcmp( *(const char**)p, *(const char**)q );	
}

void arrayToLinkedList(char **arr, int len)
{
	head = NULL;
	for(int i = 0; i < len; i++)
	{
	       	insertHead(*(arr + i));
	}
}

void reverseNodes(Node **head_ref)
{
	Node *prv = NULL;
	Node *crt = *head_ref;
	Node *next;

	while(crt != NULL)
	{
		next = crt->next;
		crt->next = prv;
		prv = crt;
		crt = next;
	}
	*head_ref = prv;
	setIndices();
}

void sortNodes()
{
	 char **arr = linkedListToArray();
	 qsort(arr, numberOfNodes(), SIZE, comparator);
	 arrayToLinkedList(arr, numberOfNodes());
	 reverseNodes(&head);
}
