//#include <iostream>
//#include <vector>
//using namespace std;
//class TaskMinHeap {
//	vector<int> taskArray;
//	int maxSize;
//public:
//	TaskMinHeap(int maxHeapSize)
//	{
//		this->maxSize = maxHeapSize;
//	}
//	void addTasks()
//	{
//		cout << "Enter the tasks: ";
//		for (int i = 0; i < maxSize; i++)
//		{
//			int priority;
//			cin >> priority;
//			taskArray.push_back(priority);
//		}
//	}
//	void adjustHeapDown(int index)
//	{
//		int smallest = index;
//		int leftChild = 2 * index + 1;
//		int rightChild = 2 * index + 2;
//		if (leftChild < taskArray.size() && taskArray[leftChild] < taskArray[smallest])
//		{
//			smallest = leftChild;
//		}
//		if (rightChild < taskArray.size() && taskArray[rightChild] < taskArray[smallest])
//		{
//			smallest = rightChild;
//		}
//		if (smallest != index)
//		{
//			swap(taskArray[index], taskArray[smallest]);
//			adjustHeapDown(smallest);
//		}
//	}
//	void adjustHeapUp(int index)
//	{
//		while (index > 0 && taskArray[index] < taskArray[(index - 1) / 2])
//		{
//			swap(taskArray[index], taskArray[(index - 1) / 2]);
//			index = (index - 1) / 2;
//		}
//	}
//	void addTask(int priority)
//	{
//		taskArray.push_back(priority);
//		int currentIndex = taskArray.size() - 1;
//		adjustHeapUp(currentIndex);
//	}
//	void constructMinHeap()
//	{
//		for (int i = (maxSize / 2) - 1; i >= 0; i--)
//		{
//			adjustHeapDown(i);
//		}
//	}
//	int extractMinTask()
//	{
//		if (maxSize <= 0)
//		{
//			cout << "<< No tasks in the heap! >>" << endl;
//			return -1;
//		}
//		int minPriority = taskArray[0];
//		taskArray[0] = taskArray.back();
//		maxSize--;
//		taskArray.pop_back();
//		adjustHeapDown(0);
//		return minPriority;
//	}
//	void extractTopTasks(int count)
//	{
//		cout << "The top " << count << " priority tasks are: ";
//		for (int i = 0; i < count && maxSize > 0; i++)
//		{
//			cout << extractMinTask() << " ";
//		}
//		cout << endl;
//	}
//	void displayHeap()
//	{
//		cout << "Current MinHeap: ";
//		for (int i = 0; i < taskArray.size(); i++)
//		{
//			cout << taskArray[i] << " ";
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	int heapSize;
//	cout << "Enter the total number of tasks: ";
//	cin >> heapSize;
//	TaskMinHeap taskHeap(heapSize);
//	taskHeap.addTasks();
//	taskHeap.constructMinHeap();
//	taskHeap.displayHeap();
//	int val;
//	cout << "Add a new task : ";
//	cin >> val;
//	taskHeap.addTask(val);
//	taskHeap.displayHeap();
//	int minTask = taskHeap.extractMinTask();
//	cout << "Task with the highest priority extracted: " << minTask << endl;
//	taskHeap.displayHeap();
//	int k;
//	cout << "Enter the number of k number of tasks to extract: ";
//	cin >> k;
//	taskHeap.extractTopTasks(k);
//	cout << "Heap after extracting top-priority tasks:" << endl;
//	taskHeap.displayHeap();
//	return 0;
//}