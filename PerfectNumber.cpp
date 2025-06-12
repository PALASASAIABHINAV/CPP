#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the n number:";
    cin>>n;
    for(int i=1;i<=n;i++){
       if(n%i==0){
         sum=sum+i;
       }
    }
    if(n*2==sum){
        cout<<n<<" is a perfect number.";
    }
    else{
        cout<<n<<" is not a perfect number";
    }
    return 0;
}