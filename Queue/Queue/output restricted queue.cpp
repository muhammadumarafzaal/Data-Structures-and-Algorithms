//#include <iostream>
//using namespace std;
//
//class OutputRestrictedQueue {
//    int* arr;
//    int front;
//    int rear;
//    int size;
//
//public:
//    OutputRestrictedQueue(int s = 100000) {
//        size = s;
//        arr = new int[size];
//        front = rear = -1;  // Initialize to -1 to indicate an empty queue
//    }
//
//    ~OutputRestrictedQueue() {
//        delete[] arr;  // Clean up memory
//    }
//
//    bool isFull() {
//        return (rear + 1) % size == front;  // Check if next position of rear is front
//    }
//
//    bool isEmpty() {
//        return front == -1;  // Check if queue is empty
//    }
//
//    void enqueueFront(int data) {
//        if (isFull()) {
//            cout << "Queue is full, cannot insert the data." << endl;
//        }
//        else {
//            if (isEmpty()) {
//                front = rear = 0;  // Initialize front and rear to 0 if queue is empty
//            }
//            else {
//                front = (front - 1 + size) % size;  // Move front to the previous position
//            }
//            arr[front] = data;
//            cout << "Data inserted at front: " << data << endl;
//        }
//    }
//
//    void enqueueRear(int data) {
//        if (isFull()) {
//            cout << "Queue is full, cannot insert the data." << endl;
//        }
//        else {
//            if (isEmpty()) {
//                front = rear = 0;  // Initialize front and rear to 0 if queue is empty
//            }
//            else {
//                rear = (rear + 1) % size;  // Move rear to the next position
//            }
//            arr[rear] = data;
//            cout << "Data inserted at rear: " << data << endl;
//        }
//    }
//
//    int dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return -1;  // Return -1 or some error value
//        }
//        else {
//            int ans = arr[front];
//            if (front == rear) {  // Queue has only one element
//                front = rear = -1;  // Reset the queue
//            }
//            else {
//                front = (front + 1) % size;  // Move front to the next position
//            }
//            return ans;
//        }
//    }
//
//    int getFront() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return -1;  // Return -1 or some error value
//        }
//        else {
//            return arr[front];
//        }
//    }
//
//    void printQueue() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//        }
//        else {
//            cout << "Queue contents: ";
//            int i = front;
//            while (true) {
//                cout << arr[i] << " ";
//                if (i == rear) break;  // Stop when we reach the rear
//                i = (i + 1) % size;  // Wrap around
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    OutputRestrictedQueue q;
//    q.enqueueRear(5);
//    q.enqueueRear(10);
//    q.enqueueFront(3);
//    cout << "Front element: " << q.getFront() << endl;  // Get front element
//    cout << "Removed from front: " << q.dequeue() << endl;  // Remove from front
//    q.printQueue();  // Print the contents of the queue
//
//    return 0;
//}
