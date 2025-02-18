#include<iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int n) {
        arr = new int[n]; // Correctly allocate an array of size n
        size = n;
        top1 = -1;
        top2 = size;
    }

    void push1(int val) {
        if (top2 - top1 == 1) {
            cout << "stack overflow" << endl;
            return; // Added return to prevent further execution
        }
        top1++;
        arr[top1] = val;
    }

    void push2(int val) {
        if (top2 - top1 == 1) {
            cout << "stack overflow" << endl;
            return; // Added return to prevent further execution
        }
        top2--;
        arr[top2] = val;
    }

    void pop1() {
        if (top1 == -1) {
            cout << "stack underflow" << endl;
            return; // Added return to prevent further execution
        }
        top1--;
    }

    void pop2() {
        if (top2 == size) {
            cout << "stack underflow" << endl;
            return; // Added return to prevent further execution
        }
        top2++;
    }

    void print() {
        cout << "top1: " << top1 << endl;
        cout << "top2: " << top2 << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Stack() { // Destructor to free allocated memory
        delete[] arr;
    }
};

int main() {
    Stack s(5);
    s.push1(10);
    s.push2(90);
    s.print();
    
    // Testing underflow and overflow
    s.pop1();
    s.pop2();
    s.pop1(); // should show underflow
    s.push1(20);
    s.push2(30);
    s.print();

    return 0;
}

