#include <iostream>
using namespace std;
int main() 
{
  int i,j,k; //deklarasi i
  k=1;
  for (i = 5; i >= 1; i--) //syarat dan mengatur perulangan
  {
    k=1;
    for (j=1;j<=i;j++)
    {
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
  }
  cout<<endl;
}
