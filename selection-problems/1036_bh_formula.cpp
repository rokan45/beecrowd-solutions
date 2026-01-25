#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;
int main()
{
double a,b,c;
cin>>a>>b>>c;

double dis=(b*b)-4*a*c;



if(a==0 || dis<0){
    cout<<"Impossivel calcular"<<endl;
}
else{
double R1=(-b+sqrt(dis))/(2*a);
double R2=(-b-sqrt(dis))/(2*a);

cout<<fixed<<setprecision(5);
cout<<"R1 = "<<R1<<endl;
cout<<"R2 = "<<R2<<endl;

}


return 0;
}