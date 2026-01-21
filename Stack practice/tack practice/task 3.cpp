//#include <iostream>
//using namespace std;
//
//class stackArray {
//private:
//    int* arr;
//    int* reversedArray;
//    int top;
//    int size;
//
//public:
//    stackArray(int s) {
//        size = s;
//        arr = new int[size];
//        reversedArray = new int[size];
//        top = -1;
//    }
//
//    bool isFull() {
//        return (top == size - 1);
//    }
//
//    bool isEmpty() {
//        return (top == -1);
//    }
//
//    void push(int a) {
//        if (isFull())
//            cout << "Stack Overflow" << endl;
//        else {
//            top++;
//            arr[top] = a;
//            cout << a << " is pushed" << endl;
//        }
//    }
//
//    void pop() {
//        if (isEmpty())
//            cout << "Stack is empty" << endl;
//        else {
//            int x = arr[top];
//            cout << x << " is popped" << endl;
//            top--;
//        }
//    }
//
//    void reverse() {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//            return;
//        }
//
//        int i = 0;
//        while (!isEmpty()) {
//            reversedArray[i] = peek();
//            pop();
//            i++;
//        }
//        for (int j = 0; j < i; j++) {
//            push(reversedArray[j]);
//        }
//    }
//
//    int peek() {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//            return -1; // Return an invalid value if stack is empty
//        }
//        return arr[top];
//    }
//
//    ~stackArray() {
//        delete[] arr;
//        delete[] reversedArray; // Free the reversed array memory
//    }
//};
//
//class Node {
//public:
//    int data;
//    Node* next;
//    Node(int d) : data(d), next(nullptr) {}
//};
//
//class stackLL {
//private:
//    Node* top;
//
//public:
//    stackLL() : top(nullptr) {}
//
//    bool isEmpty() {
//        return top == nullptr;
//    }
//
//    void push(int data) {
//        Node* temp = new Node(data);
//        temp->next = top;
//        top = temp;
//        cout << top->data << " is pushed" << endl;
//    }
//
//    void pop() {
//        if (isEmpty())
//            cout << "Stack is empty" << endl;
//        else {
//            Node* temp = top;
//            cout << top->data << " is popped" << endl;
//            top = top->next;
//            delete temp;
//        }
//    }
//
//    int peek() {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//            return -1; // Return an invalid value if stack is empty
//        }
//        return top->data;
//    }
//
//    void reverse() {
//        if (isEmpty()) {
//            cout << "Stack is empty" << endl;
//            return;
//        }
//
//        // Create a temporary array to store the values
//        int* reversedArray = new int[100]; // Assume a maximum size
//        int i = 0;
//        while (!isEmpty()) {
//            reversedArray[i] = peek();
//            pop();
//            i++;
//        }
//        for (int j = 0; j < i; j++) {
//            push(reversedArray[j]);
//        }
//        delete[] reversedArray; // Free the temporary array memory
//    }
//};
//
//int main() {
//    cout << endl << "Array implementation" << endl;
//    stackArray a(5);
//    a.push(2);
//    cout << a.peek() << endl;
//    a.push(20);
//    cout << a.peek() << endl;
//    a.push(30);
//    cout << a.peek() << endl;
//    a.push(40);
//    cout << a.peek() << endl;
//    a.push(50);
//    cout << a.peek() << endl;
//    cout << "The reversed stack is" << endl;
//    a.reverse();
//    cout << "--------------------------" << endl << endl;
//
//    cout << "Linked List Implementation" << endl;
//    stackLL b;
//    b.push(2);
//    cout << b.peek() << endl;
//    b.push(30);
//    cout << b.peek() << endl;
//    b.push(14);
//    cout << b.peek() << endl;
//    b.push(5);
//    cout << b.peek() << endl;
//    cout << "The reversed linked list is" << endl;
//    b.reverse();
//
//    return 0;
//}
