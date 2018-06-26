#include<iostream>
#include<time.h>
using namespace std;
void fonksiyon1();
void fonksiyon2();
int main()
{
baslangic:
	int islem;
	cout<<"islem secin:\n1\t2"<<endl;
	cin>>islem;
	if(islem==1)
		fonksiyon1();
	else if(islem==2)
		fonksiyon2();
	else
		goto baslangic;
}

void fonksiyon1()
{
	int sayilar[5];
	srand(time(0));
	for(int i=0;i<5;i++)
	{
		sayilar[i]=rand()%100;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"i:"<<i<<"\t"<<sayilar[i]<<endl;
	}
}
void fonksiyon2()
{
	int sayilar[5];
	for(int i=0;i<5;i++)
	{
		cin>>sayilar[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"i:"<<i<<"\t"<<sayilar[i]<<endl;
	}
}
