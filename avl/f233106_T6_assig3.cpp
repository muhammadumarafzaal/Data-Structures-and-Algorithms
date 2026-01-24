//#include <iostream>
//using namespace std;
//struct Node {
//    int value;
//    int height;
//    Node* left;
//    Node* right;
//    Node(int val) : value(val), height(1), left(nullptr), right(nullptr) {}
//};
//
//int getHeight(Node* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return root->height;
//}
//int Balance(Node* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return getHeight(root->left) - getHeight(root->right);
//}
//Node* leftRotate(Node* root) {
//    Node* child = root->right;
//    Node* childLeft = child->left;
//    child->left = root;
//    root->right = childLeft;
//    //check height for becasue we rotated it so check height for root and child
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
//    return child;
//}
//Node* rightRotate(Node* root) {
//    Node* child = root->left;
//    Node* childRight = child->right;
//    child->right = root;
//    root->left = childRight;
//    //check height for becasue we rotated it so check height for root and child
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
//    return child;
//}
//Node* insert(Node* root, int value) {
//    if (!root) return new Node(value);
//
//    if (value < root->value)
//        root->left = insert(root->left, value);
//    else if (value > root->value)
//        root->right = insert(root->right, value);
//    else
//        return root;  
//
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    int balanceFactor = Balance(root);
//
//    if (balanceFactor > 1 && value < root->left->value)
//        return rightRotate(root);
//    if (balanceFactor < -1 && value > root->right->value)
//        return leftRotate(root);
//    if (balanceFactor > 1 && value > root->left->value) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root);
//    }
//    if (balanceFactor < -1 && value < root->right->value) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root);
//    }
//
//    return root;
//}
//Node* getMinValueNode(Node* root) {
//    Node* current = root;
//    while (current->left)
//        current = current->left;
//    return current;
//}
//Node* deleteNode(Node* root, int value) {
//    if (!root) return root;
//
//    if (value < root->value)
//        root->left = deleteNode(root->left, value);
//    else if (value > root->value)
//        root->right = deleteNode(root->right, value);
//    else {
//        if (!root->left || !root->right) {
//            Node* temp = root->left ? root->left : root->right;
//            if (!temp) {
//                temp = root;
//                root = nullptr;
//            }
//            else
//                *root = *temp;
//            delete temp;
//        }
//        else {
//            Node* temp = getMinValueNode(root->right);
//            root->value = temp->value;
//            root->right = deleteNode(root->right, temp->value);
//        }
//    }
//
//    if (!root) return root;
//
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    int balanceFactor = Balance(root);
//
//    if (balanceFactor > 1 && Balance(root->left) >= 0)
//        return rightRotate(root);
//    if (balanceFactor > 1 && Balance(root->left) < 0) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root);
//    }
//    if (balanceFactor < -1 && Balance(root->right) <= 0)
//        return leftRotate(root);
//    if (balanceFactor < -1 && Balance(root->right) > 0) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root);
//    }
//
//    return root;
//}
//void inOrderTraversal(Node* root) {
//    if (!root) return;
//    inOrderTraversal(root->left);
//    cout << root->value << " ";
//    inOrderTraversal(root->right);
//}
//int countNodes(Node* root) {
//    if (!root) return 0;
//    return 1 + countNodes(root->left) + countNodes(root->right);
//}
//void findKthLargest(Node* root, int& k, int& result) {
//    if (!root || k <= 0) return;
//    findKthLargest(root->right, k, result);
//    if (--k == 0) {
//        result = root->value;
//        return;
//    }
//    findKthLargest(root->left, k, result);
//}
//int main() {
//    Node* root = nullptr;
//    int n, value, k;
//
//    cout << "Enter the number of elements: ";
//    cin >> n;
//    cout << "Enter the elements:\n";
//    for (int i = 0; i < n; ++i) {
//        cin >> value;
//        root = insert(root, value);
//    }
//
//    cout << "Enter k to delete the kth largest value: ";
//    cin >> k;
//
//    int totalNodes = countNodes(root);
//    if (k > totalNodes) {
//        cout << "k is greater than the number of nodes in the tree.\n";
//        return 1;
//    }
//
//    int kthLargestValue = -1;
//    findKthLargest(root, k, kthLargestValue);
//    root = deleteNode(root, kthLargestValue);
//
//    cout << "Tree after deleting the " << k << "th largest value:\n";
//    inOrderTraversal(root);
//    cout << endl;
//
//    return 0;
//}
