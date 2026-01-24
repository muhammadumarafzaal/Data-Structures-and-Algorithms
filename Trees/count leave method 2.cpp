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
//// Static variable to hold the count of leaf nodes
//static int leafCount = 0;
//
//// Function to count leaf nodes using a static variable
//void countLeafNodesStatic(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    // If it's a leaf node
//    if (root->left == nullptr && root->right == nullptr) {
//        leafCount++;
//    }
//    else {
//        countLeafNodesStatic(root->left);
//        countLeafNodesStatic(root->right);
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
//    // Reset static leafCount to zero before counting
//    leafCount = 0;
//
//    // Call the function to count leaf nodes
//    countLeafNodesStatic(root);
//
//    // Print the total count of leaf nodes
//    cout << "Total number of leaf nodes (using static variable): " << leafCount << endl;
//
//    return 0;
//}
