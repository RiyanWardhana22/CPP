#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

srand((unsigned) time(NULL)); //harus ada untuk generate random
int i=1,random, total=0;
float rataan;
// Get a random number
do
{
    random = 1+rand() % 1000; //generate random
    cout<<random<<" ";

    total += random;
    rataan = total * 1.0/100;
    i++;
} while (i<=100);
cout<<endl;
cout<< "Total = " <<total<<endl;
cout<< "Rata - Rata = " <<rataan<<endl;

}