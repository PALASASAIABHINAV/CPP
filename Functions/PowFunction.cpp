#include<iostream>
using namespace std;

int powerful(int a, int b) {
    int po = 1;
    for (int i = 0; i < b; i++) {
        po *= a;
    }
    return po;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << powerful(a, b);
    return 0;
}
