#include <iostream>

class Node {
	
	public :
		
		int val;	
		
		Node *left;
		Node *right;
		
	Node() {
		left = right = NULL;
	}
};

class BinaryTree {
	
	public :
		
		void insertNode(int);
		Node *insertNodeRecursive(Node*, int);
		
		void deleteNode(int);
		Node *deleteNodeRecursive(Node*, int);
		
		Node *searchNode(int);
		Node *searchNodeRecursive(Node*, int);
		
		Node *findMin();
		Node *findMinRecursive(Node*);
		
		Node *findMax();
		Node *findMaxRecursive(Node*);
		
		void inOrder();
		void inOrderRecursive(Node*);
		
		void postOrder();
		void postOrderRecursive(Node*);
		
		void preOrder();
		void preOrderRecursive(Node*);
		
		Node *root;	
	
	BinaryTree (){
		root = NULL;
	}	
};






