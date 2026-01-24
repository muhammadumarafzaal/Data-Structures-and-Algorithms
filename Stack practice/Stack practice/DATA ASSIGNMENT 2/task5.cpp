//#include <iostream>
//using namespace std;
//class Deque {
//    int front, rear;
//    int maxSize;
//    int* arr;
//public:
//    Deque() {
//        cout << "Enter the size of the deque: ";
//        cin >> maxSize;
//        arr = new int[maxSize];
//        front = rear = -1;
//    }
//    bool isEmpty() {
//        return front == -1;
//    }
//    bool isFull() {
//        return (rear + 1) % maxSize == front;
//    }
//    void pushBack(int value) {
//        if (isFull()) {
//            cout << "Deque overflow! Cannot push value." << endl;
//            return;
//        }
//        if (isEmpty()) {
//            front = rear = 0;
//            arr[rear] = value;
//        }
//        else {
//            rear = (rear + 1) % maxSize;
//            arr[rear] = value;
//        }
//        cout << "Value " << value << " pushed to the back." << endl;
//    }
//    void pushFront(int value) {
//        if (isFull()) {
//            cout << "Deque overflow! Cannot push value." << endl;
//            return;
//        }
//        if (isEmpty()) {
//            front = rear = 0;
//            arr[front] = value;
//        }
//        else {
//            front = (front - 1 + maxSize) % maxSize;
//            arr[front] = value;
//        }
//        cout << "Value " << value << " pushed to the front." << endl;
//    }
//    void popBack() {
//        if (isEmpty()) {
//            cout << "Cannot pop value from deque; it is empty." << endl;
//            return;
//        }
//        cout << "Value " << arr[rear] << " popped from the back." << endl;
//        if (front == rear) {
//            front = rear = -1; // Deque is now empty
//        }
//        else {
//            rear = (rear - 1 + maxSize) % maxSize;
//        }
//    }
//    void popFront() {
//        if (isEmpty()) {
//            cout << "Cannot pop value from deque; it is empty." << endl;
//            return;
//        }
//        cout << "Value " << arr[front] << " popped from the front." << endl;
//        if (front == rear) {
//            front = rear = -1; // Deque is now empty
//        }
//        else {
//            front = (front + 1) % maxSize;
//        }
//    }
//
//    ~Deque() {
//        delete[] arr;
//        arr = nullptr;
//    }
//};
//int main() {
//    Deque d;
//    d.pushFront(25);
//    d.pushFront(88);
//    d.pushBack(122);
//    d.pushBack(50);
//    d.popBack();
//    d.popFront();
//    d.popBack();
//    d.popFront();
//    d.popFront();
//    return 0;
//}
