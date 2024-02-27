#include <iostream>
using namespace std;

int main() 
{
  int i,j; //deklarasi sekaligus inisiasi
  i=1;j=1;
  while (i <= 10) //pengaturan keadaan
  {
    cout << j << " ";  //cetak output kebawah
    i++; //langkah
    j=j+2;; //laju untuk j
  }
  cout<<endl;
  
}