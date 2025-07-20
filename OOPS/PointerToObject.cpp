#include<iostream>
using namespace std;

class Rectangle {
    public:
    int length;
    int breadth;
    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle *r1 = new Rectangle; // Pointer to object
    r1->length = 10; // Accessing members using pointer
    r1->breadth = 5;
    cout << "Area of rectangle: " << r1->area() << endl;
    cout << "Perimeter of rectangle: " << r1->perimeter() << endl;
    return 0;
}