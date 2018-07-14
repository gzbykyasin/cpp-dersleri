#include "kalitim.h"


int main()
{
	calisan * c[3];
	ogrenci* ogr=new ogrenci;
	akademisyen* akd=new akademisyen;
	calisan* cal=new calisan;
	
	c[0]=ogr;
	c[1]=akd;
	c[2]=cal;

	c[0]->yaz();

	c[1]->yaz();

	c[2]->yaz();

}

