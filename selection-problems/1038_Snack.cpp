#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
int y;
double total;
cin>>x>>y;

if(x==1){
  total=4.00*y;
  cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
}
 
else if(x==2){
  total=4.50*y;
  cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
}

else if(x==3){
  total=5.00*y;
  cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
}

else if(x==4){
  total=2.00*y;
  cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
}

else if(x==5){
  total=1.50*y;
  cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;
}
 
 
return 0;
}