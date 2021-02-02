#include<iostream>

using namespace std;
/*
 * @ int n1-> variável 1 para calcular o mdc(máximo divisor comum)
 * @ int n1-> variável 2 para calcular o mdc(máximo divisor comum)
 * 
 * A funão irá realizar o calculo do máximo divisor comum recursivamente
 * */
int mdc(int n1, int n2){
   if(n1%n2 == 0){
       return n2;
   }
   else return mdc(n2,n1%n2);
}

int main(){
    int n, f1, f2;
    cin>>n;
    while(n!=0){
        cin>>f1>>f2;
        cout<<mdc(f1,f2)<<endl;
        n--;
    }

}