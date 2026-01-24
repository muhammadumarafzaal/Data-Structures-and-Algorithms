#include<iostream>
#include<queue>
using namespace std;
class Node {
public:
	int data;
	Node* left, * right;
	Node(int val) {
		data = val;
		left = right = NULL;
	}
};
int main() {
	int x;
	cout << "Enter the root element:" << endl;
	cin >> x;
	int first, second;
	queue<Node*>q;
	Node* root = new Node(x);//first we will create a root node
	q.push(root);
	//Build the binary tree
	while (!q.empty()) {
		Node* temp = q.front();
		q.pop();
		cout << "Enter the left child of " << temp->data << endl;
		cin >> first;//left ki value 
		//leftnode
		if (first != -1) {
			temp->left = new Node(first);
			q.push(temp->left);
		}
		//rightnode
		cout << "Enter the right child of " << temp->data << endl;
		cin >> second;//right ki value
		if (second != -1) {
			temp->right = new Node(second);
			q.push(temp->right);
		}


	}

}
