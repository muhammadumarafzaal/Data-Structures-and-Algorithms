//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <iomanip> // for std::setw
//using namespace std;
//
//class node {
//public:
//	int data;
//	char grade;
//	node* left;
//	node* right;
//
//	node(int x) {
//		data = x;
//		left = right = nullptr;
//	}
//};
//
//node* input() {
//	int var;
//	cout << "ENTER THE MARKS (-1 for null): ";
//	cin >> var;
//
//	if (var == -1) {
//		return nullptr;
//	}
//
//	node* temp = new node(var);
//	if (temp->data > 80) {
//		temp->grade = 'A';
//	}
//	else if (temp->data >= 70) {
//		temp->grade = 'B';
//	}
//	else {
//		temp->grade = 'C';
//	}
//	return temp;
//}
//
//void countGrades(node* root, int& aCount, int& bCount) {
//	if (root == nullptr) return;
//
//	if (root->grade == 'A') {
//		++aCount;
//	}
//	else if (root->grade == 'B') {
//		++bCount;
//	}
//
//	countGrades(root->left, aCount, bCount);
//	countGrades(root->right, aCount, bCount);
//}
//
//void sum1(node* root, int& sumA, int& sumB) {
//	if (root == nullptr) return;
//
//	if (root->grade == 'A') {
//		sumA += root->data;
//	}
//	else if (root->grade == 'B') {
//		sumB += root->data;
//	}
//
//	sum1(root->left, sumA, sumB);
//	sum1(root->right, sumA, sumB);
//}
//
//void pre_order(node* root) {
//	if (root == nullptr) return;
//	cout << std::setw(10) << root->data << " | " << root->grade << '\n';
//	pre_order(root->left);
//	pre_order(root->right);
//}
//
//void post_order(node* root) {
//	if (root == nullptr) return;
//	post_order(root->left);
//	post_order(root->right);
//	cout << std::setw(10) << root->data << " | " << root->grade << '\n';
//}
//
//void in_order(node* root) {
//	if (root == nullptr) return;
//	in_order(root->left);
//	cout << std::setw(10) << root->data << " | " << root->grade << '\n';
//	in_order(root->right);
//}
//
//node* binarytree() {
//	node* temp = input();
//	if (temp == nullptr) {
//		return nullptr;
//	}
//
//	cout << "ENTER MARKS OF LEFT NODE OF " << temp->data << ": " << endl;
//	temp->left = binarytree();
//	cout << "ENTER MARKS OF RIGHT NODE OF " << temp->data << ": " << endl;
//	temp->right = binarytree();
//	return temp;
//}
//
//void levelOrder(node* root) {
//	if (root == nullptr) return;
//	queue<node*> q1;
//	q1.push(root);
//	while (!q1.empty()) {
//		node* temp = q1.front();
//		q1.pop();
//		cout << std::setw(10) << temp->data << " | " << temp->grade << " ";
//		if (temp->left != nullptr) {
//			q1.push(temp->left);
//		}
//		if (temp->right != nullptr) {
//			q1.push(temp->right);
//		}
//	}
//	cout << endl; // Add a newline after level order output
//}
//
//int height(node* root) {
//	if (root == nullptr) {
//		return 0;
//	}
//	int leftHeight = height(root->left);
//	int rightHeight = height(root->right);
//	return (1 + max(leftHeight, rightHeight));
//}
//
//bool check(node* root) {
//	if (root == nullptr) return true;
//	if ((root->left == nullptr && root->right != nullptr) ||
//		(root->left != nullptr && root->right == nullptr)) {
//		return false;
//	}
//	return check(root->left) && check(root->right);
//}
//
//int main() {
//	cout << "==============================\n";
//	cout << "  BINARY TREE MARKS INPUT     \n";
//	cout << "==============================\n";
//
//	cout << "ENTER THE MARKS OF ROOT (use -1 for null): " << endl;
//	node* root = binarytree();
//
//	cout << "\nPRINTING THE VALUES:\n";
//	cout << "------------------------------\n";
//
//	cout << "PRE ORDER TRAVERSAL:\n";
//	pre_order(root);
//
//	cout << "\nPOST ORDER TRAVERSAL:\n";
//	post_order(root);
//
//	cout << "\nIN ORDER TRAVERSAL:\n";
//	in_order(root);
//
//	cout << "\nLEVEL ORDER TRAVERSAL:\n";
//	levelOrder(root);
//
//	int aCount = 0, bCount = 0, sumA = 0, sumB = 0;
//	countGrades(root, aCount, bCount);
//	sum1(root, sumA, sumB);
//
//	cout << "------------------------------\n";
//	cout << "SUMMARY:\n";
//	cout << "NUMBER OF A GRADES: " << aCount << endl;
//	cout << "NUMBER OF B GRADES: " << bCount << endl;
//	cout << "SUM OF A GRADES: " << sumA << endl;
//	cout << "SUM OF B GRADES: " << sumB << endl;
//	cout << "------------------------------\n";
//
//	if (check(root)) {
//		cout << "TREE IS A FULL BINARY TREE\n";
//	}
//	else {
//		cout << "TREE IS NOT A FULL BINARY TREE\n";
//	}
//
//	cout << "THE HEIGHT OF THE TREE IS: " << height(root) << endl;
//	cout << "==============================\n";
//
//	system("pause");
//	return 0; // Add return statement
//}
