#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

srand((unsigned) time(NULL)); //harus ada untuk generate random
int i=1,random;
int ganjil=0, genap=0;
// Get a random number
do
{
    random = 1+rand() % 10; //generate random
    cout<<random<<" ";

    if (random % 2 == 0) {
            ganjil++;
        } else {
            genap++;
        }
    i++;
} while (i<=100);
cout<<endl;

cout<<"Jumlah Bilangan Genap = " << genap <<endl;
cout<<"Jumlah Bilangan Ganjil = " << ganjil <<endl;

}