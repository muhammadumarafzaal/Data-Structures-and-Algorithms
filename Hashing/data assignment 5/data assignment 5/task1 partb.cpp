//#include<iostream>
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
//        table = NULL;
//    }
//
//    void initializeTable() {
//        for (int i = 0; i < capacity; i++) {
//            table[i] = -1;
//        }
//    }
//
//    void displayTable() const {
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
//    void insertItem(int data);
//    int getLoadPercentage(int itemCount);
//    int resolveCollisionWithDoubleHashing(int data, int pos);
//};
//
//// Get load percentage
//int HashTable::getLoadPercentage(int itemCount) {
//    int percentage = (itemCount * 100) / capacity;
//    return percentage;
//}
//
//// Insert an item into the hash table
//void HashTable::insertItem(int data) {
//    if (getLoadPercentage(itemCount) >= 70) {
//        capacity = capacity * 2;
//        int* tempTable = new int[capacity];
//
//        for (int i = 0; i < itemCount; i++) {
//            tempTable[i] = table[i];
//        }
//        for (int i = itemCount; i < capacity; i++) {
//            tempTable[i] = -1;
//        }
//
//        delete[] table;
//        table = tempTable;
//    }
//
//    int position = data % capacity; // Calculate hash position
//    if (table[position] != -1) {
//        position = resolveCollisionWithDoubleHashing(data, position);
//    }
//
//    table[position] = data;
//    itemCount++;
//}
//
//// Double hashing collision resolution
//int HashTable::resolveCollisionWithDoubleHashing(int data, int pos) {
//    int offset = 1 + (data % (capacity - 1)); // hp(k)
//    int i = 1;
//    int finalPosition = (pos + i * offset) % capacity; // h(k) = [h(k) + i * hp(k)] % capacity
//
//    while (table[finalPosition] != -1) {
//        i++;
//        finalPosition = (pos + i * offset) % capacity;
//    }
//    return finalPosition;
//}
//
//int main() {
//    HashTable hashTable(15);
//
//    hashTable.insertItem(17);
//    hashTable.insertItem(26);
//    hashTable.insertItem(15);
//    hashTable.insertItem(9);
//    hashTable.insertItem(11);
//    hashTable.insertItem(43);
//    hashTable.insertItem(75);
//    hashTable.insertItem(19);
//    hashTable.insertItem(35);
//    hashTable.insertItem(45);
//    hashTable.insertItem(55);
//    hashTable.insertItem(9);
//    hashTable.insertItem(10);
//    hashTable.insertItem(21);
//    hashTable.insertItem(61);
//    hashTable.insertItem(23);
//
//    hashTable.displayTable();
//
//    return 0;
//}
