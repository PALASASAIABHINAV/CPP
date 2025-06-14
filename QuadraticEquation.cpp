#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,root1,root2;
    cout<<"Enter the a,b,c(in equation ax^2+bx+c):";
    cin>>a>>b>>c;
    root1=(-b+sqrt((b*b)-4*a*c))/(2*a);
    root2=(-b-sqrt((b*b)-4*a*c))/(2*a);
    cout<<"The roots  \n root1: "<<root1<<"\n root2: "<<root2;
    return 0;
}
