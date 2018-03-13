#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

#include <stdio.h>
#include <stdlib.h>
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
     node* left;
     node* right;
};
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
node * newNode(int data)
{
    node * node = new node *;
    node->data  = data;
    node->left  = NULL;
    node->right = NULL;
 
    return(node);
}


/* Given two trees, return true if they are
 structurally identical */
int identicalTrees(struct node* a, struct node* b)
{
    /*1. both empty */
    if (a==NULL && b==NULL)
        return 1;
 
    /* 2. both non-empty -> compare them */
    if (a!=NULL && b!=NULL)
    {
        return
        (
            a->data == b->data &&
            identicalTrees(a->left, b->left) &&
            identicalTrees(a->right, b->right)
        );
    }
     
    /* 3. one empty, one not -> false */
    return 0;
} 


int main()
{


     node * root1 = newNode(1);
     node * root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 
 
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5); 
 
    if(identicalTrees(root1, root2))
        printf("Both tree are identical.");
    else
        printf("Trees are not identical.");
 
    getchar();





   return 0;
	
}

