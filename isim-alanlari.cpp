#include<iostream>

using namespace std;

int a=10;

namespace M
{
	int a=15;
}

namespace C
{
	int a=20;
}

int main()
{
	cout<<"global a degiskeni"<<a<<endl;
	cout<<"M isim alanina ait a degiskeni"<<M::a<<endl;
	cout<<"C isim alanina ait a degiskeni"<<C::a<<endl;
}
