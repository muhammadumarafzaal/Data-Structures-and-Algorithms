//#include<iostream>
//using namespace std;
//class Node {
//public:
//	int data;
//	Node* next;
//	Node(int data) {
//		this->data = data;
//		this->next = NULL;
//	}
//};
//void InsertionAtTail(Node*&tail,int d) {
//	//new node create
//	Node* temp = new Node(d);
//	tail->next = temp;
//	tail = temp;
//}
//void print(Node*&tail) {
//	Node* temp = tail;
//	while (temp!=NULL) {
//		cout << temp->data << endl;
//		temp = temp->next;
//	}
//}
//int main() {
//	Node* node1 = new Node(10);
//	Node* tail = node1;
//	print(tail);
//	InsertionAtTail(tail, 12);
//	print(tail);
//	InsertionAtTail(tail, 20);
//	print(tail);
//	return 0;
//
//}