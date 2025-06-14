#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int length=n,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int average=sum/length;
    cout<<"This is the Average of Array : "<<average;
    return 0;
}