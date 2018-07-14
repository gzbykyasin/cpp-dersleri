#include<iostream>

using namespace std;

class calisan
{	public:
		int a;
		calisan()
		{
			a=10;
		}
		virtual void yaz()
		{
			cout<<"calisan "<<a<<endl;
		}

};

class ogrenci:public calisan
{
	public:
		int b;
		ogrenci()
		{
			b=20;
		}
		void yaz()
		{
			cout<<"ogrenci "<<a<<" "<<b<<endl;
		}

};

class akademisyen:public calisan
{
	public:
		int c;
		akademisyen()
		{
			c=30;
		}
		void yaz()
		{
			cout<<"akademisyen "<<a<<" "<<c<<endl;
		}

};

