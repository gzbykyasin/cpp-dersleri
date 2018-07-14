#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class sekil
{
	public:
		float alan;
		string birim;
		string sekilturu;
		sekil()
		{
			birim="cm2";
		}

		void alanyazdir()
		{
			cout<<sekilturu<<" "<<alan<<" "<<birim<<" alana sahip"<<endl;
		}
};

class ucgen:public sekil
{       
	public:
		int taban;
		int yukseklik;
		ucgen()
		{
			sekilturu="ucgen";

		}		
		~ucgen()
		{
			cout<<"~ucgen() yok edildi"<<endl;
		}
		
		
			
		
};
        
class kare:public sekil
{
	public:
		int kenar;
		kare()
		{
			sekilturu="kare";

		}
		~kare()
		{
			cout<<"~kare() yok edildi"<<endl;
		}
		
		
		
};

class dikdortgen:public sekil
{
	public:
		int kenar;
		int yukseklik;
		dikdortgen()
		{
			sekilturu="dikdortgen";

		}
		
		~dikdortgen()
		{
			cout<<"~dikdortgen() yok edildi"<<endl;
		}
		

};
class daire:public sekil
{
	public:
		int yaricap;
		daire()
		{
			sekilturu="Daire ";
		}
		~daire()
		{
			cout<<"~daire() yok edildi"<<endl;
		}


		
			
		
};

int main()
{
	kare k1;
	dikdortgen dk1;
	daire d1;
	ucgen u1;
	k1.kenar=10;
	k1.alan=k1.kenar*k1.kenar;
	dk1.kenar=10;
	dk1.yukseklik=16;
	dk1.alan=dk1.kenar*dk1.yukseklik;
	d1.yaricap=3;
	d1.alan=(3,14)*(pow(d1.yaricap,2));
	u1.taban=5;
	u1.yukseklik=10;
	u1.alan=u1.taban*u1.yukseklik/2;
	d1.alanyazdir();
	k1.alanyazdir();
	dk1.alanyazdir();
	u1.alanyazdir();
}
