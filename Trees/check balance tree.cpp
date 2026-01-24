//#include <iostream>
//#include <algorithm> // For std::max
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
//// Function to check the height of the tree and determine if it's balanced
//int height(Node* root, bool& valid) {
//    if (!root)
//        return 0;
//
//    int L = height(root->left, valid);
//    int R = height(root->right, valid);
//
//    if (abs(L - R) > 1) {
//        valid = false; // Set valid to false if not balanced
//    }
//
//    return 1 + max(L, R); // Return the height of the current subtree
//}
//
//// Function to check if the tree is balanced
//bool isTreeBalanced(Node* root) {
//    bool valid = true; // Initialize valid to true
//    height(root, valid); // Call height function
//    return valid; // Return whether the tree is balanced
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
//
//    // Check if the tree is balanced
//    if (isTreeBalanced(root)) {
//        cout << "The tree is balanced." << endl;
//    }
//    else {
//        cout << "The tree is not balanced." << endl;
//    }
//
//    // Clean up memory (not shown for simplicity)
//    // ...
//
//    return 0;
//}
