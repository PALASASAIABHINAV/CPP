#include<iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
int sum(int a, int b, int c) {
    return a + b + c;
}
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    int c=sum(a,b);
    cout<<"Sum is Int: "<<c<<endl;
    int d;
    d=sum(a,b,5);
    cout<<"Sum is Int with third parameter: "<<d<<endl;

    return 0;
}