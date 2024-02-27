#include <iostream>
using namespace std;

int main()
{
            int tanggal, bulan, tahun, thn, bln, hari, a, b, c;
            char jawab;

            cout<<"==============================="<<endl;
            cout<<"=   PROGRAM MENGHITUNG UMUR   ="<<endl;
            cout<<"==============================="<<endl;

            do{
                        cout<<"TANGGAL LAHIR ANDA = "; cin>> tanggal;
                        cout<<"BULAN LAHIR ANDA   = "; cin>> bulan;
                        cout<<"TAHUN LAHIR ANDA   = "; cin>> tahun;
                        cout<<"==============================="<<endl;
                        cout<<"TANGGAL HARI INI   = "; cin>> hari;
                        cout<<"BULAN SEKARANG     = "; cin>> bln;
                        cout<<"TAHUN SEKARANG     = "; cin>> thn;

                        a = (tanggal - hari);
                        b = (bln -  bulan);
                        c = (thn - tahun);

                        cout<<"Umur Anda Sekarang "<< c << " Tahun "<< b <<" Bulan "<< a <<" Hari ";
                        cout<<"Ingin Mencoba Lagi ? [Y/T] = "; cin>> jawab;
            } while(jawab== 'y' || jawab == 'Y');

            return 0;
}