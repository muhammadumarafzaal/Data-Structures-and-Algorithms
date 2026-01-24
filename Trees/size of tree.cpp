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
//        left = right = NULL;
//    }
//};
//
//void Total(Node* root, int& count) {
//    if (root == NULL) {
//        return;
//    }
//    count++; // Increment the count for the current node
//    Total(root->left, count); // Recursively count left subtree
//    Total(root->right, count); // Recursively count right subtree
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
//    // Call Total function to count nodes
//    Total(root, count);
//
//    // Print the total number of nodes
//    cout << "Total number of nodes in the binary tree: " << count << endl;
//    return 0;
//}
