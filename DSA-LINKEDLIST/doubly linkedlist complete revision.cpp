//#include <iostream>
//using namespace std;
//// Definition of a Node in the doubly linked list
//struct Node {
//    int data;
//    Node* next;
//    Node* prev;
//
//    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
//};
//
//// Definition of the DoublyLinkedList class
//class DoublyLinkedList {
//private:
//    Node* head;
//    Node* tail;
//
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
//    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
//
//    ~DoublyLinkedList() {
//        clear();
//    }
//
//    // Insert at the beginning of the list
//    void insertAtFirst(int value) {
//        Node* newNode = new Node(value);
//        if (head == nullptr) {
//            head = tail = newNode;
//        }
//        else {
//            newNode->next = head;
//            head->prev = newNode;
//            head = newNode;
//        }
//    }
//
//    // Insert at the end of the list
//    void insertAtLast(int value) {
//        Node* newNode = new Node(value);
//        if (tail == nullptr) {
//            head = tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            newNode->prev = tail;
//            tail = newNode;
//        }
//    }
//
//    void insertAtPosition(int value, int position) {
//        if (position < 1) {
//            cout << "Out of bounds" << endl;
//            return;
//        }
//        if (position == 1) {
//            insertAtFirst(value);
//            return;
//        }
//
//        Node* newNode = new Node(value);
//        Node* temp = head;
//        int count = 1;
//
//        while (count < position - 1 && temp != nullptr) {
//            temp = temp->next;
//            count++;
//        }
//
//        // Check if temp is null, meaning we are inserting at the end
//        if (temp == nullptr) {
//            delete newNode;  // Avoid memory leak
//            insertAtLast(value);
//            return;
//        }
//
//        // Now insert newNode after temp
//        newNode->next = temp->next;
//        newNode->prev = temp;
//
//        if (temp->next != nullptr) {
//            temp->next->prev = newNode;
//        }
//        temp->next = newNode;
//    }
// 
//   
//
//    // Delete at the beginning of the list
//    void deleteAtFirst() {
//        if (head == nullptr) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        head = head->next;
//        if (head != nullptr) {
//            head->prev = nullptr;
//        }
//        else {
//            tail = nullptr;
//        }
//        delete temp;
//    }
//
//    // Delete at the end of the list
//    void deleteAtLast() {
//        if (tail == nullptr) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        Node* temp = tail;
//        tail = tail->prev;
//        if (tail != nullptr) {
//            tail->next = nullptr;
//        }
//        else {
//            head = nullptr;
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
//        Node* nodeToDelete = getNodeAt(position);
//        if (nodeToDelete == nullptr) {
//            cout << "Position out of bounds!" << endl;
//            return;
//        }
//        if (nodeToDelete->prev != nullptr) {
//            nodeToDelete->prev->next = nodeToDelete->next;
//        }
//        if (nodeToDelete->next != nullptr) {
//            nodeToDelete->next->prev = nodeToDelete->prev;
//        }
//        if (nodeToDelete == tail) {
//            tail = nodeToDelete->prev;
//        }
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
//        Node* temp = nullptr;
//        Node* current = head;
//        while (current != nullptr) {
//            temp = current->prev;
//            current->prev = current->next;
//            current->next = temp;
//            current = current->prev;
//        }
//        if (temp != nullptr) {
//            head = temp->prev;
//        }
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
//    DoublyLinkedList list;
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
//
//
//
//
//
//
