#include <iostream>
#include <stack>
#include <vector>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Inorder Traversal
void inorderTraversal(TreeNode* root) {
    std::stack<TreeNode*> stack;
    TreeNode* current = root;

    while (current || !stack.empty()) {
        while (current) {
            stack.push(current);
            current = current->left;
        }
        current = stack.top();
        stack.pop();
        std::cout << current->value << " ";
        current = current->right;
    }
    std::cout << std::endl; // For better output formatting
}

// Preorder Traversal
void preorderTraversal(TreeNode* root) {
    if (!root) return;

    std::stack<TreeNode*> stack;
    stack.push(root);

    while (!stack.empty()) {
        TreeNode* current = stack.top();
        stack.pop();
        std::cout << current->value << " ";

        // Push right first so that left is processed next
        if (current->right) stack.push(current->right);
        if (current->left) stack.push(current->left);
    }
    std::cout << std::endl; // For better output formatting
}

// Postorder Traversal
void postorderTraversal(TreeNode* root) {
    if (!root) return;

    std::stack<TreeNode*> stack1, stack2;
    stack1.push(root);

    // First stack to process nodes
    while (!stack1.empty()) {
        TreeNode* current = stack1.top();
        stack1.pop();
        stack2.push(current);

        // Push left and right children into stack1
        if (current->left) stack1.push(current->left);
        if (current->right) stack1.push(current->right);
    }

    // Now process the second stack to get postorder
    while (!stack2.empty()) {
        TreeNode* current = stack2.top();
        stack2.pop();
        std::cout << current->value << " ";
    }
    std::cout << std::endl; // For better output formatting
}

int main() {
    // Create a simple BST
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    std::cout << "Inorder Traversal: ";
    inorderTraversal(root);

    std::cout << "Preorder Traversal: ";
    preorderTraversal(root);

    std::cout << "Postorder Traversal: ";
    postorderTraversal(root);

    return 0;
}
