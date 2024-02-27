#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

srand((unsigned) time(NULL)); //harus ada untuk generate random
int i=1,random;
// Get a random number
do
{
    random = 1+rand() % 1000; //generate random
    cout<<random<<" ";
    i++;
} while (i<=100);
cout<<endl;


}