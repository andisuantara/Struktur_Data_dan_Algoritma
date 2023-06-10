#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main(){
	
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(15);
	bin.insertNode(3);
	bin.insertNode(6);
	bin.insertNode(2);
	bin.insertNode(20);
	bin.insertNode(25);
	
	cout << "in-Order: ";
	bin.inOrder();
	cout<< endl;
	
	cout << "post-Order: ";
	bin.postOrder();
	cout<< endl;
	
	cout << "pre-Order: ";
	bin.preOrder();
	cout << endl << endl;
	
	//Tugas mencari minimum dan maksimun pada Binary Tree
	cout << "Nilai Min adalah: ";
	bin.findMin();
	
	cout << "Nilai Max adalah: ";
	bin.findMax();
	cout << endl;
	
	//Mencari nilai Node dari Inputan
	int srcInput = 3;
	bin.searchNode(srcInput);
	cout << endl << endl;
	
	//Menghapus Node Binary Tree
	int delVal = 25;
    bin.deleteNode(delVal);

}
