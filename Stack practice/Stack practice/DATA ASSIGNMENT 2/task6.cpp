//#include <iostream>
//#include <string>
//using namespace std;
//class Node {
//public:
//    char data;
//    Node* next;
//    Node(char data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};
//class Stack {
//    Node* Top;
//public:
//    Stack() {
//        Top = NULL;
//    }
//    void push(char a) {
//        Node* temp = new Node(a);
//        temp->next = Top;
//        Top = temp;
//    }
//    void pop() {
//        if (isEmpty())
//            return;
//        Node* temp = Top;
//        Top = Top->next;
//        delete temp;
//    }
//    bool isEmpty() {
//        return Top == NULL;
//    }
//    char top() {
//        if (isEmpty())
//            return '\0';
//        return Top->data;
//    }
//};
//class NodeQueue {
//public:
//    char data;
//    NodeQueue* next;
//public:
//    NodeQueue(char d) {
//        data = d;
//        next = NULL;
//    }
//};
//class Queue {
//    NodeQueue* front;
//    NodeQueue* rear;
//public:
//    Queue() {
//        front = rear = NULL;
//    }
//    bool isEmpty() {
//        return front == NULL;
//    }
//
//    void push(char x) {
//        NodeQueue* newnode = new NodeQueue(x);
//        if (isEmpty()) {
//            front = rear = newnode;
//        }
//        else {
//            rear->next = newnode;
//            rear = newnode;
//        }
//    }
//    void pop() {
//        if (isEmpty()) {
//            return;
//        }
//        else {
//            if (front == rear) {
//                delete front;
//                front = rear = NULL;
//            }
//            else {
//                NodeQueue* curr = front;
//                front = front->next;
//                delete curr;
//            }
//        }
//    }
//    char top() {
//        if (isEmpty()) {
//            return '\0';
//        }
//        else {
//            return front->data;
//        }
//    }
//};
//void inputQueueAndStack(Queue& q, string& characters, Stack& s) {
//    int len = characters.length();
//    for (int i = 0; i < len; i++) {
//        q.push(characters[i]);
//        s.push(characters[i]);
//    }
//}
//bool isPalindrome(Stack& s, Queue& q) {
//    Queue temp = q;
//    while (!s.isEmpty() && !temp.isEmpty()) {
//        if (s.top() != temp.top()) {
//            return false;
//        }
//        s.pop();
//        temp.pop();
//    }
//    return true;
//}
//int main() {
//    cout << "ENTER THE STRING: ";
//    string characters;
//    cin >> characters;
//    Queue q;
//    Stack s;
//    inputQueueAndStack(q, characters, s);
//    bool palindrom = isPalindrome(s, q);
//    if (palindrom) {
//        cout << "THE GIVEN STRING: \"" << characters << "\" IS A PALINDROME!!" << endl;
//    }
//    else {
//        cout << "THE GIVEN STRING: \"" << characters << "\" IS NOT A PALINDROME!!" << endl;
//    }
//    return 0;
//}
