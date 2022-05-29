//#include "BST.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include "TreePrintLibrary.h"
//
//void initBST(BST* bst) {
//	bst->root = (TreeNode*)malloc(sizeof(TreeNode));
//	if (bst->root == NULL) exit(-10);
//	
//	bst->root->left = NULL;
//	bst->root->right = NULL;
//	bst->root->element = -1;
//	return;
//}
//char isEmptyTree(BST* bst) {
//	if (bst->root->left == NULL && bst->root->right == NULL)
//		return 1;
//	return 0;
//}
//void ParentinsertBST(BST* bst, int value) {
//	TreeNode* newnode = (TreeNode*)malloc(sizeof(TreeNode));
//	newnode->left = NULL;
//	newnode->right = NULL;
//	newnode->element = value;
//	insertBST(bst->root, newnode);
//}
//
//void insertBST(TreeNode* node, TreeNode* newnode) {
//
//	if (node->element > newnode->element && node->right == NULL)
//		node->right = newnode;
//
//	else if (node->element > newnode->element)
//		insertBST(node->right, newnode);
//
//	else if (node->element < newnode->element && node->left == NULL)
//		node->left = newnode;
//		
//	else if (node->element < newnode->element)
//		insertBST(node->left, newnode);
//}
//
//void printTree(TreeNode* node) {
//	if (node == NULL) return;
//	
//	printTree(node->right);
//	printf("%d, ", node->element);
//	printTree(node->left);
//}
//void printTreeInorder(BST* bst) {
//	printTree(bst->root);
//}
//void destroy(TreeNode* node) {
//	if (node == NULL) return;
//
//	destroy(node->right);
//	free(node->right);
//	destroy(node->left);
//	free(node->left);
//}
//void destroyTree(BST* bst) {
//	destroy(bst->root);
//}
//
//int findIndex(TreeNode* node, unsigned int N) {
//	if (node->left == NULL) {
//		return;
//	}
//	findIndex(node->left, N);
//	
//}
//int findIndexNFromLast(BST* bst, int N) {
//	int x;
//	return findIndex(bst->root, N, &x);
//}