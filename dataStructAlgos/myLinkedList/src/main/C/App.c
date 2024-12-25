#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "myLinkedList.h"

//Node *head = NULL;

int main()
{
	srand(time(NULL));
	insertHead("Tapiwa");
	insertHead("Tapi");
	insertHead("Tapsy");
	insertHead("Tata");
	insertHead("Tapiwapi");
	insertHead("Taps");
	// insertIndices();
	// printNodes();

	// fprintf (stdout, "\nSize of Linked List is %d\n\n", myLinkedListSize());

	deleteHead();
	// printNodes();
	
	int index = rand() % myLinkedListSize();
	fprintf ( stdout, "\ndata[%d] = %s\n\n", index, find(index));

	reverse(&head);

	return EXIT_SUCCESS;
}
