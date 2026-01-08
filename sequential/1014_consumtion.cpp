#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int x;
 double y;
 cin>>x>>y;

 double average_path= x/y;
 
 cout<<fixed<<setprecision(3)<<average_path<<" km/l"<<endl;
return 0;
}