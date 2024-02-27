#include <iostream>
using namespace std;

int main()
{
            float jenisKendaraan, jamMasuk, jamKeluar, totalJam, totalBiaya;

            cout<<"============================="<<endl;
            cout<<"= BIAYA TARIF PARKIR UNIMED ="<<endl;
            cout<<"============================="<<endl;
            cout<<"= 1. Mobil ="<<endl;
            cout<<"= 2. Motor ="<<endl;
            cout<<"============"<<endl;
            cout<<"Pilih Jenis Kendaraan = "; cin>> jenisKendaraan;
            cout<<"Masukkan Jam Masuk (FORMAT 24 JAM)  = "; cin>> jamMasuk;
            cout<<"Masukkan Jam Keluar (FORMAT 24 JAM) = "; cin>> jamKeluar;

            totalJam = jamKeluar - jamMasuk;
            
            if(totalJam < 0) 
            {
                        totalJam = jamKeluar + 24 - jamMasuk;
            }

            if(jenisKendaraan == 1)
            {
                        totalBiaya =  totalJam * 3000;
            }
            else
            {
                        totalBiaya = totalJam * 1000;
            }

            cout<<"TOTAL BIAYA PARKIR = RP "<< totalBiaya << " (" <<totalJam<< " Jam)";
            return 0;
}