//#include <iostream>
//using namespace std;
//
//// Definition of a Node for the stack
//struct Node {
//    char data;
//    Node* next;
//
//    Node(char value) : data(value), next(nullptr) {}
//};
//
//// Definition of the Stack class
//class Stack {
//private:
//    Node* Top;
//
//public:
//    Stack() : Top(nullptr) {}
//
//    // Push a character onto the stack
//    bool push(char value) {
//        Node* newNode = new Node(value);
//        newNode->next = Top;
//        Top = newNode;
//        return true;
//    }
//
//    // Pop a character from the stack
//    char pop() {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return '\0'; // Return a null character if the stack is empty
//        }
//        char poppedValue = Top->data;
//        Node* temp = Top;
//        Top = Top->next;
//        delete temp;
//        return poppedValue;
//    }
//
//    // Check if the stack is empty
//    bool isEmpty() {
//        return Top == nullptr;
//    }
//
//    // Display the elements in the stack
//    void display() {
//        Node* current = Top;
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return;
//        }
//        cout << "Stack elements: ";
//        while (current != nullptr) {
//            cout << current->data << " ";
//            current = current->next;
//        }
//        cout << endl;
//    }
//
//    // Check if the given string is a palindrome
//    bool isPalindrome(const string& str) {
//        // Push all characters onto the stack
//        for (char ch : str) {
//            push(ch);
//        }
//
//        // Pop characters and check against the original string
//        for (char ch : str) {
//            if (pop() != ch) {
//                return false; // Not a palindrome
//            }
//        }
//        return true; // It's a palindrome
//    }
//
//    ~Stack() {
//        while (!isEmpty()) {
//            pop(); // Clear the stack in the destructor
//        }
//    }
//};
//
//// Main function to demonstrate the Stack functionality
//int main() {
//    Stack stack;
//    string input;
//
//    cout << "Enter a string to check if it is a palindrome: ";
//    cin >> input;
//
//    if (stack.isPalindrome(input)) {
//        cout << "\"" << input << "\" is a palindrome." << endl;
//    }
//    else {
//        cout << "\"" << input << "\" is not a palindrome." << endl;
//    }
//
//    return 0;
//}
