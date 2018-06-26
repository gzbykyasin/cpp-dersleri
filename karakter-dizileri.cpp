#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char yazi[20];
	cout<<"bir karakter dizisi girin:\n";
	cin>>yazi;
	
	cout<<yazi<<endl;
	for(int i=0;i<strlen(yazi)+1;i++)
	{	
		if(yazi[i]=='\0')
		{cout<<"bitti"<<endl;}
	
	}	
}
