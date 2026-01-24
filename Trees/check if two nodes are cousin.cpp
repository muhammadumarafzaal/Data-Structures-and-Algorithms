//#include <iostream>
//#include <queue>
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
//// Helper function to check if two nodes have the same parent
//bool isSameParent(Node* root, int x, int y) {
//    if (!root) return false;
//
//    // Check if both x and y are children of the current node
//    if (root->left && root->right) {
//        if ((root->left->val == x && root->right->val == y) ||
//            (root->left->val == y && root->right->val == x)) {
//            return true; // Same parent
//        }
//    }
//
//    // Recursively check the left and right children
//    return isSameParent(root->left, x, y) || isSameParent(root->right, x, y);
//}
//
//// Function to check if two nodes are cousins
//bool areCousins(Node* root, int x, int y) {
//    if (!root) return false;
//
//    queue<Node*> q;
//    q.push(root);
//
//    while (!q.empty()) {
//        int size = q.size();
//        bool foundX = false, foundY = false;
//
//        // Check all nodes at the current level
//        for (int i = 0; i < size; ++i) {
//            Node* current = q.front();
//            q.pop();
//
//            // Check if we found either of the nodes
//            if (current->val == x) foundX = true;
//            if (current->val == y) foundY = true;
//
//            // Add children to the queue
//            if (current->left) q.push(current->left);
//            if (current->right) q.push(current->right);
//        }
//
//        // If both nodes are found at this level, check if they have the same parent
//        if (foundX && foundY) {
//            return false; // Same parent means they are not cousins
//        }
//
//        // If we found one node, check if the other is at this level with the same parent
//        if (foundX || foundY) {
//            // If only one is found, check if they have the same parent
//            if (isSameParent(root, x, y)) {
//                return false; // Same parent means they are not cousins
//            }
//        }
//    }
//
//    // If we finish the loop without finding both nodes at the same level
//    return false;
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
//    int x = 4, y = 5;
//    if (areCousins(root, x, y)) {
//        cout << x << " and " << y << " are cousins." << endl;
//    }
//    else {
//        cout << x << " and " << y << " are not cousins." << endl;
//    }
//
//    return 0;
//}
