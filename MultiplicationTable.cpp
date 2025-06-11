#include<iostream>
using namespace std;
int main(){
    int table;
    cout<<"Enter the table you want (number only): ";
    cin>>table;
    for(int i=1;i<=10;i++){
       cout<<table<<" x "<<i<<" = "<<table*i<<"\n";
    }
    return 0;
}