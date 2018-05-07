#include <stdio.h>
#include "node.h"





//Unterrrichtseinheit vom 19. April 2018
//Gib die Liste ab dem angegebenen Startpunkt aus.
void printList(node *listStart)
{
	while (listStart != NULL)
	{
		printf("%d\n", listStart->value);
		listStart = listStart->next;
	}

}


node* createNodes(int i)
{
	node* t = (node*)malloc(sizeof(node));

	if (t != NULL)
	{
		t->value = i;
	}

	return t;
}

