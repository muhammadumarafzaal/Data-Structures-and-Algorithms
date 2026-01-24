//#include <iostream>
//using namespace std;
//
//class HashTable {
//private:
//    int* table;
//    int capacity;
//    int itemCount;
//
//public:
//    HashTable(int cap) {
//        capacity = cap;
//        itemCount = 0;
//        table = new int[capacity];
//        initializeTable();
//    }
//
//    ~HashTable() {
//        delete[] table;
//    }
//
//    void initializeTable() {
//        for (int i = 0; i < capacity; i++) {
//            table[i] = -1;
//        }
//    }
//
//    void showTable() const {
//        cout << "\nHash Table Contents:\n";
//        for (int i = 0; i < capacity; i++) {
//            cout << "Slot " << i << ": ";
//            if (table[i] == -1) {
//                cout << "Empty";
//            }
//            else {
//                cout << table[i];
//            }
//            cout << endl;
//        }
//    }
//
//    void addItem(int value) {
//        if (itemCount >= capacity) {
//            cout << "Error: Hash table is full. Cannot insert " << value << ".\n";
//            return;
//        }
//
//        int position = value % capacity;
//        int originalPosition = position;
//
//        while (table[position] != -1) {
//            position = (position + 1) % capacity;
//            if (position == originalPosition) {
//                cout << "Error: Hash table is full. Cannot insert " << value << ".\n";
//                return;
//            }
//        }
//
//        table[position] = value;
//        itemCount++;
//    }
//};
//
//int main() {
//    HashTable hashTable(15);
//
//    hashTable.addItem(17);
//    hashTable.addItem(26);
//    hashTable.addItem(15);
//    hashTable.addItem(9);
//    hashTable.addItem(11);
//    hashTable.addItem(43);
//    hashTable.addItem(75);
//    hashTable.addItem(19);
//    hashTable.addItem(35);
//    hashTable.addItem(45);
//    hashTable.addItem(55);
//    hashTable.addItem(9);
//    hashTable.addItem(10);
//    hashTable.addItem(21);
//    hashTable.addItem(61);
//    hashTable.addItem(23);
//    hashTable.showTable();
//    return 0;
//}
