#include<iostream>
using namespace std;

class Class{
    private:
    int rollNo;
    string name;
    int mathsMarks;
    int physicsMarks;
    int chemistryMarks;
    public:
    Class(int r, string n, int m, int p, int c) {
        rollNo = r;
        name = n;
        mathsMarks = m;
        physicsMarks = p;
        chemistryMarks = c;
    }
    int totalMarks() {
        return mathsMarks + physicsMarks + chemistryMarks;
    }

    string Grade() {
        float total = totalMarks()/3.0;
        if(total >= 90) {
            return "O";
        } else if(total >= 80) {
            return "A+";
        } else if(total >= 70) {
            return "A";
        } else if(total >= 60) {
            return "B+";
        } else if(total >= 50) {
            return "B";
        } else if(total >= 40) {
            return "C";
        } else {
            return "F"; // Fail
        }
    }

};

int main(){
    int rollNo;
    cout << "Enter Roll No: ";
    cin >> rollNo;
    string name;
    cout << "Enter Name: ";
    cin.ignore(); // Clear the newline character from the input buffer
    getline(cin, name);
    int mathsMarks, physicsMarks, chemistryMarks;
    cout << "Enter Maths Marks: ";
    cin >> mathsMarks;
    cout << "Enter Physics Marks: ";
    cin >> physicsMarks;
    cout << "Enter Chemistry Marks: ";
    cin >> chemistryMarks;

    Class student(rollNo, name, mathsMarks, physicsMarks, chemistryMarks);
    cout << "Total Marks: " << student.totalMarks() << endl;
    cout << "Grade: " << student.Grade() << endl;

    return 0;
}