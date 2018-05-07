#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node* next;
} node;

void printList(node* node);

node* createNode(int i);

void appendList(node** listEnd, node* node);

void createNodeAndAppend(node** listEnd, int value);