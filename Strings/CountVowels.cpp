#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="How are you doing today?";
    int vowels=0,consonents=0,spaces=0;
    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        } else if((ch >= 'a' && ch <= 'z') && (ch != ' ')) {
            consonents++;
        } else if(ch == ' ') {
            spaces++;
        }
    }
    cout<<"Vowels: "<<vowels<<", Consonents: "<<consonents<<", Words: "<<spaces+1<<endl;
    return 0;
}