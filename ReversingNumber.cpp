#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int r=0,m=0;
    while(n>0){
      r=n%10;
      n=n/10;
      m=(m*10)+r;
    }
    cout<<"After reversing thr number : "<<m;
    return 0;
}