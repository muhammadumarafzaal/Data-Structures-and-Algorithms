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
//void InsertAtHead(Node*&head,int d) {
//	//new node create
//	Node* temp = new Node(d);
//	temp->next = head;
//	head = temp;
//}
//void print(Node*&head) {
//	Node* temp = head;
//	while (temp != NULL) {
//		cout << temp->data <<"  "<<endl;
//		temp = temp->next;
//	}
//	cout << endl;
//}
//int main() {
//	Node* node1 = new Node(10);
//	cout << node1->data << endl;
//	Node* head = node1;
//	cout << endl;
//	InsertAtHead(head,12);
//	print(head);
//	InsertAtHead(head, 15);
//	print(head);
//	return 0;
//}