#include<iostream>
using namespace std;

class Ogrenci{
	private:
		char ad[50];
                char soyad[50];
		int numara;
		float ortalama;
		bool ogrencidurum(){
			if(ortalama<2.0)
				return false;
			return true;
		}
	
	public:
		void ogrencigir(){
			cin>>ad;
			cin>>soyad;
			cin>>numara;
			cin>>ortalama;
		}
		void ogrenciyaz(){
			cout<<ad<<" "<<soyad<<"\n"<<numara<<" "<<ortalama<<endl;
			
		}
		void gecmekalma(){
			if(ogrencidurum()==true)
				cout<<"gecti"<<endl;
			cout<<"kaldı"<<endl;
		}
};

int main()
{
	Ogrenci ogrenci;
	ogrenci.ogrencigir();
	ogrenci.ogrenciyaz();
	ogrenci.gecmekalma();
}
