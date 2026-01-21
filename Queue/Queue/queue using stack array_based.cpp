//#include <iostream>
//using namespace std;
//struct Student {
//    int rollno;
//    float cgpa;
//};
//
//class QueueUsingStack {
//private:
//    Student stack1[100];
//    Student stack2[100];
//    int top1, top2;
//public:
//    QueueUsingStack() {
//        top1 = -1;
//        top2 = -1;
//    }
//    void enqueue(Student student) {
//        stack1[++top1] = student;
//    }
//    Student dequeue() {
//        if (top2 == -1) {
//            if (top1 == -1) {
//                cout << "Queue is empty!" << endl;
//                return { -1, -1 };
//            }
//            while (top1 != -1) {
//                stack2[++top2] = stack1[top1--];
//            }
//        }
//
//        return stack2[top2--];
//    }
//    bool isEmpty() {
//        return (top1 == -1 && top2 == -1);
//    }
//};
//int main() {
//    QueueUsingStack queue;
//    queue.enqueue({ 1, 3.5 });
//    queue.enqueue({ 2, 3.0 });
//    Student s = queue.dequeue();
//    cout << "Dequeued: Roll No: " << s.rollno << ", CGPA: " << s.cgpa << endl;
//
//    return 0;
//}
