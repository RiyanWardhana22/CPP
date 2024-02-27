#include <iostream>
using namespace std;

int main()
{
    int i,hasil;
    i=1;hasil=0;
    do
    {
       hasil=hasil+i*i+i+6;
       i++;
    }while(i<=100);
     
    cout << hasil ;
    return 0; 
}