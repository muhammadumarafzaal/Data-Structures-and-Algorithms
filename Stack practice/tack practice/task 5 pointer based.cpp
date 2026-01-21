//#include <iostream>
//using namespace std;
//class node {
//public:
//    node* next;
//    int data;
//
//    node(int d) : data(d), next(nullptr) {} // Constructor for easier node creation
//};
//class stack {
//    node* top;
//public:
//    stack() {
//        top = nullptr; // Fixed initialization
//    }
//
//    ~stack() {
//        makenull();
//    }
//    void makenull() {
//        int x;
//        while (pop(x)); // Clear the stack
//    }
//
//    bool isEmpty() {
//        return (top == nullptr);
//    }
//
//    void push(int da) {
//        node* newptr = new node(da); // Use the constructor
//        newptr->next = top;
//        top = newptr;
//    }
//
//    bool pop(int& returnvalue) { // Pass returnvalue by reference
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return false;
//        }
//        returnvalue = top->data; // Set the return value
//        node* tempptr = top; // Temporary pointer to delete the node
//        top = top->next; // Move top pointer
//        delete tempptr; // Free memory
//        return true;
//    }
//
//    void print() {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return;
//        }
//        node* current = top;
//        cout << "Stack elements: ";
//        while (current != nullptr) {
//            cout << current->data << " ";
//            current = current->next; // Move to the next node
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    stack s; // Create a stack
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
