#include <iostream>
using namespace std;

int main()
{
            float celcius, fahrenheit, kelvin, reamur, suhu;
            int pilihan;

            cout<<"==============================="<<endl;
            cout<<"=   KONVERSI SUHU SEDERHANA   ="<<endl;
            cout<<"==============================="<<endl;

            cout<<"1.) Konversi Celcius"<<endl;
            cout<<"2.) Konversi Fahrenheit"<<endl;
            cout<<"3.) Konversi Kelvin"<<endl;
            cout<<"4.) Konversi Reamur"<<endl;
            cout<<"Masukkan Nomor Pilihan Anda = ";cin>> pilihan;

            cout<<"Masukkan Suhu = "; cin >> suhu;

            if(pilihan == 1)
            {
                        fahrenheit = (suhu * 9 / 5) + 32;
                        kelvin = suhu + 273.15;
                        reamur = suhu + 4 / 5;
                        cout<< suhu << " Derajat Celcius = "<< fahrenheit <<" Dejarat Fahrenheit"<<endl;
                        cout<<"\t\t  = "<< kelvin << " Derajat Kelvin"<<endl;
                        cout<<"\t\t  = "<< reamur << " Derajat Reamur"<<endl;
            }
            else if(pilihan == 2)
            {
                        celcius = (suhu - 32) * 5 / 9;
                        kelvin = (suhu + 459.67) * 5 / 9;
                        reamur = (suhu - 32) * 4 / 9;
                        cout<< suhu << " Derajat Fahrenheit = "<< celcius <<" Derajat Celcius"<<endl;
                        cout<<"\t\t      = "<< kelvin << " Derajat Kelvin"<<endl;
                        cout<<"\t\t      = "<< reamur << " Derajat Reamur"<<endl;
            }
            else if(pilihan == 3)
            {
                        celcius = suhu - 273.5;
                        fahrenheit = suhu * 9 / 5 - 459.67;
                        reamur = (suhu - 273.15) * 4 / 5;
                        cout<< suhu << " Derajat Kelvin = "<< celcius <<" Derajat Celcius"<<endl;
                        cout<<"\t\t      = "<< fahrenheit << " Derajat Fahrenheit"<<endl;
                        cout<<"\t\t      = "<< reamur << " Derajat Reamur"<<endl;
            }
            else if(pilihan == 4)
            {
                        celcius = suhu * 5 / 4;
                        fahrenheit = suhu * 9 / 4 + 32;
                        kelvin = suhu * 5 / 4 + 273.15;
                        cout<< suhu << "Derajat Reamur = "<< celcius <<" Derajat Celcius"<<endl;
                        cout<<"\t\t      = "<< fahrenheit << " Derajat Fahrenheit"<<endl;
                        cout<<"\t\t      = "<< kelvin << " Derajat Kelvin"<<endl;
            }
}