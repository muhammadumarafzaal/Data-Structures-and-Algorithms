//#include<iostream>
//using namespace std;
//class Node {
//public:
//	int data;
//	Node* left, * right;
//	Node(int val) {
//		data = val;
//		left = right = NULL;
//	}
//};
//Node* Insertion(Node* root, int target) {
//	if (!root) {
//		Node* newnode = new Node(target);
//		return newnode;
//	}
//	if (target < root->data) {
//		root->left = Insertion(root->left, target);
//	}
//	else {
//		root->right = Insertion(root->right, target);
//	}
//	return root;
//}
//void inorder(Node* root) {
//	if (!root)
//		return;
//	//leftside
//	inorder(root->left);
//	//node
//	cout << root->data<<" ";
//	//right
//	inorder(root->right);
//}
//bool search(Node*root,int target) {
//	if (!root)
//		return 0;
//	if (root->data == target) {
//		return 1;
//	}
//	if (target < root->data)
//		return search(root->left, target);
//	else
//		return search(root->right, target);
//}
//int main() {
//	int arr[6] = { 3,7,4,1,6,8 };
//	Node* root = NULL;
//	for (int i = 0; i < 6; i++) {
//		root = Insertion(root, arr[i]);
//	}
//	cout<<search(root, 9)<<endl;
//	//Traverse in inorder traversal your binary tree will be in sorted form
//	//in ascending order
//	inorder(root);
//	return 0;
//
//}