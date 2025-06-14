#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter thr key: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"key found at the index of : "<<i;
            return 0;
        }
    }
    cout<<"Key Not found.";
    return 0;
}