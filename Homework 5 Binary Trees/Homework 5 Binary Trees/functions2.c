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
int getHeight(TreeNode* root) {
	if (root == NULL) return 0;
	
	else
		return MAX(getHeight(root->right), getHeight(root->left)) + 1;
}

int findIndex(TreeNode* root, int N, int* storage) {
	if (root == NULL) return 0;

	findIndex(root->left, N, storage);
	findIndex(root->right, N, storage);
	

	return findIndex(root->right, N, storage) + 1;
}
int findIndexNFromLast(BST* bst, int N) {
	int store;
	return findIndex(bst->root, N, &store);
	//return store;
}

int MAX(int i, int j) {
	if (i > j) return i;
	else if (j > i) return j;
	else if (j == i) return i;
}
int isLeaf(TreeNode* root) {
	if (root->left == NULL && root->right == NULL) return 1;
	else return 0;
}
void sameH(TreeNode* root, int* check) {
	if (root == NULL) return;

	if (getHeight(root->left) != getHeight(root->right)) {
		*check = 0;
		return;
	}

	sameH(root->left, check);
	sameH(root->right, check);
}
int sameHeightLeaves(BST* bst) {
	int check = 1;
	sameH(bst->root, &check);
	return check;
}

//printf("%d", check);
//printf("%d", getHeight(bst->root));