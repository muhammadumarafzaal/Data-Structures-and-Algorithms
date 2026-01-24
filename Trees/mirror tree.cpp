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
//// Function to create a mirror of the binary tree
//void mirror(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//
//    // Swap the left and right children
//    Node* temp = root->left;
//    root->left = root->right;
//    root->right = temp;
//
//    // Recursively call mirror on the left and right subtrees
//    mirror(root->left);
//    mirror(root->right);
//}
//
//// Function to print the tree in-order (for testing purposes)
//void inOrder(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    inOrder(root->left);
//    cout << root->data << " ";
//    inOrder(root->right);
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
//    cout << "Original tree (in-order): ";
//    inOrder(root);
//    cout << endl;
//
//    // Create the mirror of the tree
//    mirror(root);
//
//    cout << "Mirrored tree (in-order): ";
//    inOrder(root);
//    cout << endl;
//
//    // Clean up memory (not shown for simplicity)
//    // ...
//
//    return 0;
//}
