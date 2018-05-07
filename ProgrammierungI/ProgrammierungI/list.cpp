#include "node.h"

void printList(node* node) {
	while (node != NULL) {
		printf("%d\n Listenelement: ", node->value);
		node = node->next;
	}
}

node* createNode(int i) {
	node* t = (node*)malloc(sizeof(node));

	if (t != NULL) {
		t->value = i;
		t->next = NULL;
	}

	return t;
}

void appendList(node** listEnd, node* node) {
	(*listEnd)->next = node;
	*listEnd = node;
}

void createNodeAndAppend(node** listEnd, int value) {
	appendList(listEnd, createNode(value));
}