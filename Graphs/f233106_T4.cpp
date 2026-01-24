//#include<iostream>
//using namespace std;
//void Prims(int graph[5][5]) 
//{
//	int blocks = 5;// it will represents the vertices
//	int totalCost = 0;
//	int MST[5] = { 0 };//Stores the parent node of each vertex in the MST
//	int key[5] = { 0 };
//	bool CheckMST[5] = { false };
//	for (int i = 0; i < 5; i++) {
//		key[i] = 999999;
//		CheckMST[i] = false;//all vertices that's are unvisited
//		MST[i] = -1;
//	}
//	key[0] = 0;
//	for (int count = 0; count < blocks - 1; count++) {
//		int index = -1;
//		int minKey = 999999;
//		for (int i = 0; i < blocks; i++) {
//			if (!CheckMST[i] && key[i] < minKey) {
//				minKey = key[i];
//				index = i;
//			}
//		}
//		CheckMST[index] = true;
//		for (int i = 0; i < blocks; i++) {
//			if (graph[index][i] && !CheckMST[i] && graph[index][i] < key[i]) {
//				key[i] = graph[index][i];
//				MST[i] = index;
//			}
//		}
//	}
//	cout << "|| MST Edges ||"<<"       || Edge Weight ||   " << endl;
//	for (int i = 1; i < blocks; i++) {
//		cout << MST[i] << " - " << i << "                      " << graph[i][MST[i]] << endl;
//		totalCost += graph[i][MST[i]];
//	}
//	cout << endl;
//	cout << "|| The minimum cost of the MST: " << totalCost <<" ||"<<endl;
//}
//int main() 
//{
//	int graph[5][5] =
//	{
//	{0, 2, 0, 6, 0},
//	{2, 0, 3, 8, 5},
//	{0, 3, 0, 0, 7},
//	{6, 8, 0, 0, 9},
//	{0, 5, 7, 9, 0}
//	};
//	cout << "|| This is graph of 5 blocks connected with a weighted edges ||" << endl;
//	cout << endl;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cout << graph[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	Prims(graph);
//	return 0;//}