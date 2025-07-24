#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength(){
        return length;
    };
    int getBreadth(){
        return breadth;
    };
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();//declaration of destructor
};

Rectangle::Rectangle() {
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b) {
    if(l >= 0) {
        length = l;
    } else {
        length = 0;
    }
    if(b >= 0) {
        breadth = b;
    } else {
        breadth = 0;
    }
}

Rectangle::Rectangle(Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l) {
    if(l >= 0) {
        length = l;
    } else {
        length = 0;
    }
}

void Rectangle::setBreadth(int b) {
    if(b >= 0) {
        breadth = b;
    } else {
        breadth = 0;
    }
}

int Rectangle::area() {
    return length * breadth;
}

int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

bool Rectangle::isSquare() {
    return length == breadth;
}
Rectangle::~Rectangle() {
    // Destructor logic if needed
    cout << "Rectangle object destroyed." << endl;
}


int main() {
    Rectangle r1(10, 5);
    cout << "Length: " << r1.getLength() << endl;
    cout << "Breadth: " << r1.getBreadth() << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "Is Square: " << (r1.isSquare() ? "Yes" : "No") << endl;

    Rectangle r2(r1);
    cout << "Copied Rectangle Length: " << r2.getLength() << endl;
    cout << "Copied Rectangle Breadth: " << r2.getBreadth() << endl;

    return 0;
}
