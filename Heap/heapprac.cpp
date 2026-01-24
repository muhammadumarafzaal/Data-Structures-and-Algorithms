//#include<iostream>
//using namespace std;
//class maxHeap {
//private:
//	int* arr;
//	int totalsize;
//	int size;
//public:
//	maxHeap(int Totalsize) {
//		arr = new int[Totalsize];
//		totalsize = Totalsize;
//		size = 0;
//	}
//	void heapifyDown(int index) {
//		int largest = index;
//		int left = 2 * index + 1;
//		int right = 2 * index + 2;
//		if (left<size && arr[left]>arr[largest]) {
//			largest = left;
//		}
//		if (right<size && arr[right]>arr[largest])
//			largest = right;
//		if (largest != index) {
//			swap(arr[index], arr[largest]);
//			heapifyDown(largest);
//		}
//	}
//	void heapifyUp(int index) {
//		while (index > 0 && arr[index] > arr[(index - 1) / 2]) {
//			swap(arr[index], arr[(index - 1) / 2]);
//			index = arr[(index - 1) / 2];
//		}
//	}
//	void Insert(int value) {
//		if (size == totalsize) {
//			cout << "Heap is full cannot insert the value:" << endl;
//		}
//		arr[size] = value;
//		size++;
//		heapifyUp(size-1);
//	}
//	int extractMax() {
//		if (size < 0)
//			cout << "Heap is empty" << endl;
//		int max = arr[0];
//		arr[0] = arr[size - 1];
//		size--;
//		heapifyDown(0);
//		return max;
//	}
//	void extractK(int k) {
//		cout << "Top numbers of" << k << "elements are:" << endl;
//		for (int i = 0; i < k && size>0; i++) {
//			cout << extractMax() << " ";
//
//		}cout << endl;
//		
//
//	}
//	void print() {
//		for (int i = 0; i < size; i++) {
//			cout << arr[i] << "  ";
//		}
//		cout << endl;
//	}
//};
//int main() {
//	int size;
//	cout << "enter the size" << endl;
//	cin >> size;
//	maxHeap m(size);
//	m.Insert(15);
//	m.Insert(10);
//	m.Insert(20);
//	m.Insert(8);
//	m.Insert(12);
//	m.Insert(15);
//	m.Insert(18);
//	m.print();
//	cout << "After inserting priority 5:" << endl;
//	m.Insert(5);
//	m.print();
//	int max = m.extractMax();
//	cout << "Extracted priority task is:" << max << endl;
//	m.print();
//	int k;
//	cout << "Enter the k elemnets to be extract:" << endl;
//	cin >> k;
//	m.extractK(k);
//	cout << "After extracting k elemnts" << endl;
//	m.print();
//	return 0;
//}