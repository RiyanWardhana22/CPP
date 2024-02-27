#include <iostream>
#include <time.h>
using namespace std;

int main()
{
            srand((unsigned) time(0));
            int x[10], i = 1;

            do{
                        x[i] = rand() % 1000;
                        cout<< x[i] <<endl;
                        i++;
            }while (i<=10);
            {
                        cout<<"HASIL DARI X[7] ADALAH = " << x[7];
            }

            return 0;
}