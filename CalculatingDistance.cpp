#include<iostream>
using namespace std;
int main(){
    int v,u,a;
    float distance;
    cout<<"Enter the Initial velocity:";
    cin>>v;
    cout<<"Final velocity:";
    cin>>u;
    cout<<"Acceleration:";
    cin>>a;
    distance=(v*v-u*u)/(2*a);
    cout<<"The Distance is: "<<distance;
    return 0; 
}