#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"Enter the first array matrix sizes: ";
    cin>>r1>>c1;
    int arr1[r1][c1];
    cout<<"Enter the elements: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    int r2,c2;
    cout<<"Enter the second array matrix sizes: ";
    cin>>r2>>c2;
    cout<<"Enter the elements: ";
    int arr2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
    int arr[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}