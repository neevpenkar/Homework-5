#include <stdio.h>
#include "BST.h"
#include "TreePrintLibrary.h"

int main() {
	BST tree;
	initBST(&tree);
	int test[3] = { 9, 2, 8 };

	for (int i = 0; i < 3; i++) {
		ParentinsertBST(&tree, test[i]);
	}

	findIndexNFromLast(&tree, 2);
	destroyTree(&tree);
	return 0;
}