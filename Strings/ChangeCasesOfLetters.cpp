#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="sai abhinav";
    for(int i=0;i<str.length();i++){
        str[i]=toupper(str[i]);
    }
    cout<<"String in uppercase: "<<str<<endl;
    return 0;

}