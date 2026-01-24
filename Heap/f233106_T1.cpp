//#include <iostream>
//using namespace std;
//class MinHeap {
//    int* arr;
//    int size;
//    int totalSize;
//public:
//    MinHeap(int Totalsize) {
//        arr = new int[Totalsize];
//        totalSize = Totalsize;
//        size = 0;
//    }
//    void heapifyDown(int index) {
//        int smallest = index;
//        int left = 2 * index + 1;
//        int right = 2 * index + 2;
//
//        if (left < size && arr[left] < arr[smallest]) {
//            smallest = left;
//        }
//        if (right < size && arr[right] < arr[smallest]) {
//            smallest = right;
//        }
//
//        if (smallest != index) {
//            swap(arr[index], arr[smallest]);
//            heapifyDown(smallest);
//        }
//    }
//    void heapifyUp(int index) {
//        while (index > 0 && arr[index] < arr[(index - 1) / 2]) {
//            swap(arr[index], arr[(index - 1) / 2]);
//            index = (index - 1) / 2;
//        }
//    }
//    void insert(int value) {
//        if (size == totalSize) {
//            cout << "Heap is full, cannot insert more elements." << endl;
//            return;
//        }
//        arr[size] = value;
//        size++;
//        heapifyUp(size - 1);
//    }
//    int extractMin() {
//        if (size <= 0) {
//            cout << "Heap is empty!" << endl;
//            return -1;
//        }
//        int minValue = arr[0];
//        arr[0] = arr[size - 1];
//        size--;
//        heapifyDown(0);
//        return minValue;
//    }
//    void extractTopK(int k) {
//        cout << "Top " << k << " priority tasks are:" << endl;
//        for (int i = 0; i < k && size > 0; i++) {
//            cout << extractMin() << " ";
//        }
//        cout << endl;
//    }
//    void printMinHeap() {
//        cout << "The MinHeap is:" << endl;
//        for (int i = 0; i < size; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//
//    ~MinHeap() {
//        delete[] arr;
//    }
//};
//int main() {
//    int size;
//    cout << "ENTER THE SIZE " << endl;
//    cin >> size;
//    MinHeap heap(size);
//    heap.insert(15);
//    heap.insert(10);
//    heap.insert(20);
//    heap.insert(8);
//    heap.insert(12);
//    heap.insert(25);
//    heap.insert(18);
//    heap.printMinHeap();
//    cout << "AFTER INSERTING PRIORITY 5:" << endl;
//    heap.insert(5);
//    heap.printMinHeap();
//    int minTask = heap.extractMin();
//    cout << "EXTRACTED HIGHEST PRIORITY TASK IS -> " << minTask << endl;
//    heap.printMinHeap();
//    heap.extractTopK(3);
//    cout << "||AFTER EXTRACTING TOP 3 TASK||" << endl;
//    heap.printMinHeap();
//    return 0;
//}
