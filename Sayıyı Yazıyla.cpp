#include <iostream>
using namespace std;

int main()
{
int sayi,deger;
cout<<"7 Haneli Bir Sayi Giriniz"<<endl;
cin>>sayi;
while(sayi<1000000 || sayi>9999999){
	cout<<"Belirtilen aralikta sayi giriniz";
	cin>>sayi;
}
deger=sayi/1000000;
switch(deger) //1. Hane
{
	case 1:
		cout<<"Bir Milyon ";
		sayi-=1000000;
		break;
	case 2:
		cout<<"Iki Milyon ";
		sayi-=2000000;
		break;
	case 3:
		cout<<"Uc Milyon ";
		sayi-=3000000;
		break;
	case 4:
		cout<<"Dort Milyon ";
		sayi-=4000000;
		break;
	case 5:
		cout<<"Bes Milyon ";
		sayi-=5000000;
		break;
	case 6:
		cout<<"Alti Milyon ";
		sayi-=6000000;
		break;
	case 7:
		cout<<"Yedi Milyon ";
		sayi-=7000000;
		break;
	case 8:
		cout<<"Sekiz Milyon ";
		sayi-=8000000;
		break;
	case 9:
		cout<<"Dokuz Milyon ";
		sayi-=9000000;
		break;
}
deger=sayi/100000;
switch(deger) //2. Hane
{
	case 1:
		cout<<"Yuz ";
		sayi-=100000;
		break;
	case 2:
		cout<<"Ikiyuz ";
		sayi-=200000;
		break;
	case 3:
		cout<<"Ucyuz ";
		sayi-=300000;
		break;
	case 4:
		cout<<"Dortyuz ";
		sayi-=400000;
		break;
	case 5:
		cout<<"Besyuz ";
		sayi-=500000;
		break;
	case 6:
		cout<<"Altiyuz ";
		sayi-=600000;
		break;
	case 7:
		cout<<"Yediyuz ";
		sayi-=7000000;
		break;
	case 8:
		cout<<"Sekizyuz ";
		sayi-=800000;
		break;
	case 9:
		cout<<"Dokuzyuz ";
		sayi-=900000;
		break;
}
deger=sayi/10000;
switch(deger)//3. Hane
{
	case 1:
		cout<<"On ";
		sayi-=10000;
		break;
	case 2:
		cout<<"Yirmi ";
		sayi-=20000;
		break;
	case 3:
		cout<<"Otuz ";
		sayi-=30000;
		break;
	case 4:
		cout<<"Kirk ";
		sayi-=40000;
		break;
	case 5:
		cout<<"Elli ";
		sayi-=50000;
		break;
	case 6:
		cout<<"Atmis ";
		sayi-=60000;
		break;
	case 7:
		cout<<"Yetmis ";
		sayi-=70000;
		break;
	case 8:
		cout<<"Seksen ";
		sayi-=80000;
		break;
	case 9:
		cout<<"Doksan ";
		sayi-=90000;
		break;
}
deger=sayi/1000;
switch(deger) //4. Hane
{
	case 1:
		cout<<"Bir ";
		sayi-=1000;
		break;
	case 2:
		cout<<"Iki ";
		sayi-=2000;
		break;
	case 3:
		cout<<"Uc ";
		sayi-=3000;
		break;
	case 4:
		cout<<"Dort ";
		sayi-=4000;
		break;
	case 5:
		cout<<"Bes ";
		sayi-=5000;
		break;
	case 6:
		cout<<"Alti ";
		sayi-=60000;
		break;
	case 7:
		cout<<"Yedi ";
		sayi-=7000;
		break;
	case 8:
		cout<<"Sekiz ";
		sayi-=8000;
		break;
	case 9:
		cout<<"Dokuz ";
		sayi-=9000;
		break;
}
cout<<"Bin ";
deger=sayi/100;
switch(deger) //5. Hane
{
	case 1:
		cout<<"Yuz ";
		sayi-=100;
		break;
	case 2:
		cout<<"Ikiyuz ";
		sayi-=200;
		break;
	case 3:
		cout<<"Ucyuz ";
		sayi-=300;
		break;
	case 4:
		cout<<"Dortyuz ";
		sayi-=400;
		break;
	case 5:
		cout<<"Besyuz ";
		sayi-=500;
		break;
	case 6:
		cout<<"Altiyuz ";
		sayi-=600;
		break;
	case 7:
		cout<<"Yediyuz ";
		sayi-=700;
		break;
	case 8:
		cout<<"Sekizyuz ";
		sayi-=800;
		break;
	case 9:
		cout<<"Dokuzyuz ";
		sayi-=900;
		break;
}
deger=sayi/10;
switch(deger)//6. Hane
{
	case 1:
		cout<<"On ";
		sayi-=10;
		break;
	case 2:
		cout<<"Yirmi ";
		sayi-=20;
		break;
	case 3:
		cout<<"Otuz ";
		sayi-=30;
		break;
	case 4:
		cout<<"Kirk ";
		sayi-=40;
		break;
	case 5:
		cout<<"Elli ";
		sayi-=50;
		break;
	case 6:
		cout<<"Atmis ";
		sayi-=60;
		break;
	case 7:
		cout<<"Yetmis ";
		sayi-=70;
		break;
	case 8:
		cout<<"Seksen ";
		sayi-=80;
		break;
	case 9:
		cout<<"Doksan ";
		sayi-=90;
		break;
}
deger=sayi;
switch(deger)
{
	case 1:
		cout<<"Bir ";
		sayi-=10000;
		break;
	case 2:
		cout<<"Iki ";
		sayi-=20000;
		break;
	case 3:
		cout<<"Uc ";
		sayi-=30000;
		break;
	case 4:
		cout<<"Dort ";
		sayi-=400000;
		break;
	case 5:
		cout<<"Bes ";
		sayi-=50000;
		break;
	case 6:
		cout<<"Alti ";
		sayi-=60000;
		break;
	case 7:
		cout<<"Yedi ";
		sayi-=70000;
		break;
	case 8:
		cout<<"Sekiz ";
		sayi-=80000;
		break;
	case 9:
		cout<<"Dokuz ";
		sayi-=90000;
		break;
}
cout<<endl;
system("Pause");












}
