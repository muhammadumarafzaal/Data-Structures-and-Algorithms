//#include <iostream>
//#include <queue>
//using namespace std;
//struct Student {
//    int rollno;
//    float cgpa;
//};
//class StackUsingQueue {
//private:
//    queue<Student> q1, q2;
//public:
//    void push(Student student) {
//        q1.push(student);
//    }
//
//    Student pop() {
//        if (q1.empty()) {
//            cout << "Stack is empty!" << endl;
//            return { -1, -1 }; // return an invalid student
//        }
//
//        while (q1.size() > 1) {
//            q2.push(q1.front());
//            q1.pop();
//        }
//
//        Student popped = q1.front();
//        q1.pop();
//
//        swap(q1, q2);
//        return popped;
//    }
//
//    bool isEmpty() {
//        return q1.empty();
//    }
//};
//
//int main() {
//    StackUsingQueue stack;
//    stack.push({ 1, 3.5 });
//    stack.push({ 2, 3.0 });
//    Student s = stack.pop();
//    cout << "Popped: Roll No: " << s.rollno << ", CGPA: " << s.cgpa << endl;
//    return 0;
//}
