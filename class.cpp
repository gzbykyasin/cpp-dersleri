#include<iostream>
using namespace std;
class ogrenci{
	public:
		char ad[50];
		char soyad[50];
		int numara;
		float ortalama;
		void ogrencigir(){
			cin>>ad;
			cin>>soyad;
			cin>>numara;
			cin>>ortalama;
		}
		void ogrenciyaz(){
			cout<<ad<<" "<<soyad<<"\n"<<numara<<" "<<ortalama<<endl;
		}
		bool ogrencidurum(){
			if(ortalama>2.0)
				return true;
			return false;
		}
};

int main()
{
	ogrenci ogrenci;
	ogrenci.ogrencigir();
	ogrenci.ogrenciyaz();
	if(ogrenci.ogrencidurum()==true)
		cout<<"geçti"<<endl;
	else
		cout<<"kaldı"<<endl;
}
