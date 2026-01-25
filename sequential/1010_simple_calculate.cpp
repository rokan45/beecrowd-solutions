#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int A,B,D,E;
 double C,F;
 cin>>A>>B>>C>>D>>E>>F;

 double value=(B*C)+(E*F);
 
 cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<value<<endl;
 
return 0;
}