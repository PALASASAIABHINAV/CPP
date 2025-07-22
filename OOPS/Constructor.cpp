#include<iostream>
using namespace std;
class Rectangle{
   private:
    int length;
    int breadth;
   public:
    Rectangle(int l=0, int b=0){
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
    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    int getLength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }

};

int main(){
    Rectangle r1(10, 5);
    cout << "Length: " << r1.getLength() << endl;
    cout << "Breadth: " << r1.getBreadth() << endl;
    Rectangle r2(r1);
    cout << "Copied Rectangle Length: " << r2.getLength() << endl;
    cout << "Copied Rectangle Breadth: " << r2.getBreadth() << endl;
    return 0;

}