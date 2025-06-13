#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int bigger=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>bigger){
        bigger=arr[i];
       }
    }
    cout<<bigger;
    return 0;
}