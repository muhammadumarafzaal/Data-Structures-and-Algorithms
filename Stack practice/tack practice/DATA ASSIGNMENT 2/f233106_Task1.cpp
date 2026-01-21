//#include<iostream>
//#include<string>
//using namespace std;
//struct Node {
//    char data;
//	Node* next;
//	Node(char d) : data(d),next(nullptr){}
//};
//class Stack {
//	Node* top;
//public:
//	Stack() : top(NULL){}
//	void push(char d) {
//		Node* Newchar = new Node(d);
//			if (top == NULL) {
//				top = Newchar;
//			}
//			else {
//				Newchar->next = top;
//				top = Newchar;
//			}
//	}
//	void pop() {
//		if (top) 
//		{
//			Node* temp = top;
//			top = top->next;
//			delete temp;
//			temp = NULL;
//		}
//		else
//		{
//			cout << "STACK IS EMPTY:" << endl;
//		}
//	}
//	bool isEmpty() {
//		return top == nullptr;
//	}
//	void display()
//	{
//		if (isEmpty()) {
//			cout << "STACK IS EMPTY:" << endl;
//		}
//		Node* current = top;
//		while (current != nullptr) 
//		{
//			cout << current->data << " ";
//			current = current->next;
//		}
//		cout << endl;
//	}
//	void isPalindrom(string input) {
//		bool check = false;
//		for (int i = 0; i < input.size(); i++) {
//			push(input[i]);
//		}
//		for (int i = 0; i < input.size(); i++) {
//			if (top->data != input[i]) {
//				check = true;
//				break;
//			}
//			pop();
//		}
//		if (check) {
//			cout << "STRING IS NOT PALINDROM" << endl;
//		}
//		else {
//			cout << "STRING IS  PALINDROM" << endl;
//		}
//	}
//};
//int main() {
//	Stack stack;
//	string input;
//	cout << "PLEASE ENTER A STRING" << endl;
//	getline(cin, input);
//	stack.isPalindrom(input);
//	return 0;
//}