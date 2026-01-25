#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
 double R;
 const double pi=3.14159;
 cin>>R;

 double v= (4.0/3.0)*pi*pow(R,3);

 cout<<"VOLUME = "<<fixed<<setprecision(3)<<v<<endl;
 
return 0;
}