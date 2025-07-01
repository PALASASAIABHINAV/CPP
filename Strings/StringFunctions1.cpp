#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Hello";
    s.append(" Bye");
    cout<<s<<endl;
    s.insert(5, " World");
    cout<<s<<endl;
    s.erase();
    s.push_back('!');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    string s2="Abhinav";
    s.swap(s2);
    cout<<"This is a first s : "<<s<<endl;
    cout<<"This is a second s2 : "<<s2<<endl;
    return 0;
}