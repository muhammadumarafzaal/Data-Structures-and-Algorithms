//#include <iostream>
//using namespace std;
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
//// Function to count leaf nodes by passing the count by reference
//void countLeafNodes(Node* root, int& count) {
//    if (root == nullptr) {
//        return;
//    }
//    // If it's a leaf node
//    if (root->left == nullptr && root->right == nullptr) {
//        count++;
//    }
//    else {
//        countLeafNodes(root->left, count);
//        countLeafNodes(root->right, count);
//    }
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
//    // Initialize count variable
//    int count = 0;
//
//    // Call the function to count leaf nodes
//    countLeafNodes(root, count);
//
//    // Print the total count of leaf nodes
//    cout << "Total number of leaf nodes: " << count << endl;
//
//    return 0;
//}
