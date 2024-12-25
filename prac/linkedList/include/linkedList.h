#define SIZE 8
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
	char *data;
	int index;
	struct Node* next;
}Node;

int insertHead(char *);

int insertTail(char *);

void setIndices();

void printNodes();

char *deleteHead();

char *deleteTail();

int numberOfNodes();

int insertAtIndex(char *,int);

char *deleteAtIndex(int);

int indexOfNode(char *);

char **linkedListToArray();

int comparator(const void *, const void *);

void arrayToLinkedList(char **, int);

void reverseNodes(Node **head_ref);

void sortNodes();

#endif
