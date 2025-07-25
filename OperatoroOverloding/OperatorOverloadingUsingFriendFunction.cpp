#include<iostream>
using namespace std;

class Complex {
    private:
    int real;
    int imag;
    public:
    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }
    friend Complex operator+(Complex c1,Complex c2);
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(10, 5), c2(2, 3);
    Complex c3 = c1 + c2; // Using overloaded + operator
    c3.display();
    return 0;
}
