//#include <iostream>
//#include <string>
//using namespace std;
//struct Node {
//    string data;
//    Node* next;
//
//    Node(const string& data) : data(data), next(nullptr) {}
//};
//
//class Train {
//public:
//    Node* head;
//    Node* tail;
//
//    Train() : head(nullptr), tail(nullptr) {}
//
//    // Insert node at the end of the train
//    void InsertAtEnd(const string& data) {
//        Node* newNode = new Node(data);
//        if (tail == nullptr) {
//            head = tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            tail = newNode;
//        }
//    }
//
//    // Reverse the linked list
//    void Reverse() {
//        Node* prev = nullptr;
//        Node* current = head;
//        Node* next = nullptr;
//        tail = head; // After reversal, the original head will be the new tail
//
//        while (current != nullptr) {
//            next = current->next;
//            current->next = prev;
//            prev = current;
//            current = next;
//        }
//        head = prev;
//    }
//
//    // Print the train
//    void Print() const {
//        Node* temp = head;
//        while (temp != nullptr) {
//            cout << temp->data << " ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//
//    // Join two trains
//    void Join(Train& other) {
//        if (tail == nullptr) {
//            head = other.head;
//            tail = other.tail;
//        }
//        else {
//            tail->next = other.head;
//            if (other.tail != nullptr) {
//                tail = other.tail;
//            }
//        }
//        other.head = other.tail = nullptr; // Clear the other train
//    }
//
//    ~Train() {
//        Node* current = head;
//        while (current != nullptr) {
//            Node* next = current->next;
//            delete current;
//            current = next;
//        }
//    }
//};
//
//void InputTrainData(Train& train, const string& trainName) {
//    int n;
//    cout << "Enter the number of bogies/engines for " << trainName << ": ";
//    cin >> n;
//    cin.ignore(); // Ignore newline character left in buffer
//
//    for (int i = 0; i < n; ++i) {
//        string data;
//        cout << "Enter bogie/engine " << (i + 1) << ": ";
//        getline(cin, data);
//        train.InsertAtEnd(data);
//    }
//}
//
//int main() {
//    Train Train1;
//    Train Train2;
//
//    cout << "Input data for Train1:" << endl;
//    InputTrainData(Train1, "Train1");
//
//    cout << "Input data for Train2:" << endl;
//    InputTrainData(Train2, "Train2");
//
//    cout << "Original Train1: ";
//    Train1.Print();
//    cout << "Original Train2: ";
//    Train2.Print();
//
//    // Reverse Train2
//    Train2.Reverse();
//
//    cout << "Reversed Train2: ";
//    Train2.Print();
//
//    // Join Train2 to Train1
//    Train1.Join(Train2);
//
//    cout << "Train1 after joining Train2: ";
//    Train1.Print();
//
//    return 0;
//}
