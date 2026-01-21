//#include <iostream>
//using namespace std;
//// Definition of a Node in the linked list
//struct Node {
//    int data;
//    Node* next;
//    Node(int value) : data(value), next(nullptr) {}
//};
//// Definition of the SinglyLinkedList class
//class SinglyLinkedList {
//private:
//    Node* head;
//    // Utility function to find the node at a specific position
//    Node* getNodeAt(int position) const {
//        Node* temp = head;
//        int count = 0;
//        while (temp != nullptr && count < position) {
//            temp = temp->next;
//            count++;
//        }
//        return (count == position) ? temp : nullptr;
//    }
//
//public:
//    SinglyLinkedList() : head(nullptr) {}
//
//    ~SinglyLinkedList() {
//        clear();
//    }
//    // Insert at the beginning of the list
//    void insertAtFirst(int value) {
//        Node* newNode = new Node(value);
//        newNode->next = head;
//        head = newNode;
//    }
//    // Insert at the end of the list
//    void insertAtLast(int value) {
//        Node* newNode = new Node(value);
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != nullptr) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//    // Insert at a specific position
//    void InsertAtPosition(int value, int position) {
//        // Handle invalid position cases
//        if (position < 1) {
//            cout << "Invalid position!" << endl;
//            return;
//        }
//
//        // Special case for inserting at the first position
//        if (position == 1) {
//            insertAtFirst(value);
//            return;
//        }
//
//        // Create a new node
//        Node* newNode = new Node(value);
//
//        // Traverse the list to find the position to insert
//        Node* temp = head;
//        int count = 1;
//        while (count < position - 1) {
//            if (temp == nullptr) {
//                cout << "Position out of bounds!" << endl;
//                delete newNode;
//                return;
//            }
//            temp = temp->next;
//            count++;
//        }
//
//        // Handle special case for inserting at the last position
//        if (temp->next == nullptr && count == position - 1) {
//            insertAtLast(value);
//            return;
//        }
//
//        // Insert the new node
//        newNode->next = temp->next;
//        temp->next = newNode;
//    }
//
//    // Delete at the beginning of the list
//    void deleteAtFirst() {
//        if (head == nullptr) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//        temp=nullptr;
//    }
//
//    // Delete at the end of the list
//    void deleteAtLast() {
//        if (head == nullptr) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        if (head->next == nullptr) {
//            delete head;
//            head = nullptr;
//            return;
//        }
//        Node* temp = head;
//        while (temp->next->next != nullptr) {
//            temp = temp->next;
//        }
//        delete temp->next;
//        temp->next = nullptr;
//    }
//    // Delete at a specific position
//    void deleteAtPosition(int position) {
//        if (position < 0 || head == nullptr) {
//            cout << "Invalid position or empty list!" << endl;
//            return;
//        }
//        if (position == 0) {
//            deleteAtFirst();
//            return;
//        }
//        Node* prevNode = getNodeAt(position - 1);
//        if (prevNode == nullptr || prevNode->next == nullptr) {
//            cout << "Position out of bounds!" << endl;
//            return;
//        }
//        Node* temp = prevNode->next;
//        prevNode->next = temp->next;
//        delete temp;
//    }
//
//    // Delete all nodes in the list
//    void clear() {
//        while (head != nullptr) {
//            deleteAtFirst();
//        }
//    }
//
//    // Sort the list in ascending order (using bubble sort)
//    void sortList() {
//        if (head == nullptr || head->next == nullptr) {
//            return; // Already sorted
//        }
//        bool swapped;
//        do {
//            swapped = false;
//            Node* current = head;
//            while (current->next != nullptr) {
//                if (current->data > current->next->data) {
//                    swap(current->data, current->next->data);
//                    swapped = true;
//                }
//                current = current->next;
//            }
//        } while (swapped);
//    }
//
//    // Reverse the list
//    void reverseList() {
//        Node* prev = nullptr;
//        Node* curr = head;
//        Node* next = nullptr;
//        while (curr != nullptr) {
//            next = curr->next;
//            curr->next = prev;
//            prev = curr;
//            curr = next;
//        }
//        head = prev;
//    }
//
//    // Find a number in the list
//    bool findNumber(int value) const {
//        Node* temp = head;
//        while (temp != nullptr) {
//            if (temp->data == value) {
//                return true;
//            }
//            temp = temp->next;
//        }
//        return false;
//    }
//
//    // Print the list
//    void printList() const {
//        Node* temp = head;
//        if (temp == nullptr) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        while (temp != nullptr) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//};
//
//// Main function with menu-driven interface
//int main() {
//    SinglyLinkedList list;
//    int choice, value, position;
//
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Insert at First\n";
//        cout << "2. Insert at Last\n";
//        cout << "3. Insert at Position\n";
//        cout << "4. Delete at First\n";
//        cout << "5. Delete at Last\n";
//        cout << "6. Delete at Position\n";
//        cout << "7. Clear List\n";
//        cout << "8. Sort List\n";
//        cout << "9. Reverse List\n";
//        cout << "10. Find Number\n";
//        cout << "11. Print List\n";
//        cout << "12. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value to insert at first: ";
//            cin >> value;
//            list.insertAtFirst(value);
//            break;
//        case 2:
//            cout << "Enter value to insert at last: ";
//            cin >> value;
//            list.insertAtLast(value);
//            break;
//        case 3:
//            cout << "Enter value to insert and position: ";
//            cin >> value >> position;
//            list.InsertAtPosition(value, position);
//            break;
//        case 4:
//            list.deleteAtFirst();
//            break;
//        case 5:
//            list.deleteAtLast();
//            break;
//        case 6:
//            cout << "Enter position to delete: ";
//            cin >> position;
//            list.deleteAtPosition(position);
//            break;
//        case 7:
//            list.clear();
//            break;
//        case 8:
//            list.sortList();
//            break;
//        case 9:
//            list.reverseList();
//            break;
//        case 10:
//            cout << "Enter number to find: ";
//            cin >> value;
//            if (list.findNumber(value)) {
//                cout << "Number found in the list." << endl;
//            }
//            else {
//                cout << "Number not found in the list." << endl;
//            }
//            break;
//        case 11:
//            list.printList();
//            break;
//        case 12:
//            cout << "Exiting program." << endl;
//            break;
//        default:
//            cout << "Invalid choice. Please try again." << endl;
//        }
//    } while (choice != 12);
//
//    return 0;
//}
