//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//    Node(int data) {
//        this->data = data;
//        this->next = NULL;
//    }
//};
//
//void InsertAtHead(Node*& head, Node*& tail, int d) {
//    // Create a new node
//    Node* temp = new Node(d);
//    temp->next = head;
//    head = temp;
//
//    // Update tail if the list was empty
//    if (tail == NULL) {
//        tail = head;
//    }
//}
//
//void InsertionAtTail(Node*& head, Node*& tail, int d) {
//    // Create a new node
//    Node* temp = new Node(d);
//    if (tail != NULL) {
//        tail->next = temp;
//    }
//    tail = temp;
//
//    // Update head if the list was empty
//    if (head == NULL) {
//        head = tail;
//    }
//}
//
//void print(Node* head) {
//    Node* temp = head;
//    while (temp != NULL) {
//        cout << temp->data << endl;
//        temp = temp->next;
//    }
//}
//
//void InsertionAtPosition(Node*& head, Node*& tail, int position, int d) {
//    if (position <= 0) {
//        cout << "Invalid position" << endl;
//        return;
//    }
//
//    if (position == 1) {
//        InsertAtHead(head, tail, d);
//        return;
//    }
//
//    Node* temp = head;
//    int count = 1;
//    while (count < position - 1 && temp != NULL) {
//        temp = temp->next;
//        count++;
//    }
//
//    if (temp == NULL) {
//        cout << "Position out of bounds" << endl;
//        return;
//    }
//
//    Node* insert = new Node(d);
//    insert->next = temp->next;
//    temp->next = insert;
//
//    if (insert->next == NULL) { // If inserted at the end
//        tail = insert;
//    }
//}
//
//int main() {
//    Node* head = NULL;
//    Node* tail = NULL;
//
//    InsertAtHead(head, tail, 10);
//    InsertAtHead(head, tail, 20);
//    cout << "List after inserting elements at head:" << endl;
//    print(head);
//
//    InsertionAtTail(head, tail, 30);
//    cout << "List after inserting 30 at tail:" << endl;
//    print(head);
//
//    cout << "List after inserting 15 at position 2:" << endl;
//    InsertionAtPosition(head, tail, 2, 15);
//    print(head);
//
//    cout << "List after inserting 25 at position 5:" << endl;
//    InsertionAtPosition(head, tail, 5, 25);
//    print(head);
//
//    return 0;
//}
