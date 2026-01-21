#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};
class STACK {
    Node* head;
    int size;
public:
    STACK() : size(0), head(nullptr) {}
    void push(int d) {
        Node* newNode = new Node(d);
        newNode->next = head;
        head = newNode;
        size++;
    }
    void pop() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
        }
        else {
            cout << "STACK IS EMPTY" << endl;
        }
    }
    bool empty() const {
        return head == nullptr;
    }
    int top() {
        if (head)
            return head->data;
        return -1; 
    }
    int getSize() const {
        return size;
    }
    void print() {
        if (empty()) {
            cout << "EMPTY";
            return;
        }
        STACK tempStack;
        while (!empty()) {
            int num = top();
            tempStack.push(num); 
            pop(); 
        }
        while (!tempStack.empty()) {
            cout << tempStack.top() << " ";
            push(tempStack.top()); 
            tempStack.pop(); 
        }
    }
};
class Tower {
public:
    STACK* shelves;
    int size;

    Tower(int si) {
        size = si;
        shelves = new STACK[3];
        for (int i = size; i > 0; i--) {
            shelves[0].push(i);
        }
    }
    ~Tower() {
        delete[] shelves;
    }
    bool result() {
        return shelves[2].getSize() == size;
    }
    void makeMove(int source, int dest) {
        int srcIdx = source - 1; 
        int destIdx = dest - 1; 

        if (shelves[srcIdx].empty()) {
            cout << "|| SOURCE SHELF IS EMPTY ||" << endl;
            return;
        }
        if (shelves[destIdx].empty() || shelves[destIdx].top() > shelves[srcIdx].top()) {
            shelves[destIdx].push(shelves[srcIdx].top());
            shelves[srcIdx].pop();
        }
        else {
            cout << "|| YOU CANNOT PLAY THIS MOVE ||" << endl;
        }
    }
    void playGame() {
        int count = 0;
        int source, dest;
        char choice = 'y';

        while (choice == 'y' || choice == 'Y') {
            while (!result()) {
                cout << "DATA SOURCE (1-3): ";
                while (!(cin >> source) || source < 1 || source > 3 || shelves[source - 1].empty()) {
                    cout << "ENTER CORRECT SHELF NUMBER: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "DATA DESTINATION (1-3): ";
                while (!(cin >> dest) || dest < 1 || dest > 3) {
                    cout << "ENTER CORRECT SHELF NUMBER: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                makeMove(source, dest);
                count++;
                for (int i = 0; i < 3; i++) {
                    cout << "SHELF " << i + 1 << " = ";
                    shelves[i].print();
                    cout << endl;
                }
            }
            if (count > pow(2, size) - 1) {
                cout << "YOU CROSSED THE FEWEST MOVES BUT COMPLETED, TRY NEXT TIME!" << endl;
            }
            else {
                cout << "YOU WON THE GAME!" << endl;
            }
            cout << "DO YOU WANT TO PLAY AGAIN? (y/n): ";
            cin >> choice;
            count = 0;
            if (choice == 'y' || choice == 'Y') {
                resetGame();
            }
        }
    }
    void resetGame() {
        for (int i = 0; i < 3; i++) {
            while (!shelves[i].empty()) {
                shelves[i].pop();
            }
        }
        for (int i = size; i > 0; i--) {
            shelves[0].push(i);
        }
    }
};
int main() {
    int size;
    cout << "ENTER NUMBER OF RECORDS: ";
    cin >> size;

    Tower hanoi(size);
    cout << "-----------------------------" << endl;
    cout << "- WELCOME TO TOWER OF HANOI -" << endl;
    cout << "-----------------------------" << endl;
    cout << endl;
    cout << "         ---------" << endl;
    cout << "         - RULES -" << endl;
    cout << "         ---------" << endl;
    cout << "\n";
    cout << "1. You can only move one stack of records at a time." << endl;
    cout << "2. A larger record cannot be placed on top of a smaller record." << endl;
    cout << "3. You can only move the top stack of records from a shelf." << endl;
    cout << "\n";

    cout << "-----------------------------" << endl;
    cout << "- WELCOME TO TOWER OF HANOI -" << endl;
    cout << "-----------------------------" << endl;
    cout << "\n\n";
    cout << "||SHELVES||" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "SHELF " << i + 1 << " = ";
        hanoi.shelves[i].print();
        cout << endl;
    }
    hanoi.playGame();
    return 0;
}
