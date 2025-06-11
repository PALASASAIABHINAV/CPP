#include<iostream>
using namespace std;
int main(){
    int choice;
    float x,y;
    cout<<"Enter the X and y values : ";
    cin>>x>>y;
    cout<<"Menu\n1:Addition\n2:Subtraction\n3:Multipcation\n4:Division\nEnter your choice : ";
    cin>>choice;
    switch(choice){
        case 1:cout<<"Answers is : "<<x+y;
               break;
        case 2:cout<<"Answer is : "<<x-y;
               break;
        case 3:cout<<"Answer is : "<<x*y;
               break;
        case 4:cout<<"Answer is : "<<x/y;
               break;
        default:cout<<"Invalid Input";
                break;
    }

    return 0;
}