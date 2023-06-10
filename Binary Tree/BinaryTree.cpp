#include <iostream>
#include "BinaryTree.h"
using namespace std;

void BinaryTree::insertNode(int insertVal){ //menggunakan algoritma recursive
	
	root = insertNodeRecursive(root, insertVal);
}

	Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertValue){
	
		if(currentRoot == NULL){
			currentRoot = new Node();
			currentRoot->val = insertValue;
			return currentRoot;
		}
		
		if(insertValue < currentRoot->val){
			currentRoot->left = insertNodeRecursive(currentRoot->left, insertValue);
		}
		
		if(insertValue > currentRoot->val){
			currentRoot->right = insertNodeRecursive(currentRoot->right, insertValue);
		}
		
		return currentRoot;
}	


void BinaryTree::inOrder(){
	inOrderRecursive(root);
}	
void BinaryTree::inOrderRecursive(Node* currentRoot) {
	
	if(currentRoot != NULL) {
		
		inOrderRecursive(currentRoot->left);
		cout << currentRoot -> val << ", ";
		inOrderRecursive(currentRoot -> right);
	}
}


void BinaryTree::postOrder() {
	postOrderRecursive(root);
}	
void BinaryTree::postOrderRecursive(Node* currentRoot) {
	
	if(currentRoot != NULL) {
		
		postOrderRecursive(currentRoot -> left);
		postOrderRecursive(currentRoot -> right);
		cout << currentRoot->val << ", ";
	}
}


void BinaryTree::preOrder() {	
	preOrderRecursive(root);
}	
void BinaryTree::preOrderRecursive(Node* currentRoot) {
	
	if(currentRoot != NULL) {
		
		cout << currentRoot -> val << ", ";
		preOrderRecursive(currentRoot -> left);
		preOrderRecursive(currentRoot -> right);		
	}
}


Node *BinaryTree::findMin() {
	findMinRecursive(root);
}
Node *BinaryTree::findMinRecursive(Node* root) {
	
	if (root != NULL) {
        if (root -> left != NULL) {
            findMinRecursive(root -> left);
        } else {
            cout << root -> val << endl;
        }
    }
}


Node *BinaryTree::findMax() {
	findMaxRecursive(root);
}
Node *BinaryTree::findMaxRecursive(Node* root) {
    if (root != NULL) {
    	if (root -> right != NULL ) {
    		findMaxRecursive(root -> right);
		}else{
			cout << root -> val << endl;
		}
	}
}


Node *BinaryTree::searchNode(int input) {
    searchNodeRecursive(root, input);
}
Node *BinaryTree::searchNodeRecursive(Node* root, int srcInput){
	if (root == NULL) {
		cout << "Node Bernilai " << srcInput << " Tidak Ditemukan!";
        false;
    } else if (root->val == srcInput) {
    	cout << "Node Bernilai " << srcInput << " Ditemukan!";
        true;
    } else if (srcInput < root->val) {
        searchNodeRecursive(root->left, srcInput);
    } else {
        searchNodeRecursive(root->right, srcInput);
    }
}


void BinaryTree::deleteNode(int delVal){
	deleteNodeRecursive(root, delVal);
}
Node* BinaryTree::deleteNodeRecursive(Node* root, int delVal) {
    if (root == NULL) {
        return root;
    }
    
    if (delVal < root->val) {
        root->left = deleteNodeRecursive(root->left, delVal);
        
    } else if (delVal > root->val) {
        root->right = deleteNodeRecursive(root->right, delVal);
        
    } else {
        
        if (root->left == NULL) {
            Node* temp = root->right;
            cout << "Node "<< delVal <<" berhasil di hapus";
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            cout << "Node "<< delVal <<" berhasil di hapus";
            delete root;
            return temp;
        }
    }
    return root;
}

