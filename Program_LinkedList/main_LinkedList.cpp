#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(int agrc, char** agrv){
	
	cout << "\nlist1" << endl;
	LinkedList list1;
	list1.insertToHead(30);
	list1.insertToHead(40);
	list1.insertToHead(50);
	list1.insertToHead(60);
	
	list1.insertToTail(70);
	list1.insertAfter(350,30); //menambahkan nilai 350, setelah nilai 30
	
	list1.deleteFromHead();
	list1.deleteFromTail();
	list1.deleteByValue(40);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << "nilai: "<< list1.head->next->next->value << endl;
	cout << endl;
	list1.printAll();
	
	cout << "\nlist2" << endl;
	LinkedList list2;
	list2.insertToHead(90);
	list2.insertToHead(100);
	list2.insertToHead(200);
	list2.insertToHead(300);
	
	list2.insertToTail(400);
	list2.insertAfter(250,200); //menambahkan nilai 250, setelah nilai 200
	
	list2.deleteFromHead();
	list2.deleteFromTail();
	list2.deleteByValue(100);
	
	cout << "head: " << list2.head->value << endl;
	cout << "tail: " << list2.tail->value << endl;
	cout << endl;
	list2.printAll();
	
	
	
	
	
	
	
	return 0;
}
