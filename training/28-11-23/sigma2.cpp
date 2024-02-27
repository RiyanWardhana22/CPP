#include<iostream>
using namespace std;

int main()
{
    int t,hasil;
    t=1;hasil=0;
    do
    {
      hasil=hasil+t*3*t+4*t;
      t++;

    }while (t<=4);
     cout << hasil;

    return 0;
}