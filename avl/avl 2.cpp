//#include <iostream>
//#include <string>
//using namespace std;
//struct TreeNode {
//    string courseCode;
//    int studentId;
//    float grade;
//    TreeNode* left;
//    TreeNode* right;
//    int height;
//
//    TreeNode(string code, int id, float g)
//        : courseCode(code), studentId(id), grade(g), left(nullptr), right(nullptr), height(1) {}
//};
//class AVLTree {
//private:
//    TreeNode* root;
//
//    int getHeight(TreeNode* node) {
//        return node ? node->height : 0;
//    }
//
//    int getBalance(TreeNode* node) {
//        return node ? getHeight(node->left) - getHeight(node->right) : 0;
//    }
//
//    TreeNode* rightRotate(TreeNode* y) {
//        TreeNode* x = y->left;
//        TreeNode* T2 = x->right;
//
//        x->right = y;
//        y->left = T2;
//
//        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
//        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
//
//        return x;
//    }
//
//    TreeNode* leftRotate(TreeNode* x) {
//        TreeNode* y = x->right;
//        TreeNode* T2 = y->left;
//
//        y->left = x;
//        x->right = T2;
//
//        x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
//        y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
//
//        return y;
//    }
//
//    TreeNode* insert(TreeNode* node, string courseCode, int studentId, float grade) {
//        if (node == nullptr) {
//            return new TreeNode(courseCode, studentId, grade);
//        }
//
//        if (studentId < node->studentId) {
//            node->left = insert(node->left, courseCode, studentId, grade);
//        }
//        else if (studentId > node->studentId) {
//            node->right = insert(node->right, courseCode, studentId, grade);
//        }
//        else {
//            return node;
//        }
//
//        node->height = 1 + max(getHeight(node->left), getHeight(node->right));
//
//        int balance = getBalance(node);
//
//        if (balance > 1 && studentId < node->left->studentId) {
//            return rightRotate(node);
//        }
//
//        if (balance < -1 && studentId > node->right->studentId) {
//            return leftRotate(node);
//        }
//
//        if (balance > 1 && studentId > node->left->studentId) {
//            node->left = leftRotate(node->left);
//            return rightRotate(node);
//        }
//
//        if (balance < -1 && studentId < node->right->studentId) {
//            node->right = rightRotate(node->right);
//            return leftRotate(node);
//        }
//
//        return node;
//    }
//
//    TreeNode* search(TreeNode* node, string courseCode, int studentId) {
//        if (node == nullptr || (node->courseCode == courseCode && node->studentId == studentId)) {
//            return node;
//        }
//
//        if (studentId < node->studentId) {
//            return search(node->left, courseCode, studentId);
//        }
//        else {
//            return search(node->right, courseCode, studentId);
//        }
//    }
//
//    void inorderTraversal(TreeNode* node) {
//        if (node == nullptr) {
//            return;
//        }
//
//        inorderTraversal(node->left);
//        cout << "Course Code: " << node->courseCode
//            << ", Student ID: " << node->studentId
//            << ", Grade: " << node->grade << endl;
//        inorderTraversal(node->right);
//    }
//
//public:
//    AVLTree() : root(nullptr) {}
//
//    void insert(string courseCode, int studentId, float grade) {
//        root = insert(root, courseCode, studentId, grade);
//    }
//
//    void searchAndUpdate(string courseCode, int studentId, float newGrade) {
//        TreeNode* node = search(root, courseCode, studentId);
//        if (node) {
//            node->grade = newGrade;
//            cout << "Grade updated for Course Code: " << courseCode
//                << ", Student ID: " << studentId
//                << " to " << newGrade << endl;
//        }
//        else {
//            cout << "Record not found." << endl;
//        }
//    }
//
//    void display() {
//        inorderTraversal(root);
//    }
//};
//
//int main() {
//    AVLTree avl;
//
//    avl.insert("PF", 10, 85.5);
//    avl.insert("COAL", 20, 92.0);
//    avl.insert("OOP", 30, 78.5);
//    avl.insert("DATA", 15, 68.0);
//
//    avl.display();
//
//    cout << "Searching and updating grade..." << endl;
//    avl.searchAndUpdate("COAL", 20, 88.5);
//
//    avl.display();
//
//    return 0;
//}
