#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 float number,hours;
 float salary;
 cin>>number>>hours>>salary;

 double total_salary=(salary*hours);
 cout<<"NUMBER = "<<number<<endl;
 cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<total_salary<<endl;
 
return 0;
}