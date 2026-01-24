#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Employee {
    int id;
    string name;
    string position;
    Employee* left;
    Employee* right;

    Employee(int id, string name, string position)
        : id(id), name(name), position(position), left(nullptr), right(nullptr) {}
};

class EmployeeTree {
private:
    Employee* root;

    Employee* insert(Employee* node, int id, string name, string position) {
        if (!node)
            return new Employee(id, name, position);
        if (id < node->id)
            node->left = insert(node->left, id, name, position);
        else if (id > node->id)
            node->right = insert(node->right, id, name, position);
        return node;
    }

    void inOrder(Employee* node) {
        if (node) {
            inOrder(node->left);
            cout << node->id << " " << node->name << " " << node->position << endl;
            inOrder(node->right);
        }
    }

    Employee* deleteNode(Employee* node, int id) {
        if (!node)
            return node;
        if (id < node->id)
            node->left = deleteNode(node->left, id);
        else if (id > node->id)
            node->right = deleteNode(node->right, id);
        else {
            if (!node->left) {
                Employee* temp = node->right;
                delete node;
                return temp;
            }
            else if (!node->right) {
                Employee* temp = node->left;
                delete node;
                return temp;
            }
            Employee* temp = minValueNode(node->right);
            node->id = temp->id;
            node->name = temp->name;
            node->position = temp->position;
            node->right = deleteNode(node->right, temp->id);
        }
        return node;
    }

    Employee* minValueNode(Employee* node) {
        while (node && node->left)
            node = node->left;
        return node;
    }

    void countByPosition(Employee* node, string position, int& count) {
        if (node) {
            if (node->position == position)
                count++;
            countByPosition(node->left, position, count);
            countByPosition(node->right, position, count);
        }
    }

    void updateEmployee(Employee* node, int id, string name, string position) {
        if (node) {
            if (node->id == id) {
                node->name = name;
                node->position = position;
            }
            else if (id < node->id) {
                updateEmployee(node->left, id, name, position);
            }
            else {
                updateEmployee(node->right, id, name, position);
            }
        }
    }

    void findParent(Employee* node, int id, Employee*& parent) {
        if (!node) return;
        if ((node->left && node->left->id == id) || (node->right && node->right->id == id))
            parent = node;
        findParent(node->left, id, parent);
        findParent(node->right, id, parent);
    }

    Employee* findSibling(Employee* node, int id) {
        Employee* parent = nullptr;
        findParent(root, id, parent);
        if (!parent) return nullptr;
        if (parent->left && parent->left->id == id)
            return parent->right;
        return parent->left;
    }

    bool isFull(Employee* node) {
        if (!node)
            return true;
        if (!node->left && !node->right)
            return true;
        if (node->left && node->right)
            return isFull(node->left) && isFull(node->right);
        return false;
    }

    bool isComplete(Employee* node, int index, int numberNodes) {
        if (!node)
            return true;
        if (index >= numberNodes)
            return false;
        return isComplete(node->left, 2 * index + 1, numberNodes) &&
            isComplete(node->right, 2 * index + 2, numberNodes);
    }

    bool isAlmostComplete(Employee* node, int index, int numberNodes) {
        if (!node)
            return true;
        if (index >= numberNodes)
            return false;
        if (!node->left && !node->right)
            return true; // Leaf node
        if (node->left && node->right)
            return isAlmostComplete(node->left, 2 * index + 1, numberNodes) &&
            isAlmostComplete(node->right, 2 * index + 2, numberNodes);
        return false;
    }
     
    int height(Employee* node) {
        if (!node) return 0;
        return 1 + max(height(node->left), height(node->right));
    }

    int countNodes(Employee* node) {
        if (!node) return 0;
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

    void searchAlongPosition(Employee* node, string position) {
        if (!node) return;
        if (node->position == position) {
            cout << node->id << " " << node->name << " " << node->position << endl;
        }
        searchAlongPosition(node->left, position);
        searchAlongPosition(node->right, position);
    }

public:
    EmployeeTree() : root(nullptr) {}

    void insertEmployee(int id, string name, string position) {
        root = insert(root, id, name, position);
    }

    void displayInOrder() {
        inOrder(root);
    }

    void deleteEmployee(int id) {
        root = deleteNode(root, id);
    }

    int countEmployees() {
        return countNodes(root);
    }

    void countEmployeesByPosition(string position) {
        int count = 0;
        countByPosition(root, position, count);
        cout << "Count of employees in position " << position << " : " << count << endl;
    }

    void updateEmployeeInfo(int id, string name, string position) {
        updateEmployee(root, id, name, position);
    }

    void checkFullBinaryTree() {
        cout << (isFull(root) ? "The tree is full." : "The tree is not full.") << endl;
    }

    void checkCompleteBinaryTree() {
        int nodeCount = countEmployees();
        cout << (isComplete(root, 0, nodeCount) ? "The tree is complete." : "The tree is not complete.") << endl;
    }

    void checkAlmostCompleteBinaryTree() {
        int nodeCount = countEmployees();
        cout << (isAlmostComplete(root, 0, nodeCount) ? "The tree is almost complete." : "The tree is not almost complete.") << endl;
    }

    void getHeight() {
        cout << "Height of the tree : " << height(root) << endl;
    }

    void findEmployeeSibling(int id) {
        Employee* sibling = findSibling(root, id);
        if (sibling)
            cout << "Sibling ID : " << sibling->id << endl;
        else
            cout << "No sibling found." << endl;
    }

    void findParent(int id) {
        Employee* parent = nullptr;
        findParent(root, id, parent);
        if (parent)
            cout << "Parent ID : " << parent->id << endl;
        else
            cout << "No parent found or employee does not exist." << endl;
    }

    void searchPosition(string position) {
        cout << "Employees with position " << position << ":\n";
        searchAlongPosition(root, position);
    }

    void menu() {
        int choice, id;
        string name, position;
        while (true) {
            cout << "1. Insert Employee\n"
                << "2. Display Employees\n"
                << "3. Delete Employee\n"
                << "4. Count Employees\n"
                << "5. Count Employees by Position\n"
                << "6. Update Employee Information\n"
                << "7. Check Full Binary Tree\n"
                << "8. Check Complete Binary Tree\n"
                << "9. Check Almost Complete Binary Tree\n"
                << "10. Get Height\n"
                << "11. Find Sibling\n"
                << "12. Find Parent\n"
                << "13. Search Employees by Position\n"
                << "14. Exit\n";

            cout << "Enter choice : ";
            cin >> choice;
            switch (choice) {
            case 1:
                cout << "Enter ID, Name, Position: ";
                cin >> id >> name >> position;
                insertEmployee(id, name, position);
                break;
            case 2:
                displayInOrder();
                break;
            case 3:
                cout << "Enter ID to delete: ";
                cin >> id;
                deleteEmployee(id);
                break;
            case 4:
                cout << "Total Employees : " << countEmployees() << endl;
                break;
            case 5:
                cout << "Enter Position to count : ";
                cin >> position;
                countEmployeesByPosition(position);
                break;
            case 6:
                cout << "Enter ID to update : ";
                cin >> id;
                cout << "Enter new Name and Position: ";
                cin >> name >> position;
                updateEmployeeInfo(id, name, position);
                break;
            case 7:
                checkFullBinaryTree();
                break;
            case 8:
                checkCompleteBinaryTree();
                break;
            case 9:
                checkAlmostCompleteBinaryTree();
                break;
            case 10:
                getHeight();
                break;
            case 11:
                cout << "Enter ID to find sibling : ";
                cin >> id;
                findEmployeeSibling(id);
                break;
            case 12:
                cout << "Enter ID to find parent : ";
                cin >> id;
                findParent(id);
                break;
            case 13:
                cout << "Enter Position to search : ";
                cin >> position;
                searchPosition(position);
                break;
            case 14:
                return;
            default:
                cout << "Invalid choice." << endl;
            }
        }
    }
};

int main() {
    EmployeeTree tree;
    tree.menu();
    return 0;
}
