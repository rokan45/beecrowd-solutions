#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
 double A,B,C;
 cin>>A>>B>>C;

 const double pi=3.14159;
 double triangle=(A*C)/2;
 double circle= pi*pow(C,2);
 double trap=((A+B)/2)*C;
 double square=pow(B,2);
 double rectangle=A*B;

 cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<triangle<<endl;
  cout<<"CIRCULO: "<<fixed<<setprecision(3)<<circle<<endl;
   cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trap<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<square<<endl;
     cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rectangle<<endl;
 
return 0;
}