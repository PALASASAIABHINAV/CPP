#include<iostream>
using namespace std;
int* fun(int a){
    int* ptr = new int;
    *ptr = a;
    cout << "Address of pointer: " << ptr << endl;
    return ptr;
}
int main(){

    int *ptr=fun(5);
    cout << "Address of pointer in main: " << ptr << endl;
   cout << "Value: " << *ptr << endl;

   return 0;
}