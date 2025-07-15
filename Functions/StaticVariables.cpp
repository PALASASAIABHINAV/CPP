#include<iostream>
using namespace std;
void displayStaticVariable() {
    static int count = 0; // static variable
    count++;
    cout << "Static variable count: " << count << endl;
}
int main() {
    displayStaticVariable(); // Call 1
    displayStaticVariable(); // Call 2
    displayStaticVariable(); // Call 3
    return 0;
}