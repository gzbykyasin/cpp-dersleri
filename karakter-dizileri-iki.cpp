#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string strDeneme="merhaba";
	char strDeneme2[20];
	cout<<strDeneme<<endl;
	for(int i=0;i<strDeneme.length();i++)
		cout<<strDeneme[i]<<endl;
	strcpy (strDeneme2,"merhaba");
	cout<<strDeneme2<<endl;
}

