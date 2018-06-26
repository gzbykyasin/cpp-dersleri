#include<iostream>
using namespace std;
int sayi1=10;

int main()
{
	int sayi1=15;
	
	{
		int sayi1=20;
		
		{
			int sayi1=25;
			cout<<sayi1<<endl;
		}
		cout<<sayi1<<endl;
	}
	cout<<sayi1<<endl;
}
