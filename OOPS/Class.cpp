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
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 5;
    cout << "Area of rectangle: " << r1.area() << endl;
    cout << "Perimeter of rectangle: " << r1.perimeter() << endl;

    Rectangle r2;
    r2.length = 20;
    r2.breadth = 10;
    cout << "Area of second rectangle: " << r2.area() << endl;
    cout << "Perimeter of second rectangle: " << r2.perimeter() << endl;

    return 0;
}