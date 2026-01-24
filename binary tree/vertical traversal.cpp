//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//// Define a binary tree node
//struct TreeNode {
//    int val;
//    TreeNode* left, * right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//// Function to find the range of horizontal distances
//void Find(TreeNode* root, int pos, int& L, int& R) {
//    if (!root)
//        return;
//    L = min(L, pos);
//    R = max(R, pos);
//    Find(root->left, pos - 1, L, R);
//    Find(root->right, pos + 1, L, R);
//}
//
//// Function to perform vertical order traversal
//vector<vector<int>> verticalOrder(TreeNode* root) {
//    if (!root) return {};
//
//    int L = 0, R = 0;
//    Find(root, 0, L, R);
//
//    // Create 2D arrays for positive and negative indices
//    vector<vector<int>> positive(R + 1);
//    vector<vector<int>> negative(abs(L) + 1);
//
//    // BFS traversal with queue for nodes and their horizontal distances
//    queue<TreeNode*> q;
//    queue<int> index;
//    q.push(root);
//    index.push(0); // Start with root at horizontal distance 0
//
//    while (!q.empty()) {
//        TreeNode* temp = q.front();
//        q.pop();
//        int pos = index.front();
//        index.pop();
//
//        // Store the value based on positive or negative position
//        if (pos >= 0)
//            positive[pos].push_back(temp->val);
//        else
//            negative[abs(pos)].push_back(temp->val);
//
//        // Add child nodes to the queue with updated horizontal distances
//        if (temp->left) {
//            q.push(temp->left);
//            index.push(pos - 1);
//        }
//        if (temp->right) {
//            q.push(temp->right);
//            index.push(pos + 1);
//        }
//    }
//
//    // Combine results from negative and positive arrays into a single result
//    vector<vector<int>> result;
//    for (int i = negative.size() - 1; i > 0; --i) {
//        if (!negative[i].empty()) {
//            result.push_back(negative[i]);
//        }
//    }
//    for (int i = 0; i < positive.size(); ++i) {
//        if (!positive[i].empty()) {
//            result.push_back(positive[i]);
//        }
//    }
//
//    return result;
//}
//
//// Helper function to print the result of vertical traversal
//void printVerticalOrder(const vector<vector<int>>& verticalOrder) {
//    for (int i = 0; i < verticalOrder.size(); ++i) {
//        for (int j = 0; j < verticalOrder[i].size(); ++j) {
//            cout << verticalOrder[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    // Example tree construction
//    TreeNode* root = new TreeNode(1);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(3);
//    root->left->left = new TreeNode(4);
//    root->left->right = new TreeNode(5);
//    root->left->left->left = new TreeNode(7);
//    root->left->left->right = new TreeNode(8);
//    root->left->left->right->left = new TreeNode(11);
//    root->left->left->right->right = new TreeNode(12);
//    root->right->right = new TreeNode(6);
//    root->right->right->left = new TreeNode(9);
//    root->right->right->right = new TreeNode(10);
//    root->right->right->right->left = new TreeNode(13);
//
//    // Perform vertical traversal and print
//    vector<vector<int>> verticalOrderResult = verticalOrder(root);
//    printVerticalOrder(verticalOrderResult);
//
//    return 0;
//}
