#include<iostream>
using namespace std;
int main()
{
	int *p=new int[10];
	for(int i=0;i<10;i++)
		*(p+i)=i*i;
	int *temp=new int[20];
	for(int i=0;i<10;i++)
		*(temp+i)=*(p+i);
	delete [] p;
	p=temp;
	for(int i=10;i<20;i++)
		*(p+i)=i*i;
}
