#include<iostream>
using namespace std;
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    swap(a,b);
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}