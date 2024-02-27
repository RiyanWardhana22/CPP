#include <iostream>
using namespace std;

int main() 
{
  int i=1,k=1;
  do 
  {
    int j=1;
    do
    {
       cout<<k<<" ";
       k=k+10;
       j++;
    } while (j<=10);   
    i++;
    k=i;
    cout<<endl;
  }
  while (i <= 10);
  cout<<endl;
}