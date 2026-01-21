//#include <iostream>
//#include <string>
//using namespace std;
//class userAction {
//public:
//    string description;
//    userAction* next;
//    userAction* prev;
//    userAction(const string& act) {
//        description = act;
//        next = nullptr;
//        prev = nullptr;
//    }
//};
//class undoRecord {
//public:
//    string description;
//    undoRecord* next;
//    undoRecord(const string& act) : description(act), next(nullptr) {}
//};
//class undoManager {
//public:
//    undoRecord* head;
//    undoManager() : head(nullptr) {}
//    void addUndo(const string& act) {
//        undoRecord* newUndo = new undoRecord(act);
//        newUndo->next = head;
//        head = newUndo;
//        cout << "||ACTION ADDED TO REDO LIST||" << endl;
//    }
//    void deleteUndo() {
//        if (head) {
//            undoRecord* temp = head;
//            head = head->next;
//            delete temp;
//            cout << "||ACTION DELETED FROM A REDO LIST||" << endl;
//        }
//    }
//};
//class HistoryManager {
//private:
//    int size;
//    undoManager undoManager;
//    userAction* head;
//    userAction* recentAction;
//public:
//    HistoryManager() : head(nullptr), recentAction(nullptr), size(0) {}
//    void addAction(const string& act) {
//        userAction* newAction = new userAction(act);
//        if (!head) {
//            head = recentAction = newAction;
//        }
//        else {
//            recentAction->next = newAction;
//            newAction->prev = recentAction;
//            recentAction = newAction;
//        }
//        size++;
//        cout << "Action \"" << act << "\" added." << endl;
//    }
//    void undoAction() {
//        if (!recentAction) {
//            cout << "No action performed, nothing to undo." << endl;
//            return;
//        }
//        undoManager.addUndo(recentAction->description);
//        userAction* temp = recentAction;
//        recentAction = recentAction->prev;
//        if (recentAction) {
//            recentAction->next = nullptr;
//        }
//        else {
//            head = nullptr;
//        }
//        delete temp;
//        cout << "Action successfully undone." << endl;
//    }
//    void redoAction() {
//        if (!undoManager.head) {
//            cout << "No action to redo; redo list is empty." << endl;
//            return;
//        }
//        addAction(undoManager.head->description);
//        undoManager.deleteUndo();
//        cout << "Action successfully redone." << endl;
//    }
//
//    void deleteSpecificAction(int pos) {
//        if (!head) {
//            cout << "No actions performed; empty list!" << endl;
//            return;
//        }
//        if (pos <= 0) {
//            cout << "Invalid position!" << endl;
//            return;
//        }
//        userAction* traverse = head;
//        for (int i = 1; i < pos && traverse != nullptr; ++i) {
//            traverse = traverse->next;
//        }
//        if (!traverse) {
//            cout << "Position exceeds the length of the list." << endl;
//            return;
//        }
//        if (traverse == head) {
//            head = head->next;
//            if (head) {
//                head->prev = nullptr;
//            }
//        }
//        else {
//            if (traverse->next) {
//                traverse->next->prev = traverse->prev;
//            }
//            if (traverse->prev) {
//                traverse->prev->next = traverse->next;
//            }
//        }
//        if (traverse == recentAction) {
//            recentAction = traverse->prev;
//        }
//        delete traverse;
//        size--;
//        cout << "Action deleted successfully." << endl;
//    }
//
//    void getRecentAction() const {
//        if (!recentAction) {
//            cout << "No actions performed yet." << endl;
//            return;
//        }
//        cout << "Most recent action: \"" << recentAction->description << "\"" << endl;
//    }
//
//    void revertUndo(int index) {
//        if (!head) {
//            cout << "Action history is empty." << endl;
//            return;
//        }
//        userAction* traverse = head;
//        int len = 0;
//        while (traverse) {
//            len++;
//            traverse = traverse->next;
//        }
//        if (index > len || index <= 0) {
//            cout << "Invalid index." << endl;
//            return;
//        }
//        while (len > index) {
//            undoAction();
//            len--;
//        }
//        cout << "Reverted action: \"" << recentAction->description << "\"" << endl;
//    }
//
//    void revertRedo(int index) {
//        if (!head || !undoManager.head) {
//            cout << "Action history or redo list is empty." << endl;
//            return;
//        }
//        userAction* traverse = head;
//        int len = 0;
//        while (traverse) {
//            traverse = traverse->next;
//            len++;
//        }
//        if (index > size || index <= 0) {
//            cout << "Invalid index." << endl;
//            return;
//        }
//        while (len < index) {
//            redoAction();
//            len++;
//        }
//        cout << "Reverted action: \"" << recentAction->description << "\"" << endl;
//    }
//
//    void browseHistory() const {
//        userAction* traverse = head;
//        cout << "Action History:" << endl;
//        int i = 1;
//        while (traverse) {
//            cout << "Action " << i << ": \"" << traverse->description << "\"" << endl;
//            traverse = traverse->next;
//            i++;
//        }
//    }
//};
//void displayMenu() {
//    cout << "======================" << endl;
//    cout << "   ACTION MANAGER     " << endl;
//    cout << "======================" << endl;
//    cout << "1. Adding Action" << endl;
//    cout << "2. Undo Action" << endl;
//    cout << "3. Redo Action" << endl;
//    cout << "4. Deleting Specific Action" << endl;
//    cout << "5. Get Recent Action" << endl;
//    cout << "6. Revert Actions Undo" << endl;
//    cout << "7. Revert Actions Redo" << endl;
//    cout << "8. Browse History" << endl;
//    cout << "9. Exit" << endl;
//    cout << "======================" << endl;
//}
//int main() {
//    HistoryManager Manager;
//    while (true) {
//        displayMenu();
//        cout << "Enter your choice: ";
//        int choice;
//        cin >> choice;
//        switch (choice) {
//        case 1: {
//            string action;
//            cout << "Enter the action to add: ";
//            cin.ignore();
//            getline(cin, action);
//            Manager.addAction(action);
//            break;
//        }
//        case 2:
//            Manager.undoAction();
//            break;
//        case 3:
//            Manager.redoAction();
//            break;
//        case 4: {
//            int pos;
//            cout << "Enter the position to delete: ";
//            cin >> pos;
//            Manager.deleteSpecificAction(pos);
//            break;
//        }
//        case 5:
//            Manager.getRecentAction();
//            break;
//        case 6: {
//            int index;
//            cout << "Enter the number of actions to revert undo: ";
//            cin >> index;
//            Manager.revertUndo(index);
//            break;
//        }
//        case 7: {
//            int index;
//            cout << "Enter the number of actions to revert redo: ";
//            cin >> index;
//            Manager.revertRedo(index);
//            break;
//        }
//        case 8:
//            Manager.browseHistory();
//            break;
//        case 9:
//            cout << "||Exiting.....THANKYOU FOR USING||" << endl;
//            return 0;
//        default:
//            cout << "Invalid choice! Please try again." << endl;
//            break;
//        }
//        system("pause");
//    }
//}
