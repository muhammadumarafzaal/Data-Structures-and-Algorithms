//#include <iostream>
//using namespace std;
//// Definition of a Node in the circular singly linked list
//struct Node {
//    int data;
//    Node* next;
//
//    Node(int value) : data(value), next(nullptr) {}
//};
//// Definition of the CircularSinglyLinkedList class
//class CircularSinglyLinkedList {
//private:
//    Node* head;
//
//    // Utility function to find the node at a specific position
//    Node* getNodeAt(int position) const {
//        if (head == nullptr) return nullptr;
//        Node* temp = head;
//        int count = 0;
//        do {
//            if (count == position) return temp;
//            temp = temp->next;
//            count++;
//        } while (temp != head);
//        return nullptr;
//    }
//
//public:
//    CircularSinglyLinkedList() : head(nullptr) {}
//
//    ~CircularSinglyLinkedList() {
//        clear();
//    }
//
//    // Insert at the beginning of the list
//    void insertAtFirst(int value) {
//        Node* newNode = new Node(value);
//        if (head == nullptr) {
//            head = newNode;
//            newNode->next = head;
//        }
//        else {
//            newNode->next = head;
//            Node* temp = head;
//            while (temp->next != head) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//            head = newNode;
//        }
//    }
//
//    // Insert at the end of the list
//    void insertAtLast(int value) {
//        Node* newNode = new Node(value);
//        if (head == nullptr) {
//            head = newNode;
//            newNode->next = head;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != head) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//            newNode->next = head;
//        }
//    }
//
//    // Insert at a specific position
//    void insertAtPosition(int value, int position) {
//        if (position < 0) {
//            cout << "Invalid position!" << endl;
//            return;
//        }
//        if (position == 0) {
//            insertAtFirst(value);
//            return;
//        }
//        Node* newNode = new Node(value);
//        Node* prevNode = getNodeAt(position - 1);
//        if (prevNode == nullptr) {
//            cout << "Position out of bounds!" << endl;
//            delete newNode;
//            return;
//        }
//        newNode->next = prevNode->next;
//        prevNode->next = newNode;
//    }
//
//    // Delete at the beginning of the list
//    void deleteAtFirst() {
//        if (head == nullptr) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        if (head->next == head) {
//            head = nullptr;
//        }
//        else {
//            Node* last = head;
//            while (last->next != head) {
//                last = last->next;
//            }
//            head = head->next;
//            last->next = head;
//        }
//        delete temp;
//    }
//
//    // Delete at the end of the list
//    void deleteAtLast() {
//        if (head == nullptr) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        if (head->next == head) {
//            head = nullptr;
//        }
//        else {
//            Node* prev = nullptr;
//            while (temp->next != head) {
//                prev = temp;
//                temp = temp->next;
//            }
//            if (prev != nullptr) {
//                prev->next = head;
//            }
//        }
//        delete temp;
//    }
//
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
//        if (prevNode == nullptr || prevNode->next == head) {
//            cout << "Position out of bounds!" << endl;
//            return;
//        }
//        Node* nodeToDelete = prevNode->next;
//        prevNode->next = nodeToDelete->next;
//        if (nodeToDelete == head) {
//            head = nodeToDelete->next;
//        }
//        delete nodeToDelete;
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
//        if (head == nullptr || head->next == head) {
//            return; // Already sorted
//        }
//        bool swapped;
//        do {
//            swapped = false;
//            Node* temp = head;
//            do {
//                if (temp->data > temp->next->data) {
//                    swap(temp->data, temp->next->data);
//                    swapped = true;
//                }
//                temp = temp->next;
//            } while (temp->next != head);
//        } while (swapped);
//    }
//
//    // Reverse the list
//    void reverseList() {
//        if (head == nullptr || head->next == head) {
//            return; // Empty or single element list
//        }
//        Node* prev = nullptr;
//        Node* current = head;
//        Node* next = nullptr;
//        Node* tail = head;
//
//        do {
//            next = current->next;
//            current->next = prev;
//            prev = current;
//            current = next;
//        } while (current != head);
//
//        head->next = prev;
//        head = prev;
//    }
//
//    // Find a number in the list
//    bool findNumber(int value) const {
//        if (head == nullptr) return false;
//        Node* temp = head;
//        do {
//            if (temp->data == value) {
//                return true;
//            }
//            temp = temp->next;
//        } while (temp != head);
//        return false;
//    }
//
//    // Print the list
//    void printList() const {
//        if (head == nullptr) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        do {
//            cout << temp->data << " ";
//            temp = temp->next;
//        } while (temp != head);
//        cout << endl;
//    }
//};
//
//// Main function with menu-driven interface
//int main() {
//    CircularSinglyLinkedList list;
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
//            list.insertAtPosition(value, position);
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
////~CircularLinkedList() {
////    if (head) {
////        Node* current = head;
////        Node* nextNode;
////        do {
////            nextNode = current->next;
////            delete current;
////            current = nextNode;
////        } while (current != head);
////    }
////}