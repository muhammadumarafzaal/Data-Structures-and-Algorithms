//#include <iostream>
//using namespace std;
//class Queue {
//    int* arr;
//    int front;
//    int rear;
//    int size;
//
//public:
//    Queue() {
//        size = 100000;
//        arr = new int[size];
//        front = rear = -1;
//    }
//
//    ~Queue() {
//        delete[] arr;  // Clean up memory
//    }
//
//    bool isFull() {
//        return rear == size - 1;
//    }
//
//    bool isEmpty() {
//        return front == -1; // Adjusted to check if front is -1
//    }
//
//    void enqueue(int data) {
//        if (isFull()) {
//            cout << "Queue is full, cannot insert the data." << endl;
//            return; // Early return if the queue is full
//        }
//        if (isEmpty()) {
//            front = 0; // Initialize front when first element is added
//        }
//        rear++; // Increment rear
//        arr[rear] = data; // Insert data
//        cout << "Data inserted: " << data << endl;
//    }
//
//    int dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return -1;  // Return -1 or some error value
//        }
//
//        int ans = arr[front];
//        arr[front] = -1;  // Optional: clear the value
//        if (front == rear) {
//            // Queue is empty after dequeue
//            front = rear = -1;
//        }
//        else {
//            front++; // Move front pointer to the next element
//        }
//        return ans;
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
//            return;
//        }
//        cout << "Queue contents: ";
//        for (int i = front; i <= rear; i++) { // Changed from < to <=
//            cout << arr[i] << " ";
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
//    q.printQueue();  // Print the contents of the queue
//
//    return 0;
//}
//  