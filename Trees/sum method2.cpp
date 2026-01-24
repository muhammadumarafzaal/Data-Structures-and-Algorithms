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
//int Total(Node* root) {
//    if (root == nullptr) {
//        return 0; // Return 0 for null nodes
//    }
//    // Return the sum of the current node and the sums of the left and right subtrees
//    return root->data + Total(root->left) + Total(root->right);
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
//    // Call Total function to calculate the sum
//    int sum = Total(root); // Capture the sum returned by Total
//
//    // Print the total sum of the binary tree
//    cout << "Total sum of the binary tree is: " << sum << endl;
//
//
//
//    return 0;
//}
