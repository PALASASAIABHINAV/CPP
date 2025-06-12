#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the numbers";
    cin>>n>>m;
    while(m!=n){
        if(m>n){
            m=m-n;
        }
        if(n>m){
            n=n-m;
        }
    }
    
    cout<<"The GCD(greatest common division (or) Factor):"<<m;

    return 0;
}