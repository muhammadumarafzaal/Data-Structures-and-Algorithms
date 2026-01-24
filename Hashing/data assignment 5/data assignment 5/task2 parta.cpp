//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* next;
//	node(int data)
//	{
//		this->data = data;
//		next = NULL;
//	}
//};
//class hashing
//{
//private:
//	node** arr;
//	int size;
//public:
//	hashing(int size)
//	{
//		this->size = size;
//		arr = new node * [size];
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = new node(-1);
//		}
//	}
//
//	void insert(int data);
//	void display();
//};
//// Display
//void hashing::display()
//{
//	for (int i = 0; i < size; i++)
//	{
//		node* current = arr[i]->next;
//		cout << arr[i]->data << " -> ";
//		while (current != NULL)
//		{
//			cout << current->data << " -> ";
//			current = current->next;
//		}
//		cout << "NULL";
//		cout << endl;
//	}
//}
//// Insertion
//void hashing::insert(int data)
//{
//	int pos = data % size;
//	if (arr[pos]->data != -1)
//	{
//		node* current = arr[pos];
//		while (current->next)
//		{
//			current = current->next;
//		}
//		node* n = new node(data);
//		current->next = n;
//	}
//	else
//	{
//		arr[pos]->data = data;
//	}
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
