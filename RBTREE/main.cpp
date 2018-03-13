#include <string>
#include <iostream>
using namespace std;


class RedBlackTree {

private:
	struct TreeNode{
	string color;   //will either be red or black
	char value;
	TreeNode *left, *right, *parent;
	};
	
	TreeNode *root;

public: 
	RedBlackTree(){
		root = NULL;
	}

	bool isEmpty() const { return root==NULL;}
	void RB_INSERT(char);
	void RB_INSERT_FIXUP(TreeNode*);
	void LEFT_ROTATE(TreeNode*);
	void RIGHT_ROTATE(TreeNode*);
	void Print_INORDER();  //helper method to inject the root into the recursive INORDER method
	void INORDER(TreeNode*);

	~RedBlackTree(){
		delete root;
	}
};


void RedBlackTree:: RB_INSERT(char k){
	TreeNode *leaf = new TreeNode;
	leaf->value = k;
	leaf->left = NULL;
	leaf->right = NULL;
	leaf->parent = NULL;
	leaf->color = "RED";

	if(isEmpty()){
		root = leaf;
	}else{
		TreeNode *ptr;
		ptr = root;
		while(ptr != NULL){       
			leaf->parent = ptr;
			if(k > ptr->value){
				ptr = ptr->right;
			}else{
				ptr = ptr->left;
			}
		}

		if(k < leaf->parent->value){  //places the leaf node to the left or right of the parent node
			leaf->parent->left = leaf;
		}else{
			leaf->parent->right = leaf;
		}
	}
		RB_INSERT_FIXUP(leaf);  //calls the fixup method to check if any of the red-black tree properties are broken
}

void RedBlackTree:: Print_INORDER(){
	cout << "In-Order Traversal:\n"<< endl;
	INORDER(root);
}

void RedBlackTree:: INORDER(TreeNode *ptr){
		if(ptr!=NULL){
			if(ptr->left){
				INORDER(ptr->left);
			}
			cout << "( " << ptr->value << " , " << ptr->color << " )" << endl;
			if(ptr->right){
				INORDER(ptr->right);
			}
		}else{
			return;
		}
}

void RedBlackTree:: LEFT_ROTATE(TreeNode *x){ 
	TreeNode *y = x->right;
	x->right = y->left;
	
	if(y->left != NULL){
		y->left->parent = x;
	}
	y->parent = x->parent;

	if(x->parent == NULL){  
		root = y;
	}else if(x == x->parent->left){
		 x->parent->left = y;
	}else{
		 x->parent->right = y;
	}
	y->left = x;  
	x->parent = y;
}

void RedBlackTree:: RIGHT_ROTATE(TreeNode *x){
	TreeNode *y = x->left;
	x->left = y->right;

	if(y->right != NULL){
		y->right->parent = x;
	}
	y->parent = x->parent;

	if(x->parent == NULL){
		root = y;
	}else if(x == x->parent->right){   
		 x->parent->right = y;
	}else{
		 x->parent->left = y;
	}
	y->right = x;  
	x->parent = y;
}


void RedBlackTree:: RB_INSERT_FIXUP(TreeNode *z){
	
	TreeNode *y;

	while(z->parent !=NULL && z->parent->parent!=NULL && z->parent->color == "RED"){
		/***********************************
					FIXES LEFT SIDE
		************************************/

		if(z->parent == z->parent->parent->left){
			y = z->parent->parent->right;
		
			if(y!=NULL && y->color == "RED"){        //checks for red uncle, CASE 1
				z->parent->color = "BLACK";
				y->color = "BLACK";
				z->parent->parent->color = "RED";
			
			}else if(z == z->parent->right){   // CASE 2
				z = z->parent;
				LEFT_ROTATE(z);

				z->parent->color = "BLACK";		
				z->parent->parent->color = "RED";

				RIGHT_ROTATE(z->parent->parent);
			}else{
				z->parent->color = "BLACK";			//CASE 3
				z->parent->parent->color = "RED";

				RIGHT_ROTATE(z->parent->parent);
			}
			
		}
		/***********************************
					FIXES RIGHT SIDE
		************************************/

		if(z->parent == z->parent->parent->right){
			y = z->parent->parent->left;
			
			if(y!=NULL && y->color == "RED"){        //checks for red uncle, CASE 1
				z->parent->color = "BLACK";
				y->color = "BLACK";
				z->parent->parent->color = "RED";
				z = z->parent->parent;
			
			}else if(z == z->parent->left){         // CASE 2
 				z = z->parent;
				RIGHT_ROTATE(z);
				z->parent->color = "BLACK";         
				z->parent->parent->color = "RED";

				LEFT_ROTATE(z->parent->parent);
			}else{

			z->parent->color = "BLACK";         //CASE 3
			z->parent->parent->color = "RED";

			LEFT_ROTATE(z->parent->parent);
			}
		}
		
	}
	root->color = "BLACK";
}

int main(){
	RedBlackTree *tree = new RedBlackTree();

	tree->RB_INSERT('G');
	tree->RB_INSERT('I');
	tree->RB_INSERT('T');
	tree->RB_INSERT('H');
	tree->RB_INSERT('U');
	tree->RB_INSERT('B');

	tree->Print_INORDER();

	delete tree;
}
