#include <iostream>
#include <stack>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Recursive post-order traversal
void postOrderRecursive(TreeNode* root) {
    if (root == nullptr) return;
    postOrderRecursive(root->left);
    postOrderRecursive(root->right);
    cout << root->val << " ";
}

// Iterative post-order traversal
void postOrderIterative(TreeNode* root) {
    if (root == nullptr) return;

    stack<TreeNode*> s;
    TreeNode* lastVisited = nullptr;
    while (!s.empty() || root != nullptr) {
        if (root != nullptr) {
            s.push(root);
            root = root->left;
        }
        else {
            TreeNode* peekNode = s.top();
            // If right child is null or already visited
            if (peekNode->right == nullptr || peekNode->right == lastVisited) {
                cout << peekNode->val << " ";
                s.pop();
                lastVisited = peekNode;
            }
            else {
                root = peekNode->right;
            }
        }
    }
}

// Function to delete the tree
void deleteTree(TreeNode* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    // Creating a simple binary tree
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(10);
    root->left->left = new TreeNode(20);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(25);
    root->right->right = new TreeNode(30);
    root->right->left->right = new TreeNode(35);

    cout << "Post-order traversal (recursive): ";
    postOrderRecursive(root);
    cout << endl;

    cout << "Post-order traversal (iterative): ";
    postOrderIterative(root);
    cout << endl;

    // Freeing the allocated memory
    deleteTree(root);

    return 0;
}
