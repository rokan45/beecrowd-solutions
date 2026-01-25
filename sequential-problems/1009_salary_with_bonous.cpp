#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    string name;
    double s,sale;
    cin>>name>>s>>sale;

    double salary= s+(.15*sale);

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<salary<<endl;
 
 
return 0;
}