//#include<iostream>
//#include<string>
//using namespace std;
//struct Node {
//	string name;
//	string city;
//	int lane;
//	Node* next;
//	Node(string Name,string City,int Lane) {
//		name = Name;
//		city = City;
//		lane = Lane;
//		next = nullptr;
//
//	}
//};
//class Data {
//public:
//	Node* head;
//	Node* tail;
//	Data() {
//		head = nullptr;
//		tail = nullptr;
//	}
//	void InsertAtHead(string Name, string City, int Lane) {
//		Node* newNode = new Node(Name,City,Lane);
//		if (head == nullptr) {
//			head = tail = newNode;
//		}
//		else {
//			newNode->next = head;
//			head = newNode;
//		}
//
//	}
//	void InsertAtTail(string Name, string City, int Lane) {
//		Node* newNode = new Node(Name, City, Lane);
//		if (head == nullptr) {
//			head = tail = newNode;
//		}
//		else {
//			tail->next = newNode;
//			tail = newNode;
//		}
//
//	}
//	void InssertAtPosition(string Name, string City, int Lane,int position) {
//		Node* temp = head;
//		int count = 1;
//		while (count < position - 1) {
//			temp = temp->next;
//			count++;
//		}
//		//creating node to be insert
//		Node* insert = new Node(Name, City, Lane);
//		insert->next = temp->next;
//		temp->next = insert;
//	}
//	void print() {
//		Node* temp = head;
//		while (temp != nullptr) {
//			cout << "MY NAME:" << temp->name<<endl;
//			cout << "City:" << temp->city << endl;
//			cout << "LANE:" << temp->lane << endl;
//			temp = temp->next;
//			
//		}
//		cout << endl;
//	}
//	~Data() {
//		Node* current = head;
//		while (current != nullptr) {
//			Node* next = current->next;
//			delete current;
//			current = next;
//		}
//		cout << "DELETED SUCCESSFULLY" << endl;
//	
//
//	}
//	void SortList() 
//	{
//		if (head == nullptr || head->next == nullptr) {
//			return;
//		}
//		bool swapped;
//		do {
//			swapped = false;
//			Node* current = head;
//			while (current != nullptr && current->next != nullptr) {
//				if (current->lane > current->next->lane) {
//					int temp = current->lane;
//					current->lane = current->next->lane;
//					current->next->lane = temp;
//					swapped = true;
//				}
//				current = current->next;
//			}
//			
//
//		} while (swapped);
//	}
//};
//int main() {
//	Data d;
//	d.InsertAtHead("Umar", "Lahore", 4);
//	d.InsertAtHead("Hamza", "Islamabad", 3);
//	d.print();
//	cout << endl;
//	d.InsertAtTail("Moiz", "Karachi", 7);
//	d.print();
//	cout << endl;
//	d.InssertAtPosition("Ibrahim", "patogi", 5, 2);
//	d.print();
//	d.SortList();
//	d.print();
//	return 0;
//}
