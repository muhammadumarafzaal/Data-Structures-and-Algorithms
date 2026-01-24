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
//// Function to calculate the height of the binary tree
//int height(Node* root) {
//    if (root == nullptr) {
//        return -1; // Return -1 for null nodes (height of empty tree)
//    }
//
//    // Calculate the height of left and right subtrees
//    int leftHeight = height(root->left);
//    int rightHeight = height(root->right);
//
//    // Return the maximum of the heights of the left and right subtrees plus 1 for the current node
//    return 1 + max(leftHeight, rightHeight);
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
//    // Calculate the height of the binary tree
//    int treeHeight = height(root);
//
//    // Print the height of the binary tree
//    cout << "Height of the binary tree: " << treeHeight << endl;
//
//    return 0;
//}
