//Tugas Program linkedList, Insert To Tail
#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
}

void LinkedList::insertToTail(int input){
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = tail->next;
	tail->next = newNode;
	tail = newNode;
	
	if(tail==NULL)
		tail=head;

}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
}

