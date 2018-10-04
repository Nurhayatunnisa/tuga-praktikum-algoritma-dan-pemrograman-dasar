#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main ()
{
	int angka;
	cout<<"masukkan angka : "; cin>>angka;
	cout<<endl;
	//seleksi pembanding AND, kedua kondisi harus bernilai benar 
	if ((angka > 0) && (angka <10)){ 
		cout<<"anda memasukkan angka antara 1 sampai 9"; 
		;} else {
		cout<<" yang anda masukkan bukan antara 1 sampai 9";
	}
}
