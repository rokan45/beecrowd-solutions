#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
 int a,b,c;
 cin>>a>>b>>c;
  int major=max(b,c);
  int major_2 =max(major,a);


 int maior=(major_2+major+abs(major_2-major))/2;

 cout<<maior<<" eh o maior"<<endl;
 
return 0;
}