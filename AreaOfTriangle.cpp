#include<iostream>
using namespace std;

int main(){
    int base,height;
    float area;
    cout<<"Enter the Base of the Triangle(in meters):";
    cin>>base;
    cout<<"Enter the Height of the Triangle(in meters):";
    cin>>height;
    area=(float)((base*height)/2);
    cout<<"The Final Area of the Triangle(in meters square): "<<area;

    return 0;
}