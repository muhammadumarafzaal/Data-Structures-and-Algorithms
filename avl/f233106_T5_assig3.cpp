//#include <iostream>
//#include <string>
//using namespace std;
//struct Node {
//    int id;
//    int height;
//    string name;
//    string dept;
//    Node* left;
//    Node* right;
//    Node(int id, string name, string dept)
//        : id(id), name(name), dept(dept), left(nullptr), right(nullptr), height(1) {}
//};
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
//Node* insert(Node* root, int id, string name, string dept) {
//    if (root == nullptr)
//        return new Node(id, name, dept);
//    if (id < root->id)
//        root->left = insert(root->left, id, name, dept);
//    else if (id > root->id)
//        root->right = insert(root->right, id, name, dept);
//    else
//        return root;  // Duplicate IDs are not allowed
//
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    int balanceFactor = Balance(root);
//
//    if (balanceFactor > 1 && id < root->left->id)
//        return rightRotate(root);
//    if (balanceFactor < -1 && id > root->right->id)
//        return leftRotate(root);
//    if (balanceFactor > 1 && id > root->left->id) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root);
//    }
//    if (balanceFactor < -1 && id < root->right->id) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root);
//    }
//    return root;
//}
//// Function to update the department of a student
//bool updateDepartment(Node* root, int id, Node*& temp) {
//    if (root == nullptr)
//        return false;
//    if (id < root->id)
//        return updateDepartment(root->left, id, temp);
//    else if (id > root->id)
//        return updateDepartment(root->right, id, temp);
//    int choice;
//    cout << "Enter the new department for " << root->name << ":\n";
//    cout << "1. CS\n2. SE\n3. EE\n4. S&H\n5. FSM\n";
//    cin >> choice;
//    string newDept;
//    int remDigits = root->id % 1000;
//    switch (choice) {
//    case 1: newDept = "CS"; root->id = 1000 + remDigits;
//        break;
//    case 2: newDept = "SE"; root->id = 2000 + remDigits; 
//        break;
//    case 3: newDept = "EE"; root->id = 3000 + remDigits; 
//        break;
//    case 4: newDept = "S&H"; root->id = 4000 + remDigits;
//        break;
//    case 5: newDept = "FSM"; root->id = 5000 + remDigits;
//        break;
//    default: 
//        return false;
//    }
//    cout << "The new department is " << newDept << " and the new ID is " << root->id << endl;
//    root->dept = newDept;
//    temp = insert(temp, root->id, root->name, newDept);
//    return true;
//}
////inorder traversal
//void printStudentInfo(Node* root) {
//    if (root == nullptr)
//        return;
//    printStudentInfo(root->left);
//    cout << "Student Info:\n";
//    cout << "Name: " << root->name << "\n";
//    cout << "Department: " << root->dept << "\n";
//    cout << "ID: " << root->id << "\n";
//    printStudentInfo(root->right);
//}
//int main() {
//    Node* root = nullptr;
//    while (true) {
//        int choice;
//        cout << "1. Add a student\n2. Update student department\n3. Print student information\n4. Exit\n";
//        cin >> choice;
//        switch (choice) {
//        case 1: {
//            string name;
//            int id;
//            cout << "Enter student name: ";
//            cin.ignore();
//            getline(cin, name);
//            cout << "Enter student ID: ";
//            cin >> id;
//            int deptPrefix = id / 1000;
//            string dept;
//            switch (deptPrefix) {
//            case 1: dept = "CS"; break;
//            case 2: dept = "SE"; break;
//            case 3: dept = "EE"; break;
//            case 4: dept = "S&H"; break;
//            case 5: dept = "FSM"; break;
//            default: dept = "Unknown"; break;
//            }
//            cout << "The department is " << dept << endl;
//            root = insert(root, id, name, dept);
//            break;
//        }
//        case 2: {
//            int id;
//            cout << "Enter student ID to update department: ";
//            cin >> id;
//            if (!updateDepartment(root, id, root))
//                cout << "Student not found in the database.\n";
//            break;
//        }
//        case 3:
//            cout << "Enrolled students:\n";
//            printStudentInfo(root);
//            break;
//        case 4:
//            cout << "Thank you for using the system. Goodbye!\n";
//            return 0;
//        default:
//            cout << "Invalid choice. Try again.\n";
//        }
//    }
//}
