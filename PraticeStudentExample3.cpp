#include<iostream>
using namespace std;
int main(){
    float amount,finalAmount;
    cout<<"Enter the your amount:";
    cin>>amount;
    if(amount>=500){
        finalAmount=amount-amount*0.20;
    }else if(amount>=100){
        finalAmount=amount-amount*0.10;

    }else{
        finalAmount=amount;
    }
    cout<<"Final Price : "<<finalAmount;
    return 0;
}