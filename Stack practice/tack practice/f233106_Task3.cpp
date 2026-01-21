//#include <iostream>
//#include <cmath>
//#include<string>
//#include<iomanip>
//using namespace std;
//class Node {
//public:
//    int data;
//    Node* next;
//    Node(int d) : data(d), next(nullptr) {}
//};
//class STACK {
//    Node* head;
//    int size;
//public:
//    STACK() : size(0), head(nullptr) {}
//
//    void push(int d) {
//        Node* newChar = new Node(d);
//        newChar->next = head;
//        head = newChar;
//        size++;
//    }
//    void pop() {
//        if (head) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            size--;
//        }
//        else {
//            cout << "STACK IS EMPTY" << endl;
//        }
//    }
//    bool empty() const {
//        return head == nullptr;
//    }
//    int top() {
//        if (head)
//            return head->data;
//        return -1; // Return a sentinel value for empty stack
//    }
//
//    int getSize() const {
//        return size;
//    }
//};
//class Tower {
//public:
//    STACK* shelves;
//    int size;
//
//    Tower(int si) {
//        size = si;
//        shelves = new STACK[3];
//        for (int i = size; i > 0; i--) {
//            shelves[0].push(i);
//        }
//    }
//
//    ~Tower() {
//        delete[] shelves;
//    }
//
//    void Print(STACK& obj) {
//        if (obj.empty()) {
//            cout << "EMPTY";
//            return;
//        }
//        int num = obj.top();
//        obj.pop();
//        Print(obj);
//        cout << num << " ";
//        obj.push(num);
//    }
//
//    bool Result() {
//        return shelves[2].getSize() == size;
//    }
//
//    void makingTower(int s, int d) {
//        int ts = s - 1; // Source shelf index
//        int td = d - 1; // Destination shelf index
//
//        if (shelves[td].empty() || shelves[td].top() > shelves[ts].top()) {
//            shelves[td].push(shelves[ts].top());
//            shelves[ts].pop();
//        }
//        else {
//            cout << "|| YOU CANNOT PLAY THIS MOVE ||" << endl;
//        }
//    }
//
//    void playGame() {
//        int count = 0;
//        int source, dest;
//        char choice = 'y';
//
//        while (choice == 'y' || choice == 'Y') {
//            while (!Result()) {
//                cout << "DATA SOURCE (1-3): ";
//                while (!(cin >> source) || source < 1 || source > 3 || shelves[source - 1].empty()) {
//                    cout << "ENTER CORRECT SHELF NUMBER: ";
//                    cin.clear();
//                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                }
//                cout << "DATA DESTINATION (1-3): ";
//                while (!(cin >> dest) || dest < 1 || dest > 3) {
//                    cout << "ENTER CORRECT SHELF NUMBER: ";
//                    cin.clear();
//                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                }
//                makingTower(source, dest);
//                count++;
//
//                // Display current state of shelves
//                for (int i = 0; i < 3; i++) {
//                    cout << "SHELF " << i + 1 << " = ";
//                    Print(shelves[i]);
//                    cout << endl;
//                }
//            }
//
//            if (count > pow(2, size) - 1) {
//                cout << "YOU CROSSED THE FEWEST MOVES BUT COMPLETED, TRY NEXT TIME!" << endl;
//            }
//            else {
//                cout << "YOU WON THE GAME!" << endl;
//            }
//
//            cout << "DO YOU WANT TO PLAY AGAIN? (y/n): ";
//            cin >> choice;
//            count = 0;
//            if (choice == 'y' || choice == 'Y') {
//                // Reset game
//                setGame();
//            }
//        }
//    }
//    void setGame() {
//        for (int i = 0; i < 3; i++) {
//            while (!shelves[i].empty()) {
//                shelves[i].pop();
//            }
//        }
//        for (int i = size; i > 0; i--) {
//            shelves[0].push(i);
//        }
//    }
//};
//int main() {
//    int size;
//    cout << "ENTER NUMBER OF RECORDS: ";
//    cin >> size;
//    Tower Hanoi(size);
//    cout << "-----------------------------" << endl;
//    cout << "- WELCOME TO TOWER OF HANOI -" << endl;
//    cout << "-----------------------------" << endl;
//    cout << endl;
//    cout << "         ---------" << endl;
//    cout << "         - RULES -" << endl;
//    cout << "         ---------" << endl;
//    cout << "\n";
//    cout << "1. You can only move one stack of records at a time." << endl;
//    cout << "2. A larger record cannot be placed on top of a smaller record." << endl;
//    cout << "3. You can only move the top stack of records from a shelf." << endl;
//    cout << "\n";
//    system("pause");
//    system("cls");
//    cout << "-----------------------------" << endl;
//    cout << "- WELCOME TO TOWER OF HANOI -" << endl;
//    cout << "-----------------------------" << endl;
//    cout << "\n\n";
//    cout << "||SHELVES||" << endl;
//    for (int i = 0; i < 3; i++) {
//        cout << "SHELF " << i + 1 << " = ";
//        Hanoi.Print(Hanoi.shelves[i]);
//        cout << endl;
//    }
//
//    system("pause");
//    Hanoi.playGame();
//    system("pause");
//    return 0;
//}
//
