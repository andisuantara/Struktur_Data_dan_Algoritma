#include <iostream>
using namespace std;

#define max 5
string data[max];
int top =0;

bool isFull(){
	if(top >= max){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){
	if(top == 0){
		return true;
	}else{
		return false;
	}
}

void view(){
	if(!isEmpty()){
		cout << "data antrian :"<<endl;
		for(int a= top-1; a>= 0; a--){
			cout <<"antrian ke ["<< a+1 <<"]. "<< data[a] << endl;
		}
	}else{
		cout << "antrian kosong" << endl;
	}
	
	if(isFull()){
	cout << "antrian penuh" << endl;
	}
	cout << endl;
}


void enqueue(){
	if(!isFull()){
		cout << "masukan data angka: ";
		cin >> data[top];
		top++;
	}
}

int main(){
	
	int pilihan;
	string isi;
	
	queue :
		system("cls");
		view( );
		cout <<"pilih menu di bawah :\n1.Tambah Nomor Antrian\n2.exit\n\nMasukan Pilihan : ";
		cin >> pilihan;
	
	
	if(pilihan == 1){
		system("cls");
		cout << "Enqueue" <<endl;
		enqueue();
		goto queue;
	}else{
		return 0;
	} 
	return(0);
}
