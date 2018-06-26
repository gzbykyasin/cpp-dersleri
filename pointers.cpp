#include<iostream>
using namespace std;
int main()
{
	int sayi1=10;
	int* p=&sayi1;
	cout<<"p.."<<p<<endl;
	cout<<"&sayi1.."<<&sayi1<<endl;
	cout<<"*p.."<<*p<<endl;
	cout<<"sayi1.."<<sayi1<<endl;
	*p=200;
	cout<<"yeni *p.."<<*p<<endl;
	cout<<"yeni sayi1.."<<sayi1<<endl;
}
