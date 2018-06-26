#include<iostream>
using namespace std;
int faktoriyel(int say);
int ustAl(int taban_sayi,int ust_sayi);
int main()
{
	for(;;)
	{	
		short durum;
		int sayi,tekrarla;
		short* p;
		cout<<"islem secin"<<endl;
		cout<<"0 -> faktoriyel hesapla\n1 -> ust al\n";
		cin>>durum;
		p=&durum;
		cout<<p<<endl;
		cout<<*p<<endl;
		cout<<p+1<<endl;
		cout<<*(p+1)<<endl;
		if(durum==0)
		{
		cout<<"faktoriyel hesaplamak istediğiniz sayıyı girin:\t"<<endl;
		cin>>sayi;
		cout<<sayi<<"!=\t"<<faktoriyel(sayi)<<endl;
		}
		else if(durum==1)
		{
		cout<<"ust almak istediğiniz sayıyı girin:\t"<<endl;
		cin>>sayi;
		cout<<"kacıncı kuvveti\t";
		cin>>tekrarla;
		cout<<sayi<<"!=\t"<<ustAl(sayi,tekrarla)<<endl;
		}
		else
		{
		cout<<"yanlış secim. Lütfen 1 veya 0 girin";
		break;
		}
	}
}
int faktoriyel(int say)
{
	int sonuc=1;
	for(int i=1;i<=say;i++)
		sonuc*=i;
	return sonuc;
}
int ustAl(int taban_sayi,int ust_sayi)
{
	int sonuc=1;
	for(int i=0;i<ust_sayi;i++)
		sonuc*=taban_sayi;
	return sonuc;
}
