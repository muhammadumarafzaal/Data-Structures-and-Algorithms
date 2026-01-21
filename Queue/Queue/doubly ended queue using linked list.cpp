//#include <iostream>
//using namespace std;
//
//// Node structure for doubly linked list
//struct Node {
//    int data;
//    Node* next;
//    Node* prev;
//
//    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
//};
//
//class Deque {
//    Node* front; // Pointer to the front node
//    Node* rear;  // Pointer to the rear node
//
//public:
//    Deque() : front(nullptr), rear(nullptr) {}
//
//    ~Deque() {
//        while (!isEmpty()) {
//            deleteFront(); // Clean up memory
//        }
//    }
//
//    bool isEmpty() {
//        return front == nullptr;
//    }
//
//    void insertFront(int data) {
//        Node* newNode = new Node(data);
//        if (isEmpty()) {
//            front = rear = newNode; // Queue was empty
//        }
//        else {
//            newNode->next = front; // Link new node to the front
//            front->prev = newNode; // Update the previous pointer of front
//            front = newNode;       // Move front pointer to the new node
//        }
//        cout << "Data inserted at front: " << data << endl;
//    }
//
//    void insertRear(int data) {
//        Node* newNode = new Node(data);
//        if (isEmpty()) {
//            front = rear = newNode; // Queue was empty
//        }
//        else {
//            newNode->prev = rear;   // Link new node to the rear
//            rear->next = newNode;    // Update the next pointer of rear
//            rear = newNode;          // Move rear pointer to the new node
//        }
//        cout << "Data inserted at rear: " << data << endl;
//    }
//
//    int deleteFront() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return -1; // Return -1 or some error value
//        }
//        int data = front->data;
//        Node* temp = front; // Temporary pointer to delete the front node
//        front = front->next; // Move front to the next node
//        if (front != nullptr) {
//            front->prev = nullptr; // Update previous pointer of the new front
//        }
//        else {
//            rear = nullptr; // If the deque is now empty, reset rear
//        }
//        delete temp; // Free memory
//        return data;
//    }
//
//    int deleteRear() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return -1; // Return -1 or some error value
//        }
//        int data = rear->data;
//        Node* temp = rear; // Temporary pointer to delete the rear node
//        rear = rear->prev; // Move rear to the previous node
//        if (rear != nullptr) {
//            rear->next = nullptr; // Update next pointer of the new rear
//        }
//        else {
//            front = nullptr; // If the deque is now empty, reset front
//        }
//        delete temp; // Free memory
//        return data;
//    }
//
//    int getFront() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return -1; // Return -1 or some error value
//        }
//        return front->data;
//    }
//
//    int getRear() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return -1; // Return -1 or some error value
//        }
//        return rear->data;
//    }
//
//    void printDeque() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return;
//        }
//        cout << "Deque contents: ";
//        Node* current = front;
//        while (current != nullptr) {
//            cout << current->data << " ";
//            current = current->next;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Deque dq;
//    dq.insertRear(10);
//    dq.insertFront(5);
//    dq.insertRear(15);
//    dq.insertFront(2);
//
//    dq.printDeque(); // Print the contents of the deque
//
//    dq.deleteFront();
//    dq.deleteRear();
//
//    dq.printDeque(); // Print the contents of the deque
//
//    return 0;
//}
