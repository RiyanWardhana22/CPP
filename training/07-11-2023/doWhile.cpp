#include <iostream>
using namespace std;

int main() {
  int i = 1;
  char jawab;
  do {
    cout << i << " ";
    i++;
    cout<<"Apakah Ingin Cetak Kembali, ketik y untuk Ya = "; cin>> jawab;
  }
  while (jawab== 'y' || jawab== 'Y');
  return 0;
}

