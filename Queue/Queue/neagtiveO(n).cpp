//#include <iostream>
//#define MAX_CHAR 256 // Assuming extended ASCII
//class Queue {
//private:
//    char* arr;      // Array to hold characters
//    int front;      // Front index
//    int rear;       // Rear index
//    int capacity;   // Queue capacity
//    int size;       // Current size of the queue
//public:
//    Queue(int cap) : capacity(cap), front(0), rear(0), size(0) {
//        arr = new char[capacity];
//    }
//    ~Queue() {
//        delete[] arr;
//    }
//    void enqueue(char c) {
//        if (size < capacity) {
//            arr[rear] = c;
//            rear = (rear + 1) % capacity;
//            size++;
//        }
//    }
//    void dequeue() {
//        if (size > 0) {
//            front = (front + 1) % capacity;
//            size--;
//        }
//    }
//    char getFront() {
//        if (size > 0) {
//            return arr[front];
//        }
//        return '\0'; // Return null character if queue is empty
//    }
//
//    bool isEmpty() {
//        return size == 0;
//    }
//};
//
//class FirstNonRepeatingChar {
//private:
//    int charCount[MAX_CHAR]; // Array to count occurrences of characters
//    Queue charQueue;         // Queue to maintain order of characters
//
//public:
//    FirstNonRepeatingChar() : charQueue(100) { // Initialize queue with capacity 100
//        for (int i = 0; i < MAX_CHAR; ++i) {
//            charCount[i] = 0; // Initialize counts to 0
//        }
//    }
//
//    void streamChar(char c) {
//        // Increment the character count
//        charCount[c]++;
//
//        // If this is the first occurrence, add it to the queue
//        if (charCount[c] == 1) {
//            charQueue.enqueue(c);
//        }
//
//        // Remove characters from the queue if they are repeating
//        while (!charQueue.isEmpty() && charCount[charQueue.getFront()] > 1) {
//            charQueue.dequeue();
//        }
//
//        // Output the first non-repeating character
//        if (!charQueue.isEmpty()) {
//            std::cout << "First non-repeating character: " << charQueue.getFront() << std::endl;
//        }
//        else {
//            std::cout << "No non-repeating character found" << std::endl;
//        }
//    }
//};
//
//int main() {
//    FirstNonRepeatingChar fnr;
//
//    const char* input = "geeksforgeeks";
//    for (int i = 0; input[i] != '\0'; i++) {
//        fnr.streamChar(input[i]);
//    }
//
//    return 0;
//}
