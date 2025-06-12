#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int o=n;
    int r=0,sum=0;
    while(n>0){
        r=n%10;
        n=n/10;
        sum+=(r*r*r);
    }
    if(sum==o){
        cout<<o<<" is the Amstrong number.";
    }else{
        cout<<o<<" is not a Amstrong number.";
    }
   return 0;
}