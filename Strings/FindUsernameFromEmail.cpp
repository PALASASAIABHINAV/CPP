#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="saiabhinav@gmail.com";
    string username="";
    for(int i=0;i<str.length();i++){
        if(str[i]=='@'){
            break;
        }
        username += str[i];
    }
    cout<<"Username: "<<username<<endl;
    return 0;
}