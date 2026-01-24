//#include <iostream>
//#include <vector>
//#include <stack>
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
//vector<int> spiralLevelOrderTraversal(Node* root) {
//    vector<int> ans;
//    if (!root) return ans; // Check if the root is null
//
//    stack<Node*> s1; // For right to left
//    stack<Node*> s2; // For left to right
//
//    s1.push(root);
//
//    while (!s1.empty() || !s2.empty()) {
//        // Process stack s1 (right to left)
//        while (!s1.empty()) {
//            Node* temp = s1.top();
//            s1.pop();
//            ans.push_back(temp->val);
//            // Push right child first, then left child
//            if (temp->right) s2.push(temp->right);
//            if (temp->left) s2.push(temp->left);
//        }
//
//        // Process stack s2 (left to right)
//        while (!s2.empty()) {
//            Node* temp = s2.top();
//            s2.pop();
//            ans.push_back(temp->val);
//            // Push left child first, then right child
//            if (temp->left) s1.push(temp->left);
//            if (temp->right) s1.push(temp->right);
//        }
//    }
//
//    return ans; // Return the collected result
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
//    cout << "Spiral Level Order Traversal: ";
//    vector<int> result = spiralLevelOrderTraversal(root);
//
//    for (int i = 0; i < result.size(); ++i) {
//        cout << result[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
