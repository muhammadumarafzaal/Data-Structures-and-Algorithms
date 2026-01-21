//#include <iostream>
//#include <queue>
//using namespace std;
//struct Student {
//    int rollno;
//    float cgpa;
//};
//struct Node {
//    Student data;
//    Node* next;
//};
//class StackUsingQueue {
//private:
//    queue<Node*> q1, q2;
//
//public:
//    void push(Student student) {
//        Node* newNode = new Node{ student, nullptr };
//        q1.push(newNode);
//    }
//    Student pop() {
//        if (q1.empty()) {
//            cout << "Stack is empty!" << endl;
//            return { -1, -1 }; // return an invalid student
//        }
//        while (q1.size() > 1) {
//            q2.push(q1.front());
//            q1.pop();
//        }
//        Node* poppedNode = q1.front();
//        q1.pop();
//        Student popped = poppedNode->data;
//        delete poppedNode; // free memory
//
//        swap(q1, q2);
//        return popped;
//    }
//    bool isEmpty() {
//        return q1.empty();
//    }
//};
//int main() {
//    StackUsingQueue stack;
//    stack.push({ 1, 3.5 });
//    stack.push({ 2, 3.0 });
//    Student s = stack.pop();
//    cout << "Popped: Roll No: " << s.rollno << ", CGPA: " << s.cgpa << endl;
//    return 0;
//}
