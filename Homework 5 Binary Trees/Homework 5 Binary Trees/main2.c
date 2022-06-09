#include "BST.h"
#include <stdlib.h>
#include <stdio.h>
#include "TreePrintLibrary.h"
#define y 6

int main() {
	BST tree;
	
	int testVector[y] = { 99,91,84,83,17,11 };
	int test2[y] = { 59,81,27,83,14,31 };
	int test3[y + 2] = {5,2,8,1,4,9,10,11};
	int test6[y + 1] = { 7, 5, 9, 4, 6, 8, 10 };

	initBST(&tree);
	
	for (int i = 0; i < y + 2; i++) {
		ParentinsertBST(&tree, test3[i]);
	}

	//printTreeInorder(&tree);
	//printf("\n");
	print_ascii_tree(tree.root);
	findIndexNFromLast(&tree, 3);
	//printf("\nThe Nth value id: %d\n", findIndexNFromLast(&tree, 6));
	//sameHeightLeaves(&tree);
	destroyTree(&tree);
	return 0;
}