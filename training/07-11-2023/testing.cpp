#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0))); // harus ada untuk generate random
    int i = 1, random;
    int countEven = 0, countOdd = 0; 
    do
    {
        random = 1 + rand() % 10; // generate random
        cout << random << " ";

        if (random % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }

        i++;
    } while (i <= 10);

    cout << endl;

    // Output hasil perhitungan
    cout << "Jumlah bilangan genap: " << countEven << endl;
    cout << "Jumlah bilangan ganjil: " << countOdd << endl;

    return 0;
}
