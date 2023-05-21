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

void LinkedList::insertAfter(int tambah, int after) {
	
	if (head == NULL){
        return;
    }
    
    Node *newNode = new Node();
    newNode->value = tambah;
    
    Node* tmp = head;
    while (tmp != NULL && tmp->value != after){
        tmp = tmp->next;
    }
	
	if (tmp == NULL){
		return;
	}
	
	newNode->next = tmp->next;
	tmp->next = newNode;

}

void LinkedList::printALL(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
}

