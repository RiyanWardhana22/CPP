#include <iostream>
using namespace std;

int main()
{
            float absen, tugas, quis, uts, uas, totalNilai;
            cout<<"========================================"<<endl;
            cout<<"=   PENILAIAN MAHASISWA ILKOM UNIMED   ="<<endl;
            cout<<"========================================"<<endl;
            cout<<"Masukkan Nilai Absen = "; cin>> absen;
            cout<<"Masukkan Nilai Tugas = "; cin>> tugas;
            cout<<"Masukkan Nilai Quis = "; cin>> quis;
            cout<<"Masukkan Nilai UTS = "; cin>> uts;
            cout<<"Masukkan Nilai UAS = "; cin>> uas;

            totalNilai = 0.15 * absen + 0.2 * tugas + 0.15 * quis + 0.2 * uts + 0.3 * uas;

            cout<<"Total Nilai Mahasiswa = " << totalNilai << endl;

            if(totalNilai >= 80) {
                        cout<<"Nilai = A (Sangat Baik)"<<endl;
            } else if(totalNilai >= 70 && totalNilai < 80){
                        cout<<"Nilai = B (Baik)"<<endl;
            } else if(totalNilai >= 55 && totalNilai < 70){
                        cout<<"Nilai = C (Cukup)"<<endl;
            } else if(totalNilai >= 40 && totalNilai < 55){
                        cout<<"Nilai = D (Kurang)"<<endl;
            } else{
                        cout<<"Nilai = E (Sangat Kurang)"<<endl;
            }

            return 0;
}