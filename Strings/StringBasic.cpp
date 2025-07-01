#include<string>
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"The string is: "<<str<<endl;
    cout<<"The length of the string is: "<<str.length()<<endl;
    cout<<"The Size of the string is: "<<str.size()<<endl;
    cout<<"The capacity of the string is: "<<str.capacity()<<endl;
    str.reserve(100);
    cout<<"The capacity of the string after reserving 100 is: "<<str.capacity()<<endl;
    cout<<"The max size of the string is: "<<str.max_size()<<endl;
    str.clear();
    if(str.empty()){
        cout<<"The string is empty after clearing it."<<endl;
    } else {
        cout<<"The string is not empty after clearing it."<<endl;
    }
    


}
