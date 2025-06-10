#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=12&&age<=50){
        cout<<"You are younger";
    }else if(age<12){
        cout<<"Your are the child";
    }else{
        cout<<"You are elder ";
    }

    return 0;
}