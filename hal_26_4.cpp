#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main ()
{
//deklarasi variabel 
char huruf;

//masukan huruf
	cout<<"masukkan huruf kecil : "; cin>>huruf; 
	cout<<endl;
//seleksi pembanding OR, salah satu kondisi bernilai benar 
	if ((huruf == 'a'||huruf == 'i'||huruf == 'u'  || huruf == 'e' || huruf == 'o') 
		)cout<<"anda masukkan huruf vokal";
	 else 
		cout<<"yang anda masukkan adalah huruf konsonan";
return 0;
}
