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
//        left = right = NULL;
//    }
//};
//void Total(Node* root, int& sum) {
//    if (root == NULL) {
//        return;
//    }
//    sum += root->data; 
//    Total(root->left, sum); 
//    Total(root->right, sum); 
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
//    int sum = 0;
//
//    // Call Total function to count nodes
//    Total(root, sum);
//
//    // Print the total number of nodes
//    cout << "Total sum of the binary tree is: " << sum << endl;
//    return 0;
//}
