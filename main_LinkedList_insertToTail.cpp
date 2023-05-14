#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int agrc, char** argv){
	
	LinkedList list1;
	list1.insertToHead(40);
	list1.insertToHead(30);
	list1.insertToHead(20);
	list1.insertToHead(10);
	
	list1.insertToTail(90);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	
	cout << "---------"<< endl;
	list1.printAll();
	
	
	return(0);	
	
}
