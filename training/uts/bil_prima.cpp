#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
srand((unsigned) time(NULL)); //harus ada untuk generate random
int i=1,random,prima=0,hasil;
// Get a random number
do
{
    random = 1+rand() % 1000; //generate random
    cout<<random<<" ";
    hasil=random % 2;
    if(hasil==0)
    {
        prima++;
    }
    i++;
} while (i<=100);
cout<<endl;
cout<<"Jumlah Bilangan Prima = "<<prima<<endl;
cout<<endl;
return 0;
}