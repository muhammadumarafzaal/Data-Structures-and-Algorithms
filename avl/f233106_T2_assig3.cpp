//#include <iostream>
//using namespace std;
//struct TreeNode{
//    int value;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
//};
//TreeNode* Insert(TreeNode* root, int value) {
//    if (!root) {
//        return new TreeNode(value);
//    }
//    if (value == 1) {
//        if (root->right) {
//            root->right = Insert(root->right, value);
//        }
//        else {
//            root->right = new TreeNode(value);
//        }
//    }
//    else if (value == 0) {
//        if (root->left) {
//            root->left = Insert(root->left, value);
//        }
//        else {
//            root->left = new TreeNode(value);
//        }
//    }
//    return root;
//}
//void postorder(TreeNode* root, int& andResult, int& orResult, int& xorResult) {
//    if (!root) return;
//
//    postorder(root->left, andResult, orResult, xorResult);
//    postorder(root->right, andResult, orResult, xorResult);
//
//    andResult &= root->value;
//    orResult |= root->value;
//    xorResult ^= root->value;
//}
//
//int main() {
//    string input = "101";
//    TreeNode* root = nullptr;
//    for (int i = 0; i < input.length(); ++i) {
//        int value = input[i] - '0';
//        root = Insert(root, value);
//    }
//
//    int andResult = 1;
//    int orResult = 0;
//    int xorResult = 0;
//    postorder(root, andResult, orResult, xorResult);
//    cout << "AND Result: " << andResult << endl;
//    cout << "OR Result: " << orResult << endl;
//    cout << "XOR Result: " << xorResult << endl;
//    return 0;
//}
