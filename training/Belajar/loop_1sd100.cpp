#include <iostream>
using namespace std;

int main()
{
            int i,j,k;
            k=1;
            for(i = 1; i <= 10; i++)
            {
                        k=i;
                        for(j = 1; j <=10; j++)
                        {
                                    cout<<k<<" ";
                                    k=k+10;
                        }
                        cout<<endl;
            }
            cout<<endl;
}