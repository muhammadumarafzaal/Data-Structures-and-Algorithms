//#include <iostream>
//#include <string>
//using namespace std;
//struct Node {
//    string rollno;
//    string name;
//    float cgpa;
//    int sem;
//    Node* next;
//
//    Node(float Cgpa, string Name, string roll, int Sem)
//        : cgpa(Cgpa), name(Name), rollno(roll), sem(Sem), next(nullptr) {}
//};
//class Student {
//public:
//    Node* head;
//    Node* tail;
//    Student() : head(nullptr), tail(nullptr) {}
//    //creating a function to check whether the record exists or not
//    bool RecordExists(const string& roll) {
//        Node* temp = head;
//        while (temp) {
//            if (temp->rollno == roll) {
//                return true;
//            }
//            temp = temp->next;
//        }
//        return false;
//    }
//    void InsertAtHead() {
//        string roll, name;
//        float cgpa;
//        int sem;
//        cout << "Enter Roll Number: ";
//        cin >> roll;
//        cout << "Enter Name: ";
//        cin.ignore();
//        getline(cin, name);
//        cout << "Enter CGPA: ";
//        cin >> cgpa;
//        cout << "Enter Semester: ";
//        cin >> sem;
//        if (cgpa < 3.0) {
//            cout << "CGPA is less than 3.0. Record not allowed to be inserted." << endl;
//            return;
//        }
//        if (RecordExists(roll)) {
//            cout << "Record with Roll Number " << roll << " already exists." << endl;
//            return;
//        }
//        Node* newNode = new Node(cgpa, name, roll, sem);
//        if (head == nullptr) {
//            head = tail = newNode;
//        }
//        else {
//            newNode->next = head;
//            head = newNode;
//        }
//    }
//    void InsertAtLast() {
//        string roll, name;
//        float cgpa;
//        int sem;
//        cout << "Enter Roll Number: ";
//        cin >> roll;
//        cout << "Enter Name: ";
//        cin.ignore();
//        getline(cin, name);
//        cout << "Enter CGPA: ";
//        cin >> cgpa;
//        cout << "Enter Semester: ";
//        cin >> sem;
//        if (cgpa < 3.0) {
//            cout << "CGPA is less than 3.0. Record not inserted." << endl;
//            return;
//        }
//        if (RecordExists(roll)) {
//            cout << "Record with Roll Number " << roll << " already exists." << endl;
//            return;
//        }
//        Node* newNode = new Node(cgpa, name, roll, sem);
//        if (tail == nullptr) {
//            head = tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            tail = newNode;
//        }
//    }
//    void InsertAtPosition() {
//        string roll, name;
//        float cgpa;
//        int sem, position;
//        cout << "Enter Roll Number: ";
//        cin >> roll;
//        cout << "Enter Name: ";
//        cin.ignore(); // Ignore newline character left in buffer
//        getline(cin, name);
//        cout << "Enter CGPA: ";
//        cin >> cgpa;
//        cout << "Enter Semester: ";
//        cin >> sem;
//        cout << "Enter Position: ";
//        cin >> position;
//        if (cgpa < 3.0) {
//            cout << "CGPA is less than 3.0. Record not inserted." << endl;
//            return;
//        }
//        if (RecordExists(roll)) {
//            cout << "Record with Roll Number " << roll << " already exists." << endl;
//            return;
//        }
//        Node* newNode = new Node(cgpa, name, roll, sem);
//        if (position == 1) { // Insert at the beginning
//            newNode->next = head;
//            head = newNode;
//            if (tail == nullptr) {
//                tail = newNode;
//            }
//            return;
//        }
//
//        Node* temp = head;
//        int count = 1;
//        while (count < position - 1) {
//            temp = temp->next;
//            count++;
//        }
//        newNode->next = temp->next;
//        temp->next = newNode;
//       
//    }
//    void BubbleSort() {
//        if (head == nullptr) {
//            return;
//        }
//        bool swapped;
//        do {
//            swapped = false;
//            Node* temp = head;
//            while (temp && temp->next) {
//                if (temp->cgpa > temp->next->cgpa) {
//                    swap(temp->cgpa, temp->next->cgpa);
//                    swap(temp->name, temp->next->name);
//                    swap(temp->rollno, temp->next->rollno);
//                    swap(temp->sem, temp->next->sem);
//                    swapped = true;
//                }
//                temp = temp->next;
//            }
//        } while (swapped);
//    }
//    void FindMaxCGPA() {
//        if (head == nullptr) {
//            cout << "No records available." << endl;
//            return;
//        }
//        Node* temp = head;
//        Node* maxNode = head;
//        while (temp != nullptr) {
//            if (temp->cgpa > maxNode->cgpa) {
//                maxNode = temp;
//            }
//            temp = temp->next;
//        }
//        cout << "Student with Maximum CGPA: " << endl;
//        cout << "Roll Number: " << maxNode->rollno << ", "
//            << "Name: " << maxNode->name << ", "
//            << "CGPA: " << maxNode->cgpa << ", "
//            << "Semester: " << maxNode->sem << endl;
//    }
//    void SearchRecord() {
//        string roll;
//        cout << "Enter Roll Number to Search: ";
//        cin >> roll;
//
//        Node* temp = head;
//        while (temp) {
//            if (temp->rollno == roll) {
//                cout << "Record Found: " << endl;
//                cout << "Roll Number: " << temp->rollno << ", "
//                    << "Name: " << temp->name << ", "
//                    << "CGPA: " << temp->cgpa << ", "
//                    << "Semester: " << temp->sem << endl;
//                return;
//            }
//            temp = temp->next;
//        }
//        cout << "Record with Roll Number " << roll << " not found." << endl;
//    }
//    void PrintList() const {
//        Node* temp = head;
//        while (temp != nullptr) {
//            cout << "Roll Number: " << temp->rollno << ", "
//                << "Name: " << temp->name << ", "
//                << "CGPA: " << temp->cgpa << ", "
//                << "Semester: " << temp->sem << endl;
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//    ~Student() {
//        Node* current = head;
//        while (current != nullptr) {
//            Node* next = current->next;
//            delete current;
//            current = next;
//        }
//        cout << "Deleting Successfully" << endl;
//    }
//};
//
//int main() {
//    Student s;
//    int choice;
//    bool flag = true;
//    while (flag) {
//        cout << "Menu:" << endl;
//        cout << "1. Insert Record at Head" << endl;
//        cout << "2. Insert Record at Last" << endl;
//        cout << "3. Insert Record at a Specific Position" << endl;
//        cout << "4. Bubble Sort Records by CGPA" << endl;
//        cout << "5. Find Student with Maximum CGPA" << endl;
//        cout << "6. Search for a Student Record" << endl;
//        cout << "7. Print All Student Records" << endl;
//        cout << "8. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            s.InsertAtHead();
//            break;
//        case 2:
//            s.InsertAtLast();
//            break;
//        case 3:
//            s.InsertAtPosition();
//            break;
//        case 4:
//            s.BubbleSort();
//            cout << "List sorted by CGPA." << endl;
//            break;
//        case 5:
//            s.FindMaxCGPA();
//            break;
//        case 6:
//            s.SearchRecord();
//            break;
//        case 7:
//            s.PrintList();
//            break;
//        case 8:
//            flag = false;
//            break;
//        default:
//            cout << "Invalid choice, please try again." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
