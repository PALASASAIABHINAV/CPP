#include<iostream>
using namespace std;
int b = 10; // global variable
int main(){
    int a = 5; // local variable
    cout << "Value of a: " << a << endl;
    cout << "Value of global b: " << b << endl;
    return 0;
}