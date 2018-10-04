#include <conio.h>
#include <iostream>

using namespace std;
main(){
    //deklarasi Variabel
        float meter,yard,kaki,inchi;
    
    //Inputan
        cout<<"Konversi dari Meter ke Yard, Kaki, dan Inchi"<<endl;
        cout<<"Input Meter : ";
        cin>>meter;
    
    //menhitung konversi
        //Konversi Meter ke Yard
            yard = meter / 0.9144;
        //Konversi Meter ke Kaki
            kaki = (meter*100) / 30.48;
        //Konversi Meter ke Inchi
            inchi = (meter*1000) / 25.4;
    
    //menampilkan hasil
        cout<<meter<<" meter =  "<<yard<<" yard "<<endl;
        cout<<meter<<" meter =  "<<kaki<<" kaki "<<endl;
        cout<<meter<<" meter =  "<<inchi<<" inchi "<<endl;
    
    //End
    getch();
}
