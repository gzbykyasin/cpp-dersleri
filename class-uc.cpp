#include<iostream>
#include<cstring>
using namespace std;

class Dizi
{
	private:
		int *p;
		int eleman;
		int max;
	public:
		Dizi()
		{
			cout<<"nesne çağrıldı"<<endl;
			p=new int[10];
			max=10;
			eleman=0;
		}
		Dizi(int boyut)
		{
			p=new int[boyut];
			max=boyut;
			eleman=0;
		}	

		void ekle(int a)
		{
			
			if(max==eleman)
				genislet(max);
			p[eleman]=a;
			eleman++;
		}

		int getir(int i)
		{
			if(i<0)
				return false;
			if(i>=eleman)
				return false;
			return p[i];
		}

		bool getir(int& a,int i)
		{
			if(i<0)
				return false;
			if(i>=eleman)
				return false;
			a=p[i];
			return true;
		}

		void genislet(int boyut)
		{
			int *yeni=new int[max+boyut];
			memcpy(yeni,p,eleman*sizeof(int));
			delete [] p;
			p=yeni;
		}
};

int main()
{
	Dizi d;
	for(int i=0;i<10;i++)
		d.ekle(i);
	for(int i=0;i<10;i++)
		cout<<d.getir(i)<<endl;
	for(int i=0;i<10;i++)
		d.ekle(i*i);
	for(int i=0;i<10;i++)
		cout<<d.getir(i)<<endl;
	int el_getir=d.getir(5);
	bool varmi=d.getir(el_getir,5);
	if(varmi==true)
		cout<<"eleman var"<<": "<<el_getir<<endl;
	else
	cout<<"eleman yok"<<endl;
}
