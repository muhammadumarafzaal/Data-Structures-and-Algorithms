#include <iostream>
#include <vector>

using namespace std;

// Definition of a tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to find the index of the current root in the in-order array
int findIndex(const vector<int>& inorder, int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == value) {
            return i;
        }
    }
    return -1; // This shouldn't happen if the input is valid
}

// Function to build the tree recursively
TreeNode* buildTreeHelper(int preStart, int inStart, int inEnd, 
                          const vector<int>& preorder, const vector<int>& inorder) {
    // Base case
    if (preStart >= preorder.size() || inStart > inEnd)
        return NULL;

    // The first element in preorder is the root
    int rootVal = preorder[preStart];
    TreeNode* root = new TreeNode(rootVal);

    // Find the root in the in-order traversal
    int inIndex = findIndex(inorder, inStart, inEnd, rootVal);

    // Recursively build the left and right subtrees
    root->left = buildTreeHelper(preStart + 1, inStart, inIndex - 1, preorder, inorder);
    root->right = buildTreeHelper(preStart + (inIndex - inStart + 1), inIndex + 1, inEnd, preorder, inorder);

    return root;
}

// Main function to build the binary tree
TreeNode* buildTree(const vector<int>& preorder, const vector<int>& inorder) {
    return buildTreeHelper(0, 0, inorder.size() - 1, preorder, inorder);
}

// Function to print the tree in-order (for verification)
void printInOrder(TreeNode* root) {
    if (!root) return;
    printInOrder(root->left);
    cout << root->val << " ";
    printInOrder(root->right);
}

int main() {
    // Example usage
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> preorder = {3, 9, 20, 15, 7};

    TreeNode* root = buildTree(preorder, inorder);

    // Print the tree in-order (should match the inorder array)
    cout << "In-order traversal of the constructed tree: ";
    printInOrder(root);

    return 0;
}

