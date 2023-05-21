#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(40);
	list1.insertToHead(50);
	
	list1.insertAfter(100,20); //menambahkan nilai 100, setelah nilai 30
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << "nilai : "<< list1.head->next->next->value << endl;
	
	list1.printALL();
	
}
