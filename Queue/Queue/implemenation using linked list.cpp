//#include <iostream>
//using namespace std;
//
//// Node structure for linked list
//struct Node {
//    int data;
//    Node* next;
//
//    Node(int value) : data(value), next(nullptr) {}
//};
//
//class Queue {
//    Node* front; // Pointer to the front node
//    Node* rear;  // Pointer to the rear node
//
//public:
//    Queue() : front(nullptr), rear(nullptr) {}
//
//    ~Queue() {
//        while (!isEmpty()) {
//            dequeue();
//        }
//    }
//
//    bool isEmpty() {
//        return front == nullptr;
//    }
//
//    void enqueue(int data) {
//        Node* newNode = new Node(data);
//        if (isEmpty()) {
//            front = rear = newNode; // Queue was empty
//        }
//        else {
//            rear->next = newNode; // Link new node at the end
//            rear = newNode;       // Update the rear pointer
//        }
//        cout << "Data inserted: " << data << endl;
//    }
//
//    int dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return -1; // Return -1 or some error value
//        }
//        int data = front->data;
//        Node* temp = front;      // Temporary pointer to delete the front node
//        front = front->next;     // Move front to the next node
//        delete temp;             // Free memory
//        if (front == nullptr) {  // If the queue is now empty, reset rear
//            rear = nullptr;
//        }
//        return data;
//    }
//
//    int getFront() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return -1; // Return -1 or some error value
//        }
//        return front->data;
//    }
//
//    void printQueue() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return;
//        }
//        cout << "Queue contents: ";
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
//    Queue q;
//    q.enqueue(5);
//    q.enqueue(10);
//    q.enqueue(15);
//    q.dequeue();
//    q.printQueue(); // Print the contents of the queue
//
//    return 0;
//}
