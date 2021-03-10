#include <iostream>
using namespace std;
int main(){
    int t,a,b,c,d,e,cont=0;
    cin>>t>>a>>b>>c>>d>>e;
    if(t==a) cont +=1;
    if(t==b) cont +=1;
    if(t==c) cont +=1;
    if(t==d) cont +=1;
    if(t==e) cont +=1;
    cout<<cont<<endl;
}