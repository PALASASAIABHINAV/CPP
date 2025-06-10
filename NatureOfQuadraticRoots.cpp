#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,discriminant,root1,root2;
    cout<<"Enter the a,b,c";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    if(discriminant==0){
        root1=-b/(2*a);
        cout<<"Equal roots "<<root1;

    }
    else{
        if(discriminant>0){
            root1=(-b+sqrt(discriminant))/(2*a);
            root2=(-b-sqrt(discriminant))/(2*a);
            cout<<"The roots ate un equal "<<root1<<" "<<root2;
        }else{
            cout<<"imaginary";
        }
    }
}