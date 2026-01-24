//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//// Definition for a binary tree node.
//class Node {
//public:
//    int val;
//    Node* left;
//    Node* right;
//    Node(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//
//// Function to get the left view of the binary tree
//vector<int> leftView(Node* root) {
//    vector<int> result;
//    if (!root) return result;
//
//    queue<Node*> q;
//    q.push(root);
//
//    while (!q.empty()) {
//        int size = q.size();
//        // Only the first node of this level contributes to the left view
//        result.push_back(q.front()->val);
//
//        // Traverse nodes of the current level
//        while(size--) {
//            Node* current = q.front();
//            q.pop();
//
//            // Enqueue left child first
//            if (current->left) q.push(current->left);
//            // Then enqueue right child
//            if (current->right) q.push(current->right);
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    // Example usage:
//    Node* root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
//
//    vector<int> leftViewResult = leftView(root);
//    cout << "Left View of the Binary Tree: ";
//    for (int val : leftViewResult) {
//        cout << val << " ";
//    }
//    cout << endl;
//
//    // Clean up memory (not shown)
//
//    return 0;
//}
