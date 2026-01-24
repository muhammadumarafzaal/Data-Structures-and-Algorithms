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
//// Function to count non-leaf nodes
//int countNonLeaf(Node* root) {
//    if (root == nullptr) {
//        return 0;
//    }
//
//    // If it's a leaf node, return 0
//    if (root->left == nullptr && root->right == nullptr) {
//        return 0;
//    }
//
//    // Count the current non-leaf node and recursively count for left and right children
//    return 1 + countNonLeaf(root->left) + countNonLeaf(root->right);
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
//    // Call the function to count non-leaf nodes
//    int nonLeafCount = countNonLeaf(root);
//
//    // Print the total count of non-leaf nodes
//    cout << "Total number of non-leaf nodes: " << nonLeafCount << endl;
//
//    return 0;
//}
