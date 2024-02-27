#include <iostream>
using namespace std;

int main() {
    int jumlahPrima = 0;
    int i = 2;

    cout << "Bilangan prima antara 1 sampai 1000:" << endl;

    do {
        int j = 2;
        bool isPrima = true;

        do {
            if (i != j && i % j == 0) {
                isPrima = false;
                break;
            }
            ++j;
        } while (j < i);

        if (isPrima) {
            cout << i << " ";
            ++jumlahPrima;
        }

        ++i;
    } while (i <= 1000);

    cout << "\nJumlah bilangan prima: " << jumlahPrima << endl;

}