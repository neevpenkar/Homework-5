#include <stdio.h>
#include "BST.h"
#include "TreePrintLibrary.h"

int main() {
	BST tree;
	initBST(&tree);

	ParentinsertBST(&tree, 4);
	ParentinsertBST(&tree, 8);
	ParentinsertBST(&tree, 2);

	print_ascii_tree(tree.root->left);
	return 0;
}