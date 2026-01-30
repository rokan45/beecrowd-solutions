#include <bits/stdc++.h>
using namespace std;
int main() {
 float a,b,c;
 cin>>a>>b>>c;

 if(a+b>c && a+c>b && b+c>a )
 {
    float perimeter = a+b+c;
    cout<<fixed<<setprecision(1)<<"Perimetro = "<<perimeter<<endl;
 }
 else{
    double area =0.5*(a+b)*c;
    cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
 }
 
 
return 0;
}