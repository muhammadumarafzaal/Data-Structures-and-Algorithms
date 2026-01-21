//#include <iostream>
//using namespace std;
//class Node {
//public:
//    int fileId;
//    Node* next;
//    Node(int fileId) : fileId(fileId), next(nullptr) {}
//};
//class Cache {
//private:
//    Node* head;
//    Node* tail;
//    int size;
//public:
//    Cache() : head(nullptr), tail(nullptr), size(0) {}
//    void addFileId(int fileId) {
//        Node* newNode = new Node(fileId);
//        if (head == nullptr) {
//            head = newNode;
//            tail = newNode;
//            newNode->next = head;
//        }
//        else {
//            tail->next = newNode;
//            newNode->next = head;
//            tail = newNode;
//        }
//        size++;
//    }
//    void moveToFront(int fileId) {
//        if (head == nullptr) return;
//        Node* current = head;
//        Node* previous = nullptr;
//        while (current->next != head && current->fileId != fileId) {
//            previous = current;
//            current = current->next;
//        }
//        if (current->fileId == fileId) {
//            if (current == head) return;
//            previous->next = current->next;
//            current->next = head;
//            head = current;
//            tail->next = head;
//        }
//    }
//    void printList() {
//        if (head == nullptr) {
//            cout << "Cache is empty." << endl;
//            return;
//        }
//        Node* current = head;
//        cout << "Current cache state: ";
//        do {
//            cout << current->fileId << " ";
//            current = current->next;
//        } while (current != head);
//        cout << endl;
//    }
//};
//int main() {
//    Cache cache;
//    int numFiles;
//    cout << "Enter the number of file IDs to add to the cache: ";
//    cin >> numFiles;
//    for (int i = 0; i < numFiles; ++i) {
//        int fileId;
//        cout << "Enter file ID " << (i + 1) << ": ";
//        cin >> fileId;
//        cache.addFileId(fileId);
//    }
//    cache.printList();
//    char continueAccess;
//    do {
//        int fileId;
//        cout << "Enter the file ID to access and move to the front: ";
//        cin >> fileId;
//        cache.moveToFront(fileId);
//        cache.printList();
//        cout << "Do you want to access another file? (y/n): ";
//        cin >> continueAccess;
//    } while (continueAccess == 'y' || continueAccess == 'Y');
//    return 0;
//}
