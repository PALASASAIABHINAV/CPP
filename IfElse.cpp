#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the X amd Y values:";
    cin>>x>>y;
    if(x>y){
        cout<<x<<" (x) is biger than (y) "<<y;
    }
    else{
        cout<<y<<" (y) is biger then (x) "<<x;
    }
    return 0;
}