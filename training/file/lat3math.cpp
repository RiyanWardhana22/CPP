#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int a, b, c, D;
    float x1, x2;
    cout<<"PROGRAM ALGORITMA AKAR-AKAR"<<endl;
    cout<<"Masukan nilai a : ";
    cin>>a;
    cout<<"Masukan nilai b : ";
    cin>>b;
    cout<<"Masukan nilai c : ";
    cin>>c;

    D=(b*b)-(4*a*c);

    if (D>0){
        x1 = (-b + sqrt(D)) / (2*a);
          x2 = (-b - sqrt(D)) / (2*a);
    }else if (D==0){
        x1 = (-b + sqrt(D)) / (2*a);
          x2 = x1;
    }else {
          cout<<"\nAkar Imajiner"<<endl;
         exit(0);
    }
    cout<<"X1 = "<<x1<<endl;
    cout<<"X2 = "<<x2<<endl;
}