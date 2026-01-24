#include <iostream>
using namespace std;

class Node {
public: // Make members public to access them
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
//NLR
void preOrder(Node*root) {
    //Base case
    if (root == NULL)
        return;
    cout << root->data <<" ";
    preOrder(root->left);
    preOrder(root->right);
}
//LNR
void inOrder(Node*root) {
    //Base case
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
//LRN
void postOrder(Node* root) {
    //Base case
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
Node* BinaryTree() {
    int x;
    cout << "Enter the root value (or -1 for no node):" << endl;
    cin >> x;

    // base case
    if (x == -1) {
        return nullptr;
    }

    Node* temp = new Node(x);

    // left side create
    cout << "Enter the left child of " << x << ":" << endl;
    temp->left = BinaryTree();

    // right side create
    cout << "Enter the right child of " << x << ":" << endl;
    temp->right = BinaryTree();

    return temp;
}

int main() {
    cout << "Enter the root node:" << endl;
    Node* root = BinaryTree();
    //Tree creation code
    //Preorder
    cout << "Pre order: ";
    preOrder(root);
    //Inorder
    cout << "\nIN order: ";
    inOrder(root);
    //postorder
    cout << "\nPost order: ";
    postOrder(root);


    // Optional: You can add a function here to display the tree or check if it was created correctly

    return 0;
}
