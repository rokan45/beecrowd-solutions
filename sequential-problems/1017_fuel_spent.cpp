#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int distance=x*y;
    double fuel=distance/12.0;

    cout<<fixed<<setprecision(3)<<fuel<<endl;

    return 0;
}