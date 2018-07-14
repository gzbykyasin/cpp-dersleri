#include<iostream>
using namespace std;

struct dortgen
{
	int yukseklik;
	int genislik;
};

dortgen *genislet(dortgen * eskialan,int eskiboyut,int eklenecek)
{
	dortgen *yenialan=new dortgen[eskiboyut+eklenecek];
	for(int i=0;i<eskiboyut;i++)
	{
		yenialan[i].genislik=eskialan[i].genislik;
		yenialan[i].yukseklik=eskialan[i].yukseklik;
	}

	/*
	 *memcpy(yenialan,eskialan,eskiboyut*sizeof(dortgen));
	 assembly dili dahil edilerek yazılmış bir fonksiyon ve bizim yazmış olduğumuz for döngüsünden daha hızlı çalışıyor. Bellekteki bir alanı başka bir alana kopyalamak istediğimizde bu fonksiyonu kullanabiliriz. Kodlar açıklayacak olursak memcpy isimli fonksiyona 3 parametre gönderiyoruz. (Nereye kopyalamak istediğimiz,nerden kopyalamak istediğimiz,kopyalanacak olan verinin kaç bayt olduğu).
	 Buradaki eskiboyut*sizeof(dortgen) fonksiyonu dortgen struct'ındaki değişkenler kadar bir alan ayır demek.
	 *
	 * */
	delete [] eskialan;
	return yenialan;
}

int main()
{
	dortgen *p=new dortgen[5];
	cout<<"genislemeden once:\n";
	for(int i=0;i<5;i++)
	{
		p[i].genislik=i*i;
		p[i].yukseklik=i*10;
	}
	for(int i=0;i<5;i++)
	{
	cout<<"genislik  p["<<i<<"]:"<<(p+i)->genislik<<"\t";
	cout<<"yukseklik p["<<i<<"]:"<<(p+i)->yukseklik<<endl;
	}
	cout<<"genislemeden sonra\n";
	p=genislet(p,5,5);
	
	for(int i=5;i<10;i++)
	{
		p[i].genislik=i*i;
                p[i].yukseklik=i*10;
	}
	for(int i=0;i<10;i++)
        {
		 cout<<"genislik  p["<<i<<"]:"<<(p+i)->genislik<<"\t";
		 cout<<"yukseklik p["<<i<<"]:"<<(p+i)->yukseklik<<endl;
	}


	

}

