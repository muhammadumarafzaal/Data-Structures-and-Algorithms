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
//// Function to count non-leaf nodes by passing the count by reference
//void countNonLeafNodes(Node* root, int& count) {
//    if (root == nullptr) {
//        return;
//    }
//    // Check if it's not a leaf node
//    if (root->left != nullptr || root->right != nullptr) {
//        count++;
//    }
//    countNonLeafNodes(root->left, count);
//    countNonLeafNodes(root->right, count);
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
//    // Call the function to count non-leaf nodes
//    countNonLeafNodes(root, count);
//
//    // Print the total count of non-leaf nodes
//    cout << "Total number of non-leaf nodes: " << count << endl;
//
//    return 0;
//}
