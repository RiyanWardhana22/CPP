#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan input
    double tugas, uts, uas, nilaiAkhir;

    // Input nilai tugas, UTS, dan UAS
    cout<<"==================================="<<endl;
    cout<<"=   PROGRAM PENILAIAN MAHASISWA   ="<<endl;
    cout<<"==================================="<<endl;
    cout << "Masukkan nilai tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    // Menghitung nilai akhir berdasarkan bobot
    nilaiAkhir = 0.3 * tugas + 0.3 * uts + 0.4 * uas;

    // Menampilkan nilai akhir
    cout << "Nilai akhir: " << nilaiAkhir << endl;

    // Menentukan grade berdasarkan interval
    if (nilaiAkhir >= 85 && nilaiAkhir <= 100) {
        cout << "Nilai: A" << endl;
    } else if (nilaiAkhir >= 75 && nilaiAkhir < 85) {
        cout << "Nilai: B" << endl;
    } else if (nilaiAkhir >= 65 && nilaiAkhir < 75) {
        cout << "Nilai: C" << endl;
    } else if (nilaiAkhir >= 55 && nilaiAkhir < 65) {
        cout << "Nilai: D" << endl;
    } else {
        cout << "Nilai: E" << endl;
    }

    return 0;
}
