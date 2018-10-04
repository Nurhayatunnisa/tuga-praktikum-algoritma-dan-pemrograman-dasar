#include <conio.h>
#include <iostream>
using namespace std;


int main ()
{
      int masukjam, masukmenit, masukdetik;
	  int keluarjam, keluarmenit, keluardetik;
	  int selisihjam, selisihmenit, selisihdetik;
	  
//deklarasi variabel
cout<<"waktu pertama";
cout << "Jam = ";cin>>masukjam;
cout << "Menit = ";cin>>masukmenit;
cout << "Detik ="; cin>>masukdetik;

cout<<"waktu kedua";
cout<<"Jam = ";cin>>keluarjam;
cout << "Menit =";cin>>keluarmenit;
cout << "Detik =";cin>>keluardetik;

if ((keluardetik - masukdetik) < 0){
      selisihdetik = (60 + keluardetik) - masukdetik;
      keluarmenit--;
}
else{
      selisihdetik = keluardetik -masukdetik;
      }
if ((keluarmenit - masukmenit) < 0){
      selisihmenit = (60 + keluarmenit) - masukmenit;
      keluarjam--;
}
else{
      selisihmenit = keluarmenit - masukmenit;
      }
if((keluarjam-masukjam)<0){
      selisihjam=(24+keluarjam)-masukjam;
      keluarmenit--;
}
else{
      selisihjam=keluarjam-masukjam;
      }
//menampilkan hasil selisih waktu
cout<<"Selisih Waktu";
cout<<"Jam= "<<selisihjam;
cout<<"Menit= "<<selisihmenit;
cout<<"Detik= "<<selisihdetik;

_getch();

}
