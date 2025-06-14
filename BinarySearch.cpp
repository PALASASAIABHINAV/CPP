#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of a array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the Key:";
    cin>>key;
    sort(arr,arr+n);
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key){
            cout<<"Key found at index "<<mid;
            return 0;
        }
        if(key>arr[mid]){
            l=mid+1;
        }
        if(key<arr[mid]){
            h=mid-1;
        }
    }
    cout<<"Key Not Found";
    return 0;
}