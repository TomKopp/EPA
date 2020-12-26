#include "stdafx.h"

void printTree(Node* n) {
	if (n == NULL)
		return;
	size_t i;
	for (i = 0; i < n->size; i++) {
		if (n->kids[i])
			printTree(n->kids[i]);
		printf("%d ", n->elements[i]);
	}
	if (n->kids[i])
		printTree(n->kids[i]);
}

int main()
{
	//t = create_btree();
	//t->root = createNode(30);
	//t = insertElementIntoTree(
	//	insertElementIntoTree(
	//		insertElementIntoTree(
	//			createBTree(30)
	//			, 38)
	//		, 42)
	//	, 10);
	//insertElementIntoTree(t, 35);

	//save_btree("D:\\Projects\\EPA\\B-Tree\\svg\\test.svg", t);

	Node* bTree = createBTree();

	printf("Hello World\n");

	bTree = addElementToTree(bTree, 30);
	bTree = addElementToTree(bTree, 38);
	bTree = addElementToTree(bTree, 42);
	bTree = addElementToTree(bTree, 10);
	bTree = addElementToTree(bTree, 20);
	bTree = addElementToTree(bTree, 25);
	bTree = addElementToTree(bTree, 32);
	bTree = addElementToTree(bTree, 34);
	bTree = addElementToTree(bTree, 40);
	bTree = addElementToTree(bTree, 41);
	bTree = addElementToTree(bTree, 44);
	bTree = addElementToTree(bTree, 50);
	bTree = addElementToTree(bTree, 56);
	bTree = addElementToTree(bTree, 58);
	bTree = addElementToTree(bTree, 60);
	bTree = addElementToTree(bTree, 52);
	bTree = addElementToTree(bTree, 54);
	bTree = addElementToTree(bTree, 46);

	printTree(bTree);
	// Windows only:
	//system("pause");
	// Linux alternative:
	printf("Press any key to continue . . .");
	getchar();

	return 0;
}
