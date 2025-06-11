#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n number:";
    cin>>n;
    int answer=0;
    for(int i=1;i<=n;i++){
        answer=answer+i;
    }
    cout<<"Answer after sum of all n numbers:"<<answer;
    return 0;
}