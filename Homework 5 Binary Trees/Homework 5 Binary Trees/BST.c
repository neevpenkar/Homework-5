#include "BST.h"
#include <stdlib.h>
#include "TreePrintLibrary.h"

void initBST(BST* bst) {
	if (bst != NULL) {
		bst->root = (TreeNode*)malloc(sizeof(TreeNode));
		bst->root->left = NULL;
		bst->root->right = NULL;
	}
	return;
}
void ParentinsertBST(BST* bst, int value) {
	TreeNode* newnode = (TreeNode*)malloc(sizeof(TreeNode));
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->element = value;
	insertBST(bst->root, newnode);
}

void insertBST(TreeNode* node, TreeNode* newnode) {

	if (node->element > newnode->element && node->right == NULL)
		node->right = newnode;

	else if (node->element > newnode->element)
		insertBST(node->right, newnode);

	else if (node->element < newnode->element && node->left == NULL)
		node->left = newnode;
		
	else if (node->element < newnode->element)
		insertBST(node->left, newnode);
}