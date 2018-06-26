#include<iostream>
using namespace std;

void artir(int *a)
{
	(*a)++;
}
int main()
{
	int sayi=190;
	cout<<"artirdan once:\t"<<sayi<<endl;
	artir(&sayi);
	cout<<"artirmadan sonra:\t"<<sayi<<endl;
}
