//#include <iostream>
//using namespace std;
//class Stack {
//private:
//    int arr[10]; // Array to store stack elements
//    int top;     // Index of the top element
//public:
//    Stack() {
//        top = -1; // Initialize top to -1 indicating the stack is empty
//    }
//
//    bool isEmpty() {
//        return (top == -1); // Returns true if the stack is empty
//    }
//
//    bool isFull() {
//        return (top == 9); // Returns true if the stack is full
//    }
//
//    void push(int x) {
//        if (isFull()) {
//            cout << "Stack is full" << endl; // Handle stack overflow
//        }
//        else {
//            top++;
//            arr[top] = x; // Insert element
//            cout << "Inserted Successfully: " << x << endl;
//        }
//    }
//
//    void Pop(int& x) {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl; // Handle stack underflow
//        }
//        else {
//            x = arr[top]; // Retrieve the top element
//            top--; // Remove the top element
//            cout << "Pop successfully done. Popped element: " << x << endl;
//        }
//    }
//
//    void peek() {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl; // Handle empty stack
//        }
//        else {
//            cout << "Top element is: " << arr[top] << endl; // Display the top element
//        }
//    }
//};
//
//int main() {
//    Stack s;
//    int choice, value;
//
//    while (true) {
//        cout << "\nMenu:" << endl;
//        cout << "1. Push" << endl;
//        cout << "2. Pop" << endl;
//        cout << "3. Peek" << endl;
//        cout << "4. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value to push: ";
//            cin >> value;
//            s.push(value);
//            break;
//        case 2:
//            s.Pop(value);
//            break;
//        case 3:
//            s.peek();
//            break;
//        case 4:
//            cout << "Exiting..." << endl;
//            return 0;
//        default:
//            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
