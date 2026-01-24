//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int val) {
//        data = val;
//        left = right = nullptr;
//    }
//};
//
//// Function to calculate the total sum of the binary tree
//int Total(Node* root) {
//    if (root == nullptr) {
//        return 0;
//    }
//    return root->data + Total(root->left) + Total(root->right);
//}
//
//// Function to check if two binary trees are identical
//bool isIdentical(Node* r1, Node* r2) {
//    if (r1 == nullptr && r2 == nullptr)
//        return true;
//    if ((r1 == nullptr && r2 != nullptr) || (r1 != nullptr && r2 == nullptr))
//        return false;
//    if (r1->data != r2->data)
//        return false;
//    return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
//}
//
//int main() {
//    // Create a sample binary tree
//    Node* root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
//
//    // Calculate the total sum of the binary tree
//    int sum = Total(root);
//
//    // Print the total sum of the binary tree
//    cout << "Total sum of the binary tree is: " << sum << endl;
//
//    // Example trees to check for identity
//    Node* tree1 = new Node(1);
//    tree1->left = new Node(2);
//    tree1->right = new Node(3);
//
//    Node* tree2 = new Node(1);
//    tree2->left = new Node(2);
//    tree2->right = new Node(4);
//
//    if (isIdentical(tree1, tree2)) {
//        cout << "The two trees are identical." << endl;
//    }
//    else {
//        cout << "The two trees are not identical." << endl;
//    }
//    return 0;
//}
