#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(0));

    const int jumlahAngka = 100;
    cout << "1000 angka acak:" << endl;
    for (int i = 0; i < jumlahAngka; ++i) {
        cout << rand() % 1000 << " ";
    }
    cout << "\n\nSatu bilangan prima dari angka-angka di atas:" << endl;
    for (int i = 0; i < jumlahAngka; ++i) {
        int angka = rand() % 100;
        if (isPrime(angka)) {
            cout << angka << endl;
            break; 
        }
    }
    return 0;
}
