#ifndef _BST_ADT_H
#define _BST_ADT_H

typedef struct TreeNode TreeNode;

struct TreeNode
{
    TreeNode* left;
    TreeNode* right;
    int element;
};

typedef struct BST
{
    TreeNode* root;
}BST;

void initBST(BST* bst);
void destroyTree(BST* bst);
char isEmptyTree(BST* bst);
void insertBST(BST* bst, int value);
void printTreeInorder(BST* bst);
int findIndexNFromLast(BST* bst, int N);
void ParentinsertBST(BST* bst, int value);
int sameHeightLeaves(BST* bst);
#endif // !_BST_ADT_H