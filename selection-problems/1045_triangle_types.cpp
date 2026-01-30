#include <bits/stdc++.h>
using namespace std;
int main() {
 double a,b,c;
 cin>>a>>b>>c;

 double side[]={a,b,c};

 sort(side,side+3,greater<double>());

 a=side[0];
 b=side[1];
 c=side[2];
 
 if(a>=b+c)
 {
    cout<<"NAO FORMA TRIANGULO"<<endl; 
 }
 else if(pow(a,2)==pow(b,2)+pow(c,2))
 {
    cout<<"TRIANGULO RETANGULO"<<endl;
 }
 else if(pow(a,2)>pow(b,2)+pow(c,2))
 {
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
 }
 else if(pow(a,2)<pow(b,2)+pow(c,2))
 {
    cout<<"TRIANGULO ACUTANGULO"<<endl;
 }
 
 if(a==b && b==c)
 {
    cout<<"TRIANGULO EQUILATERO"<<endl;
 }
 else if(a==b || a==c || b==c)
 {
    cout<<"TRIANGULO ISOSCELES"<<endl;
 }
return 0;
}