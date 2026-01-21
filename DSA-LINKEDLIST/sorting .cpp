//#include <iostream>
//using namespace std;
//struct Node {
//	int data;
//	Node* next;
//	Node(int data) {
//		this->data = data;
//		this->next = nullptr;
//	}
//};
//class Data {
//public:
//	Node* head;
//	Data() {
//		head = nullptr;
//	}
//	void InsertAtPosition(int d, int position) {
//		Node* newNode = new Node(d);
//		if (position == 1) {  // Insert at the head
//			newNode->next = head;
//			head = newNode;
//		}
//		else {
//			Node* temp = head;
//			int count = 1;
//			while (temp != nullptr && count < position - 1) {
//				temp = temp->next;
//				count++;
//			}
//			// If position is greater than the length of the list, insert at the end
//			if (temp == nullptr) {
//				cout << "Position out of bounds, inserting at the end." << endl;
//				Node* last = head;
//				while (last->next != nullptr) {
//					last = last->next;
//				}
//				last->next = newNode;
//			}
//			else {
//				newNode->next = temp->next;
//				temp->next = newNode;
//			}
//		}
//	}
//	void PrintList() {
//		Node* temp = head;
//		while (temp != nullptr) {
//			cout << "Data Number: " << temp->data << endl;
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//	void SortList() {
//		if (head == nullptr || head->next == nullptr) {
//			return;
//		}
//		bool swapped;
//		do {
//			swapped = false;
//			Node* current = head;
//			while (current != nullptr && current->next != nullptr) {
//				if (current->data > current->next->data) {
//					int temp = current->data;
//					current->data = current->next->data;
//					current->next->data = temp;
//					swapped = true;
//				}
//				current = current->next;
//			}
//		} while (swapped);
//	}
//};
//int main() {
//	Data data;
//	data.InsertAtPosition(5, 1);
//	data.InsertAtPosition(7, 2);
//	data.InsertAtPosition(3, 1);
//	data.InsertAtPosition(8, 5);
//	data.InsertAtPosition(2, 3);
//	cout << "Original List:" << endl;
//	data.PrintList();
//	data.SortList();
//	cout << "Sorted List:" << endl;
//	data.PrintList();
//	system("pause");
//	return 0;
//}