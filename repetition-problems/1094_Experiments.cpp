#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int total=0;
    int amount=0;
    int rabbit=0,rat=0,frog=0;

    char type;

    for(int i=0; i<n; i++){
        cin>>amount>>type;

        total+=amount;

        if(type=='C'){
            rabbit+=amount;
        }
        else if(type=='R'){
            rat+=amount;
        }
        else if(type=='S'){
            frog+=amount;
        }

    }



    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<rabbit<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;


    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<((rabbit*100.0)/total)<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<((rat*100.0)/total)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<((frog*100.0)/total)<<" %"<<endl;
return 0;
}