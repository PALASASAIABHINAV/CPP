#include<iostream>
using namespace std;
template<class T>
T Max(T a,T b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a,b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int c=Max(a,b);
    cout << "Maximum is: " << c << endl;
    float d=Max(a+0.2f, b+0.5f);
    cout << "Maximum is: " << d << endl;
}