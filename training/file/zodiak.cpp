#include <iostream>
using namespace std;

int main() {
    int tanggal, bulan;

    cout << "MASUKKAN TANGGAL LAHIR = ";
    cin >> tanggal;

    cout << "MASUKKAN BULAN LAHIR   = ";
    cin >> bulan;

    switch (bulan) {
        case 1:
            if (tanggal >= 20) {
                cout << "Zodiak: Aquarius";
            } else {
                cout << "Zodiak: Capricorn";
            }
            break;
        case 2:
            if (tanggal >= 19) {
                cout << "Zodiak: Pisces";
            } else {
                cout << "Zodiak: Aquarius";
            }
            break;
        case 3:
            if (tanggal >= 21) {
                cout << "Zodiak: Aries";
            } else {
                cout << "Zodiak: Pisces";
            }
            break;
        case 4:
            if (tanggal >= 20) {
                cout << "Zodiak: Taurus";
            } else {
                cout << "Zodiak: Aries";
            }
            break;
        case 5:
            if (tanggal >= 21) {
                cout << "Zodiak: Gemini";
            } else {
                cout << "Zodiak: Taurus";
            }
            break;
        case 6:
            if (tanggal >= 21) {
                cout << "Zodiak: Cancer";
            } else {
                cout << "Zodiak: Gemini";
            }
            break;
        case 7:
            if (tanggal >= 23) {
                cout << "Zodiak: Leo";
            } else {
                cout << "Zodiak: Cancer";
            }
            break;
        case 8:
            if (tanggal >= 23) {
                cout << "Zodiak: Virgo";
            } else {
                cout << "Zodiak: Leo";
            }
            break;
        case 9:
            if (tanggal >= 23) {
                cout << "Zodiak: Libra";
            } else {
                cout << "Zodiak: Virgo";
            }
            break;
        case 10:
            if (tanggal >= 23) {
                cout << "Zodiak: Scorpio";
            } else {
                cout << "Zodiak: Libra";
            }
            break;
        case 11:
            if (tanggal >= 22) {
                cout << "Zodiak: Sagittarius";
            } else {
                cout << "Zodiak: Scorpio";
            }
            break;
        case 12:
            if (tanggal >= 22) {
                cout << "Zodiak: Capricorn";
            } else {
                cout << "Zodiak: Sagittarius";
            }
            break;
        default:
            cout << "Bulan tidak valid.";
    }

    return 0;
}
