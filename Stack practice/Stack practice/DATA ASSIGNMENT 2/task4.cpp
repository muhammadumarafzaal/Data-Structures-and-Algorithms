#include <iostream>
#include <string>
using namespace std;
template<typename T>
class CinemaQueue {
    int size;
    int front, rear;
    T* queue;
public:
    CinemaQueue(int size = 0) : size(size), front(-1), rear(-1) {
        queue = new T[size];
    }

    ~CinemaQueue() {
        delete[] queue;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void Enqueue(T data) {
        if (isFull()) {
            cout << "Full!" << endl;
        }
        else {
            if (isEmpty()) {
                front = rear = 0;
            }
            else {
                rear = (rear + 1) % size;
            }
            queue[rear] = data;
        }
    }

    void Dequeue() {
        if (isEmpty()) {
            cout << "Empty!" << endl;
        }
        else {
            if (front == rear) {
                front = rear = -1;
            }
            else {
                front = (front + 1) % size;
            }
        }
    }

    T getTop() {
        if (isEmpty()) {
            cout << "Empty" << endl;
            return T();
        }
        return queue[front];
    }
};

template<typename T>
void Input(CinemaQueue<T>* queue, int queuesize, int persons) {
    string name;

    for (int i = 0; i < queuesize; i++) {
        cout << "Filling queue " << (i + 1) << " with " << persons << " persons:" << endl;
        for (int j = 0; j < persons; j++) {
            cout << "Enter the name of person " << j + 1 << ": ";
            cin >> name;
            queue[i].Enqueue(name);
        }
    }
    cout << endl << "------------------------------" << endl;
}

template<typename T>
void ProcessQueues(CinemaQueue<T>* queue, int queueSize) {
    int time = 0;
    while (!queue[0].isEmpty()) {
        cout << "The member at the front is " << queue[0].getTop() << endl;
        queue[0].Dequeue();
        int i = 0;
        while (!queue[i + 1].isEmpty() && (i + 1 < queueSize)) {
            cout << "I moved queue member " << "(" << i + 1 << ") to queue " << i << endl;
            queue[i].Enqueue(queue[i + 1].getTop());
            queue[i + 1].Dequeue();
            i++;
        }
        time += 2;
    }

    cout << "The total time taken by ticket collectors to process members is " << time << endl;
    cout << "------------------------------------" << endl;
}

int main() {
    int noofqueue;
    cout << "Enter the number of queues: ";
    cin >> noofqueue;
    while (noofqueue < 0) {
        cout << "Enter the number of queues: ";
        cin >> noofqueue;
    }
    cout << noofqueue << " queues are created." << endl;

    CinemaQueue<string>* ptr = new CinemaQueue<string>[noofqueue];

    int numofperson;
    cout << "Enter number of persons in each queue: ";
    cin >> numofperson;
    while (numofperson < 10) {
        cout << "Enter number of persons in each queue: ";
        cin >> numofperson;
    }

    for (int i = 0; i < noofqueue; i++) {
        ptr[i] = CinemaQueue<string>(numofperson);
    }

    Input(ptr, noofqueue, numofperson);
    ProcessQueues(ptr, noofqueue);

    delete[] ptr;
    ptr = nullptr;

    return 0;
}
