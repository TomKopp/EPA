#pragma once

#include <stdbool.h>
#include "B-TreeConfig.h"

typedef struct Node
{
	struct Node* parent;
	size_t size;
	int *elements;
	//int elements[MAXNODE];

	struct Node** kids;
	//Node* kids[MAXNODE + 1];
} Node;

Node* createBTree(void);
void deleteBTree(Node* tree);
Node* addElementToTree(Node* tree, int e);
