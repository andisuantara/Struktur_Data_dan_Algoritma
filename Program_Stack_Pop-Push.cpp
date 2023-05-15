#include <iostream>
using namespace std;

#define max 5
string data[max];
int top = 0;

bool kosong(){
	if(top == 0){
		return true;
	}else{
		return false;   
	}
}

bool penuh(){
	if(top >= max){
		return true;
	} else {
		return false;
	}
}

void menampilkan(){
	if(!kosong()){
		cout << "data tersimpan : " << endl;
		for(int a = top-1; a >= 0; a--)
			cout <<"["<<  a+1 << "]. " << data[a] << endl;	 
	}else{
		cout << "data tidak tersedia !" << endl;		
	}
	
	if(penuh()){
		cout << "stack sudah penuh !" << endl;
	}
	cout << endl;
}

void push(){
	if(!penuh()){
		cout << "masukan data : ";
		cin >> data[top];
		top++;
	}
}

void pop(){
	if(!kosong()){
		top--;
	}
}

int main(){
	
	int pilihan;
	string isi;

	stack :
		system("cls");
		menampilkan(); 
		cout << "menu utama :\n1. push\n2. pop\n3. exit" << endl;
		cout << "\nPilihan : ";  
		cin >>pilihan;
		
		if(pilihan == 1){
			system("cls");
			push();
			goto stack;
		}
		else if(pilihan == 2){
			pop();
			goto stack;
		}
		system("cls");
		cout << "program selesai";
	return(0);
}
