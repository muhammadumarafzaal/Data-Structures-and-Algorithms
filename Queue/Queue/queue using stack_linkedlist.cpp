//#include <iostream>
//using namespace std;
//struct Student {
//    int rollno;
//    float cgpa;
//};
//struct Node {
//    Student data;
//    Node* next;
//};
//class QueueUsingStack {
//private:
//    Node* stack1;
//    Node* stack2;
//public:
//    QueueUsingStack() {
//        stack1 = nullptr;
//        stack2 = nullptr;
//    }
//    void push(Node*& stack, Student student) {
//        Node* newNode = new Node{ student, stack };
//        stack = newNode;
//    }
//    Student pop(Node*& stack) {
//        if (stack == nullptr) {
//            cout << "Stack is empty!" << endl;
//            return { -1, -1 }; // return an invalid student
//        }
//        Node* temp = stack;
//        stack = stack->next;
//        Student popped = temp->data;
//        delete temp; // free memory
//        return popped;
//    }
//    void enqueue(Student student) {
//        push(stack1, student);
//    }
//    Student dequeue() {
//        if (stack2 == nullptr) {
//            while (stack1 != nullptr) {
//                push(stack2, pop(stack1));
//            }
//        }
//        return pop(stack2);
//    }
//    bool isEmpty() {
//        return (stack1 == nullptr && stack2 == nullptr);
//    }
//};
//
//int main() {
//    QueueUsingStack queue;
//    queue.enqueue({ 1, 3.5 });
//    queue.enqueue({ 2, 3.8 });
//    Student s = queue.dequeue();
//    cout << "Dequeued: Roll No: " << s.rollno << ", CGPA: " << s.cgpa << endl;
//    return 0;
//}
