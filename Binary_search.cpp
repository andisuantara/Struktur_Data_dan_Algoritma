#include <iostream>
using namespace std;
int index[5],array[5];
int a, b=0,caridt;
int main()
{
	for(a=0;a<5;a++)
	{
	    cout<<"masukan angka pada urutan ke ["<<a<<"]: ";
	    cin>>array[a];
	}
	cout<<endl;
	cout<<"masukan angka yang akan di cari : ";
	cin>>caridt;
	
	for(a=0;a<=5;a++)
	{
	if(array[a] == caridt)
	   {
	      index[b]=a;
	      b++;
	   }
	}
	
	if(b>0)
	{
	cout<<endl;
        cout<<"data "<<caridt<< " terletak di index ke : ";
	for(a=0;a<b;a++)
	{
	cout<<index[a]<<" ";
	   }
	      cout<<endl;
	   }
	else
	{
	cout<<" bilangan tidak di temukan";
	}
	
	return 0;
}
