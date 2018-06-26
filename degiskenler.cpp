#include<iostream>

using namespace std;

int main()
{
	short int sayi1=10;
	short int sayi2=20;
	cout<<"degiskenlerin hafizadaki yerleri"<<endl;
	cout<<"sayi1:\t"<<&sayi1<<endl<<"sayi2:\t"<<&sayi2<<endl;
	cout<<"degisken degerleri"<<endl;
	cout<<"sayi1\t"<<sayi1<<endl<<"sayi2\t"<<sayi2<<endl;
	short int toplam;
	toplam=sayi1+sayi2;
	cout<<"toplam ın hafizadaki yeri\t"<<&toplam<<endl;
	cout<<"toplam=\t"<<toplam<<endl;

}
