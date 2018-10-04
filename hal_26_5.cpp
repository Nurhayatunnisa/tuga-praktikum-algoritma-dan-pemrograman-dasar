#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main ()
{
	int tot_beli,potongan,jum_bayar;
	
	jum_bayar=0; cout<<"total pembelian RP. "; cin>>tot_beli;
	if (tot_beli >=50000)
		potongan = 0.2 * tot_beli;
		else
		potongan = 0.05 * tot_beli; 
		cout<<"besarnya potongan RP."<<potongan<<endl; 
		jum_bayar = tot_beli - potongan;
		cout<<endl<<endl
		
		;cout<<" jumlah yang harus dibayarkan RP. "<<jum_bayar<<endl;
		getch ();
		return 0;
}


