#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the Number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>2){
        cout<<n<<" is not a prime number.";
    }else{
        cout<<n<<" is a prime number.";
    }
    return 0;
}