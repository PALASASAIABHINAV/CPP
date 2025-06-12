#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int r;
    while(n>0){
        r=n%10;
        n=n/10;
        cout<<r;
    }
    return 0;
}