#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	short int sayi1;
	short int sayi2;
	
	cout<<"sayi1:\t";
	cin>>sayi1;
	cout<<"sayi2:\t";
	cin>>sayi2;

	if(sayi1>sayi2)
	{
		cout<<"sayi1 daha buyuk"<<endl;
	}
	else
	{
		cout<<"sayi2 daha buyuk"<<endl;
	}
//	cout<<(sayi1>sayi2)?"sayi1 buyuk":"sayi2 buyuk";
}
