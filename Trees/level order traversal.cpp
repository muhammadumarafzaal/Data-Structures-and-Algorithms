//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int val) {
//        data = val;
//        left = right = NULL;
//    }
//};
//
//vector<int> levelOrder(Node* root) {
//    queue<Node*> q;
//    q.push(root);
//    vector<int> ans;
//
//    if (root == nullptr) {
//        return ans; // Return an empty vector if the tree is empty
//    }
//
//    while (!q.empty()) {
//        Node* temp = q.front();
//        q.pop();
//        ans.push_back(temp->data);
//
//        if (temp->left) {
//            q.push(temp->left);
//        }
//        if (temp->right) {
//            q.push(temp->right);
//        }
//    }
//    return ans;
//}
//
//int main() {
//    // Create a sample binary tree
//    Node* root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
//
//    // Get the level order traversal
//    vector<int> result = levelOrder(root);
//   // Print the result using a traditional for loop
//    cout << "Level Order Traversal: ";
//    for (size_t i = 0; i < result.size(); i++) {
//        cout << result[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}
