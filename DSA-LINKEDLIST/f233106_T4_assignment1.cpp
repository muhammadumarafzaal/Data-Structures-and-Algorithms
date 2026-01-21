//#include <iostream>
//#include <limits> // For input validation
//using namespace std;
//struct Node {
//    int data;
//    Node* next;
//    Node* prev;
//    // Pointer to child list
//    Node* child;  
//    // Constructor for a new node
//    Node(int val) {
//        data = val;
//        next = nullptr;
//        prev = nullptr;
//        child = nullptr;
//    }
//};
//// Function to flatten the doubly linked list
//Node* flatten(Node* head) {
//    if (!head) return head;
//
//    Node* current = head;
//    while (current) {
//        // If the current node has a child, we need to flatten that part
//        if (current->child) {
//            // Find the tail of the child list
//            Node* childTail = current->child;
//            while (childTail->next) {
//                childTail = childTail->next;
//            }
//            // Attach the child list after the current node and before the next node
//            if (current->next) {
//                current->next->prev = childTail;
//            }
//            childTail->next = current->next;
//            current->next = current->child;
//            current->child->prev = current;
//            // Set the child pointer to null after flattening
//            current->child = nullptr;
//        }
//        current = current->next;
//    }
//
//    return head;
//}
//void printList(Node* head) {
//    if (!head) {
//        cout << "The list is empty.\n";
//        return;
//    }
//
//    Node* current = head;
//    cout << "List: ";
//    while (current) {
//        cout << current->data << " ";
//        current = current->next;
//    }
//    cout << endl;
//}
//
//// Function to insert nodes at the end of the doubly linked list
//Node* insert(Node* head, int data) {
//    Node* newNode = new Node(data);
//    if (!head) return newNode;
//
//    Node* current = head;
//    while (current->next) {
//        current = current->next;
//    }
//
//    current->next = newNode;
//    newNode->prev = current;
//    return head;
//}
//// Function to create a child list for a node
//void createChildList(Node* parent)
//{
//    int numChildren;
//    while (true) {
//        cout << "Enter the number of children to add to node " << parent->data << ": ";
//        cin >> numChildren;
//
//        if (cin.fail() || numChildren < 0) {
//            cout << "Invalid input. Please enter a non-negative integer.\n";
//            cin.clear(); 
//            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//        }
//        else {
//            break; 
//        }
//    }
//    if (numChildren == 0) return;
//    cout << "Enter the values of the children:\n";
//    for (int i = 0; i < numChildren; ++i)
//    {
//        int childData;
//        while (true) {
//            cout << "Child " << (i + 1) << ": ";
//            cin >> childData;
//
//            if (cin.fail()) {
//                cout << "Invalid input. Please enter an integer value.\n";
//                cin.clear();
//                cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            }
//            else {
//                break;
//            }
//        }
//
//        parent->child = insert(parent->child, childData);
//    }
//}
//Node* findNode(Node* head, int data) {
//    Node* current = head;
//    while (current && current->data != data) {
//        current = current->next;
//    }
//    return current;
//}
//int getMenuChoice() {
//    int choice;
//    while (true) {
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (cin.fail() || choice < 1 || choice > 5) {
//            cout << "Invalid input. Please enter a number between 1 and 5.\n";
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        }
//        else {
//            break;
//        }
//    }
//    return choice;
//}
//int getNodeData(const string& prompt) {
//    int data;
//    while (true) {
//        cout << prompt;
//        cin >> data;
//
//        if (cin.fail()) {
//            cout << "Invalid input. Please enter an integer value.\n";
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        }
//        else {
//            break;
//        }
//    }
//    return data;
//}
//int main() {
//    Node* head = nullptr;
//    int choice;
//
//    do {
//        cout << "||MENU BELOW||\n";
//        cout << "1.ADD NODE AT TAIL\n";
//        cout << "2. CREATE CHILD LIST FOR PARTICULAR NODE\n";
//        cout << "3. FLATTEN THE LIST\n";
//        cout << "4. PRINT THE LIST\n";
//        cout << "5. Exit......\n";
//        choice = getMenuChoice(); 
//        switch (choice) {
//        case 1: {
//            int data = getNodeData("Enter the value for the new node: ");
//            head = insert(head, data);
//            break;
//        }
//        case 2: {
//            int parentData = getNodeData("Enter the value of the parent node: ");
//
//            Node* parent = findNode(head, parentData);
//            if (parent) {
//                createChildList(parent);
//            }
//            else {
//                cout << "Node with value " << parentData << " not found.\n";
//            }
//            break;
//        }
//        case 3: {
//            if (head) {
//                head = flatten(head);
//                cout << "The list has been flattened.\n";
//            }
//            else {
//                cout << "The list is empty. Nothing to flatten.\n";
//            }
//            break;
//        }
//        case 4: {
//            printList(head);
//            break;
//        }
//        case 5:
//            cout << "Exiting...\n";
//            break;
//        }
//    } while (choice != 5);
//
//    return 0;
//}
