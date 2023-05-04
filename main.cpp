#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int agrc, char** argv){
	
	LinkedList list1;
	list1.insertToHead(10);
	list1.insertToHead(40);
	list1.insertToHead(30);
	list1.insertToHead(23);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	
	list1.printAll();
	
	LinkedList list2;
	list2.insertToHead(30);
	list2.insertToHead(22);
	
	list2.printAll();
	
	
	
	return(0);	
	
}
