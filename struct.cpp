#include<iostream>
using namespace std;

struct Insan{
	char Ad[100];
	char Soyad[100];
	int TcNo;
	int Yas;
};

Insan VeriGir()
{
	Insan ogr;
	cout<<"Adi girin:\t";
	cin>>ogr.Ad;
	cout<<endl;
	cout<<"Soyad girin:\t";
	cin>>ogr.Soyad;
	cout<<endl;
	cout<<"Yasini girin:\t";
	cin>>ogr.Yas;
	cout<<endl;
	cout<<"TC No girin:\t";
	cin>>ogr.TcNo;
	cout<<endl;

	return ogr;
}
void VeriDegistir(Insan ogr){
 
        cout<<"Adi girin:\t";
        cin>>ogr.Ad;
        cout<<endl;
        cout<<"Soyad girin:\t";
        cin>>ogr.Soyad;
        cout<<endl;
        cout<<"Yasini girin:\t";
        cin>>ogr.Yas;
        cout<<endl;
        cout<<"TC No girin:\t";
        cin>>ogr.TcNo;
        cout<<endl;
	
}
void VeriYaz(Insan ogr)
{
	cout<<ogr.Ad<<endl<<ogr.Soyad<<endl<<ogr.Yas<<endl<<ogr.TcNo<<endl;
}

int main()
{
	Insan ogr=VeriGir();
	VeriDegistir(ogr);
	VeriYaz(ogr);
}
