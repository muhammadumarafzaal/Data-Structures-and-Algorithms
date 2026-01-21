//#include <iostream>
//using namespace std;
//
//class Deque {
//    int* arr;
//    int front;
//    int rear;
//    int size;
//
//public:
//    Deque(int s = 100000) {
//        size = s;
//        arr = new int[size];
//        front = rear = -1;  // Initialize to -1 to indicate an empty deque
//    }
//
//    ~Deque() {
//        delete[] arr;  // Clean up memory
//    }
//
//    bool isFull() {
//        return (rear + 1) % size == front;  // Check if next position of rear is front
//    }
//
//    bool isEmpty() {
//        return front == -1;  // Check if deque is empty
//    }
//
//    void insertFront(int data) {
//        if (isFull()) {
//            cout << "Deque is full, cannot insert the data at front." << endl;
//            return;
//        }
//        if (isEmpty()) {
//            front = rear = 0;  // Initialize front and rear to 0 if deque is empty
//        }
//        else {
//            front = (front - 1 + size) % size;  // Move front to the previous position
//        }
//        arr[front] = data;
//        cout << "Inserted at front: " << data << endl;
//    }
//
//    void insertRear(int data) {
//        if (isFull()) {
//            cout << "Deque is full, cannot insert the data at rear." << endl;
//            return;
//        }
//        if (isEmpty()) {
//            front = rear = 0;  // Initialize front and rear to 0 if deque is empty
//        }
//        else {
//            rear = (rear + 1) % size;  // Move rear to the next position
//        }
//        arr[rear] = data;
//        cout << "Inserted at rear: " << data << endl;
//    }
//
//    int deleteFront() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return -1;  // Return -1 or some error value
//        }
//        int ans = arr[front];
//        if (front == rear) {  // Deque has only one element
//            front = rear = -1;  // Reset the deque
//        }
//        else {
//            front = (front + 1) % size;  // Move front to the next position
//        }
//        return ans;
//    }
//
//    int deleteRear() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return -1;  // Return -1 or some error value
//        }
//        int ans = arr[rear];
//        if (front == rear) {  // Deque has only one element
//            front = rear = -1;  // Reset the deque
//        }
//        else {
//            rear = (rear - 1 + size) % size;  // Move rear to the previous position
//        }
//        return ans;
//    }
//
//    int getFront() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return -1;  // Return -1 or some error value
//        }
//        return arr[front];
//    }
//
//    int getRear() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return -1;  // Return -1 or some error value
//        }
//        return arr[rear];
//    }
//
//    void printDeque() {
//        if (isEmpty()) {
//            cout << "Deque is empty." << endl;
//            return;
//        }
//        cout << "Deque contents: ";
//        int i = front;
//        while (true) {
//            cout << arr[i] << " ";
//            if (i == rear) break;  // Stop when we reach the rear
//            i = (i + 1) % size;  // Wrap around
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Deque dq;
//    dq.insertRear(5);
//    dq.insertRear(10);
//    dq.insertFront(3);
//    cout << "Front element: " << dq.getFront() << endl;  // Get front element
//    cout << "Rear element: " << dq.getRear() << endl;    // Get rear element
//    cout << "Removed from front: " << dq.deleteFront() << endl;  // Remove from front
//    cout << "Removed from rear: " << dq.deleteRear() << endl;    // Remove from rear
//    dq.printDeque();  // Print the contents of the deque
//
//    return 0;
//}
