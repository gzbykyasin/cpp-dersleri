#include<iostream>
using namespace std;

struct Dikdortgen{
	int yukseklik;
	int genislik;
};

int AlanBul(Dikdortgen *d1)
{
	d1->yukseklik=20;
	d1->genislik=10;
	return d1->yukseklik*d1->genislik;
}
int AlanBulReferans(Dikdortgen& d1)
{
	d1.yukseklik=10;
	d1.genislik=30;
	return d1.yukseklik*d1.genislik;
}
int main()
{
	Dikdortgen d1;
	d1.genislik=10;
	d1.yukseklik=40;
	cout<<"genislik:\t"<<d1.genislik<<endl;
	cout<<"yukseklik:\t"<<d1.yukseklik<<endl;

	cout<<"Pointer ile\nAlan=\t"<<AlanBul(&d1)<<endl;
	cout<<"Main içerisindeki genislik degisti:\t"<<d1.genislik<<endl;
	cout<<"Main içerisindeki yukseklik degisti:\t"<<d1.yukseklik<<endl;

	cout<<"Referans ile\nAlan=\t"<<AlanBulReferans(d1)<<endl;
	cout<<"yeni genislik:\t"<<d1.genislik<<endl;
	cout<<"yeni yukseklik:\t"<<d1.yukseklik<<endl;

}
