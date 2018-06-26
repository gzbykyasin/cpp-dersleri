#include<iostream>
using namespace std;
int main()
{
	int a=2500000;
	cout<<"a degeri=\t"<<a<<endl<<"a bellek adres:\t"<<&a<<endl;
	cout<<"a 1 fazla bellek adres:\t"<<(&a+1)<<"\t"<<*(&a+1)<<endl;
	cout<<"a 2 fazla bellek adres:\t"<<(&a+2)<<"\t"<<*(&a+2)<<endl;
	cout<<"a 3 fazla bellek adres:\t"<<(&a+3)<<"\t"<<*(&a+3)<<endl;
	
}

	
