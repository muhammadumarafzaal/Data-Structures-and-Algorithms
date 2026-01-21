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
//class CircularQueue {
//    Node* front; // Pointer to the front node
//    Node* rear;  // Pointer to the rear node
//
//public:
//    CircularQueue() : front(nullptr), rear(nullptr) {}
//
//    ~CircularQueue() {
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
//            front = rear = newNode;
//            rear->next = front; // Point rear to front to make it circular
//        }
//        else {
//            rear->next = newNode; // Link the new node to the last node
//            rear = newNode;       // Update the rear pointer
//            rear->next = front;   // Make it circular
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
//        if (front == rear) { // Only one element in the queue
//            delete front;
//            front = rear = nullptr; // Reset the queue
//        }
//        else {
//            Node* temp = front;
//            front = front->next; // Move front to the next node
//            rear->next = front;  // Update the rear to point to the new front
//            delete temp;         // Free memory
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
//        do {
//            cout << current->data << " ";
//            current = current->next;
//        } while (current != front);
//        cout << endl;
//    }
//};
//
//int main() {
//    CircularQueue q;
//    q.enqueue(5);
//    q.enqueue(10);
//    q.enqueue(15);
//    q.dequeue();
//    q.printQueue(); // Print the contents of the queue
//
//    return 0;
//}
