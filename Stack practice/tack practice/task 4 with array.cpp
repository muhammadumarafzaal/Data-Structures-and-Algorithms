//#include <iostream>
//using namespace std;
//class stack {
//    int* stackarray;
//    int size;
//    int top;
//
//public:
//    stack(int si) {
//        stackarray = new int[si];
//        size = si;
//        top = -1; // Changed from 'top == -1' to 'top = -1'
//    }
//
//    ~stack() {
//        delete[] stackarray;
//    }
//
//    bool isfull() {
//        return (top == size - 1); // Fixed missing return statement in else branch
//    }
//
//    bool isempty() {
//        return (top == -1);
//    }
//
//    bool push(int data) {
//        if (isfull()) {
//            cout << "Cannot add the data: Stack is full" << endl;
//            return false;
//        }
//        top++;
//        stackarray[top] = data;
//        return true;
//    }
//
//    bool pop(int& returnvalue) { // Changed to pass returnvalue by reference
//        if (isempty()) {
//            cout << "Stack is empty" << endl;
//            return false;
//        }
//        else {
//            returnvalue = stackarray[top];
//            top--;
//            return true;
//        }
//    }
//
//    void print() {
//        if (isempty()) {
//            cout << "Stack is empty" << endl;
//            return;
//        }
//        cout << "Stack elements: ";
//        for (int i = top; i >= 0; i--) {
//            cout << stackarray[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    stack s(5); // Create a stack of size 5
//    s.push(10);
//    s.push(20);
//    s.push(30);
//
//    s.print(); // Print the current stack contents
//
//    int poppedValue;
//    if (s.pop(poppedValue)) {
//        cout << "Popped value: " << poppedValue << endl;
//    }
//
//    s.print(); // Print the stack after popping
//
//    return 0;
//}
