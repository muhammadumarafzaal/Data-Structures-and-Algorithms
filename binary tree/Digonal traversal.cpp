//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//// Define a binary tree node
//struct Node {
//    int val;
//    Node* left, * right;
//    Node(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//// Helper function to determine the maximum diagonal level
//void Find(Node* root, int pos, int& l) {
//    if (!root) return;
//    l = max(pos, l);
//    Find(root->left, pos + 1, l);
//    Find(root->right, pos, l);
//}
//
//// Helper function to collect nodes in each diagonal
//void Finddig(Node* root, int pos, vector<vector<int>>& ans) {
//    if (!root) return;
//    ans[pos].push_back(root->val);
//    Finddig(root->left, pos + 1, ans);
//    Finddig(root->right, pos, ans);
//}
//
//// Function for diagonal traversal
//vector<vector<int>> diagonalTraversal(Node* root) {
//    int maxDiagonal = 0;
//    Find(root, 0, maxDiagonal);
//
//    // Initialize 2D vector to hold nodes at each diagonal level
//    vector<vector<int>> ans(maxDiagonal + 1);
//    Finddig(root, 0, ans);
//
//    return ans;
//}
//
//// Helper function to print the result of diagonal traversal
//void printDiagonalOrder(const vector<vector<int>>& diagonals) {
//    for (int i = 0; i < diagonals.size(); i++) {
//        for (int j = 0; j < diagonals[i].size(); j++) {
//            cout << diagonals[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//
//int main() {
//    // Example tree construction
//    Node* root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->left->left->left = new Node(7);
//    root->left->left->right = new Node(8);
//    root->left->left->right->left = new Node(11);
//    root->right->right = new Node(6);
//    root->right->right->right = new Node(10);
//
//    // Perform diagonal traversal and print
//    vector<vector<int>> diagonals = diagonalTraversal(root);
//    printDiagonalOrder(diagonals);
//
//    return 0;
//}
