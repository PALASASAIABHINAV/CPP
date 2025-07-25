#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;
    Complex operator+(Complex const obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }
};
int main() {
    Complex c1(10, 5), c2(2, 3);
    Complex c3 = c1 + c2; // Using overloaded + operator
    cout << "Result of addition: " << c3.real << " + " << c3.imag << "i" << endl;
    return 0;
}