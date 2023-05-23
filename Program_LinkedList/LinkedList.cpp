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

void LinkedList::insertAfter(int tambah, int after){
	
	Node *newNode = new Node();
	newNode->value = tambah;
	
    Node* tmp = head;
    while (tmp != NULL && tmp->value != after) {
        tmp = tmp->next;
    }

    if (tmp!=NULL) {
        newNode->next = tmp->next;
        tmp->next = newNode;
 
    } return; 
}


void LinkedList::deleteFromHead(){
 
   Node *tmp=head;
   head= head->next;
   delete tmp;
   return;
}

void LinkedList::deleteFromTail(){
	
	Node* tail = head;
    while (tail->next->next != NULL)
        tail = tail->next;
 
	 delete (tail->next);
	 tail->next = NULL;	
}

void LinkedList::deleteByValue(int input){
	
	Node* tmp = head;
    while (tmp->next != NULL && tmp->next->value != input) {
        tmp = tmp->next;
    }

    if (tmp->next != NULL) {
        Node* tmpDel = tmp->next;
        tmp->next = tmpDel->next;
        delete tmpDel;
        
    }return;
	
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
	
}








