#include "BST.h"
#include <stdlib.h>
#include <stdio.h>
#include "TreePrintLibrary.h"

void initBST(BST* bst) {
	bst->root = NULL;
}
void insertBST(TreeNode* root, TreeNode* Node) {
	if (Node->element > root->element)
		if (root->right == NULL)
			root->right = Node;
		else
			insertBST(root->right, Node);

	else if (Node->element < root->element)
		if (root->left == NULL)
			root->left = Node;
		else
			insertBST(root->left, Node);
}
void ParentinsertBST(BST* bst, int value) {
	TreeNode* newnode = (TreeNode*)malloc(sizeof(TreeNode));
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->element = value;

	if (bst->root == NULL) bst->root = newnode;
	else insertBST(bst->root, newnode);
}

void printTree(TreeNode* root) {
	if (root == NULL) return;

	printTree(root->left);
	printf("%d, ", root->element);
	printTree(root->right);
}
void printTreeInorder(BST* bst) {
	printTree(bst->root);
}
void destroy(TreeNode* root) {
	if (root == NULL) return;
	destroy(root->left);
	destroy(root->right);
	free(root);
}
void destroyTree(BST* bst) {
	destroy(bst->root);
}
//
//int findIndex2(TreeNode* root, int N, int* storage) {
//	if (root == NULL) return 0;
//
//	int i = findIndex2(root->right, N, storage);
//
//	if (i == N - 1) {
//		*storage = root->element;
//		return i + 1;
//	}
//}
//int findIndex(TreeNode* root, int N, int* storage) {
//	if (root == NULL) return 0;
//
//	int i = findIndex(root->right, N, storage);
//
//	if (i == N - 1) {
//		*storage = root->element;
//		return i + 1;
//	}
//	
//	if (i < N - 1) {
//		return findIndex2(root->left, N - i + 1, storage);
//	}
//}
int findIndex(TreeNode* root, int N, int* storage) {
	if (root == NULL) return 0;

	if (N == 0) printf("NNNN: %d", root->element);

	findIndex(root->left, N, storage);
	//printf("%d, ", root->element);
	
	return findIndex(root->right, N, storage) + 1;
}
int findIndexNFromLast(BST* bst, int N) {
	int store;
	return findIndex(bst->root, N, &store);
	//return store;
}