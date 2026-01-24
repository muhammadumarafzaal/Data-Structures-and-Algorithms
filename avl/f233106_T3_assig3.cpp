//#include <iostream>
//using namespace std;
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//};
//void converttoGreaterTree(TreeNode* root, int& sum) {
//    if (!root)
//        return;
//    converttoGreaterTree(root->right, sum);
//    sum += root->val;
//    root->val = sum;
//    converttoGreaterTree(root->left, sum);
//}
//TreeNode* convertBST(TreeNode* root) {
//    int sum = 0;
//    converttoGreaterTree(root, sum);
//    return root;
//}
//void inOrderTraversal(TreeNode* root) {
//    if (!root) return;
//    inOrderTraversal(root->left);
//    cout << root->val << " ";
//    inOrderTraversal(root->right);
//}
//int main() {
//    TreeNode* root = new TreeNode(4);
//    root->left = new TreeNode(1);
//    root->right = new TreeNode(6);
//    root->left->left = new TreeNode(0);
//    root->left->right = new TreeNode(2);
//    root->right->left = new TreeNode(5);
//    root->right->right = new TreeNode(7);
//    root->left->right->right = new TreeNode(3);
//    root->right->right->right = new TreeNode(8);
//    convertBST(root);
//    cout << "In-order traversal of the Greater Tree: ";
//    inOrderTraversal(root);
//    cout << endl;
//    return 0;
//}
