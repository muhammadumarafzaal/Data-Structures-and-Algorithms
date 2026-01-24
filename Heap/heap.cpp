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
//
//    void heapifyUp(int index) {
//        while (index > 0 && arr[index] < arr[(index - 1) / 2]) {
//            swap(arr[index], arr[(index - 1) / 2]);
//            index = (index - 1) / 2;
//        }
//    }
//
//    void insert(int value) {
//        if (size == totalSize) {
//            cout << "Heap is full, cannot insert more elements." << endl;
//            return;
//        }
//        arr[size] = value;
//        size++;
//        heapifyUp(size - 1);
//    }
//
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
//
//    void extractTopK(int k) {
//        cout << "Top " << k << " priority tasks are:" << endl;
//        for (int i = 0; i < k && size > 0; i++) {
//            cout << extractMin() << " ";
//        }
//        cout << endl;
//    }
//
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
//class MaxHeap {
//    int* arr;
//    int size;
//    int totalSize;
//
//public:
//    MaxHeap(int Totalsize) {
//        arr = new int[Totalsize];
//        totalSize = Totalsize;
//        size = 0;
//    }
//    void heapifyDown(int index) {
//        int largest = index;
//        int left = 2 * index + 1;
//        int right = 2 * index + 2;
//
//        if (left < size && arr[left] > arr[largest]) {
//            largest = left;
//        }
//        if (right < size && arr[right] > arr[largest]) {
//            largest = right;
//        }
//
//        if (largest != index) {
//            swap(arr[index], arr[largest]);
//            heapifyDown(largest);
//        }
//    }
//
//    void heapifyUp(int index) {
//        while (index > 0 && arr[index] > arr[(index - 1) / 2]) {
//            swap(arr[index], arr[(index - 1) / 2]);
//            index = (index - 1) / 2;
//        }
//    }
//
//    void insert(int value) {
//        if (size == totalSize) {
//            cout << "Heap is full, cannot insert more elements." << endl;
//            return;
//        }
//        arr[size] = value;
//        size++;
//        heapifyUp(size - 1);
//    }
//
//    int extractMax() {
//        if (size <= 0) {
//            cout << "Heap is empty!" << endl;
//            return -1;
//        }
//        int maxValue = arr[0];
//        arr[0] = arr[size - 1];
//        size--;
//        heapifyDown(0);
//        return maxValue;
//    }
//
//    void extractTopK(int k) {
//        cout << "Top " << k << " highest priority tasks are:" << endl;
//        for (int i = 0; i < k && size > 0; i++) {
//            cout << extractMax() << " ";
//        }
//        cout << endl;
//    }
//
//    void printMaxHeap() {
//        cout << "The MaxHeap is:" << endl;
//        for (int i = 0; i < size; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//
//    ~MaxHeap() {
//        delete[] arr;
//    }
//};
//
//int main() {
//    int size;
//    cout << "ENTER THE SIZE " << endl;
//    cin >> size;
//
//    MinHeap minHeap(size);
//    MaxHeap maxHeap(size);
//
//    minHeap.insert(15);
//    minHeap.insert(10);
//    minHeap.insert(20);
//    minHeap.insert(8);
//    minHeap.insert(12);
//    minHeap.insert(25);
//    minHeap.insert(18);
//    minHeap.printMinHeap();
//
//    cout << "AFTER INSERTING PRIORITY 5:" << endl;
//    minHeap.insert(5);
//    minHeap.printMinHeap();
//
//    int minTask = minHeap.extractMin();
//    cout << "EXTRACTED HIGHEST PRIORITY TASK IS -> " << minTask << endl;
//    minHeap.printMinHeap();
//    minHeap.extractTopK(3);
//    cout << "||AFTER EXTRACTING TOP 3 TASK||" << endl;
//    minHeap.printMinHeap();
//
//    maxHeap.insert(15);
//    maxHeap.insert(10);
//    maxHeap.insert(20);
//    maxHeap.insert(8);
//    maxHeap.insert(12);
//    maxHeap.insert(25);
//    maxHeap.insert(18);
//    maxHeap.printMaxHeap();
//
//    cout << "AFTER INSERTING PRIORITY 30:" << endl;
//    maxHeap.insert(30);
//    maxHeap.printMaxHeap();
//
//    int maxTask = maxHeap.extractMax();
//    cout << "EXTRACTED HIGHEST PRIORITY TASK IS -> " << maxTask << endl;
//    maxHeap.printMaxHeap();
//    maxHeap.extractTopK(3);
//    cout << "||AFTER EXTRACTING TOP 3 TASK||" << endl;
//    maxHeap.printMaxHeap();
//
//    return 0;
//}
