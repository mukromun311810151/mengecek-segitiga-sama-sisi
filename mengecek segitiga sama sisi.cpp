#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	
	cout <<"==========================="<<endl;
	cout <<"MENGECEK SEGITIGA SAMA SISI"<<endl;
	cout <<"==========================="<<endl;
	
	cout <<"MASUKKAN SISI A = ";
	cin >>a;
	cout <<"MASUKKAN SISI B = ";
	cin >>b;
	cout <<"MASUKKAN SISI C = ";
	cin >>c;
	
	if (a==b && a==c)
	cout <<"SEGITIGA TERSEBUT MERUPAKAN SEGITIGA SAMA SISI"<<endl;
	else
	cout <<"SEGITIGA TERSEBUT BUKAN SEGITIGA SAMA SISI"<<endl;
	
	return 0;
}
