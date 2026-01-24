//#include<iostream>
//using namespace std;
//class hashing
//{
//private:
//	int** arr;
//	int size;
//public:
//	hashing(int size)
//	{
//		this->size = size;
//		arr = new int* [size];
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = new int[size];
//		}
//
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				arr[i][j] = -1;
//			}
//		}
//	}
//
//	void insert(int data);
//	void display();
//};
//// OUtput
//void hashing::display()
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//// inserting data
//void hashing::insert(int data)
//{
//	int pos = data % size;
//	if (arr[pos][0] != -1)
//	{
//		for (int i = 1; i < size; i++)
//		{
//			if (arr[pos][i] == -1)
//			{
//				arr[pos][i] = data;
//				return;
//			}
//		}
//	}
//	arr[pos][0] = data;
//}
//int main()
//{
//	hashing h(15);
//
//
//	h.insert(17);
//	h.insert(26);
//	h.insert(15);
//	h.insert(9);
//	h.insert(11);
//	h.insert(43);
//	h.insert(75);
//	h.insert(19);
//	h.insert(35);
//	h.insert(45);
//	h.insert(55);
//	h.insert(9);
//	h.insert(10);
//	h.insert(21);
//	h.insert(61);
//	h.insert(23);
//
//	h.display();
//
//
//	system("pause");
//	return 0;
//}
