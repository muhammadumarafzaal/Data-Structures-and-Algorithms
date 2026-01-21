//#include<iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* left, * right;
//    Node(int val) {
//        data = val;
//        left = right = NULL;
//    }
//};
//
//Node* Insertion(Node* root, int target) {
//    if (!root) {
//        Node* newnode = new Node(target);
//        return newnode;
//    }
//    if (target < root->data) {
//        root->left = Insertion(root->left, target);
//    }
//    else {
//        root->right = Insertion(root->right, target);
//    }
//    return root;
//}
//
//void inorder(Node* root) {
//    if (!root)
//        return;
//    // Left side
//    inorder(root->left);
//    // Node
//    cout << root->data << " ";
//    // Right side
//    inorder(root->right);
//}
//
//bool search(Node* root, int target) {
//    if (!root)
//        return false;
//    if (root->data == target) {
//        return true;
//    }
//    if (target < root->data)
//        return search(root->left, target);
//    else
//        return search(root->right, target);
//}
//
//Node* deleteNode(Node* root, int target) {
//    if (!root)
//        return NULL;
//
//    if (target < root->data) {
//        root->left = deleteNode(root->left, target);
//    }
//    else if (target > root->data) {
//        root->right = deleteNode(root->right, target);
//    }
//    else { // Node found
//        if (!root->left && !root->right) {
//            delete root;
//            return NULL;
//        }
//        else if (!root->left) {
//            Node* temp = root->right;
//            delete root;
//            return temp;
//        }
//        else if (!root->right) {
//            Node* temp = root->left;
//            delete root;
//            return temp;
//        }
//
//        // Node with two children
//        Node* child = root->right;
//        while (child->left != NULL) {//go for extreeme left node
//            child = child->left;
//        }
//        root->data = child->data;
//        root->right = deleteNode(root->right, child->data);
//    }
//    return root;
//}
//
//int main() {
//    int arr[6] = { 3,7,4,1,6,8 };
//    Node* root = NULL;
//    for (int i = 0; i < 6; i++) {
//        root = Insertion(root, arr[i]);
//    }
//    cout << search(root, 9) << endl;
//
//    cout << "Inorder traversal before deletion: " << endl;
//    inorder(root);
//    cout << endl;
//
//    deleteNode(root, 4);
//    cout << "Inorder traversal after deletion: " << endl;
//    inorder(root);
//    cout << endl;
//
//    return 0;
//}
