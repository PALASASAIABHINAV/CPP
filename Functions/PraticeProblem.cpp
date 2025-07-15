#include<iostream>
using namespace std;

int linearsearch(int A[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(A[i] == key) {
            return i; // Return index if key is found
        }
    }
    return 0; // Return -1 if key is not found
}
int main(){
    int A[]= {1, 2, 3, 4, 5}; // Array declaration
    int key = 10; // Key to search
    int n=linearsearch(A, 5, key); // Function call
    if(n) {
        cout << "Element found at index: " << n << endl; // Element found
    } else {
        cout << "Element not found" << endl; // Element not found
    }
}