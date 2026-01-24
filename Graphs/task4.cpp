//#include <iostream>
//#include <queue>
//#include <utility>
//#include <vector>
//using namespace std;
//void calculateTotalCost(int** graph, int numVertices)
//{
//	int totalCost = 0;
//	for (int i = 0; i < numVertices; i++)
//	{
//		for (int j = i + 1; j < numVertices; j++)
//		{
//			totalCost += graph[i][j];
//		}
//	}
//	cout << "Total cost of connecting all vertices: " << totalCost << endl;
//}
//void runPrimsAlgorithm(int** graph, int numVertices) {
//	vector<bool> visited(numVertices, false);
//	priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> minHeap;
//	vector<int> parent(numVertices, -1);
//	int mstCost = 0;
//	minHeap.push({ 0, {0, -1} });
//	while (!minHeap.empty()) {
//		int edgeWeight = minHeap.top().first;
//		int currentVertex = minHeap.top().second.first;
//		int parentVertex = minHeap.top().second.second;
//		minHeap.pop();
//		if (!visited[currentVertex])
//		{
//			visited[currentVertex] = true;
//			parent[currentVertex] = parentVertex;
//			mstCost += edgeWeight;
//			for (int neighbor = 0; neighbor < numVertices; neighbor++)
//			{
//				if (graph[currentVertex][neighbor] != 0 && !visited[neighbor])
//				{
//					minHeap.push({ graph[currentVertex][neighbor], {neighbor, currentVertex} });
//				}
//			}
//		}
//	}
//	cout << "Minimum spanning tree cost: " << mstCost << endl;
//	cout << "Edges in the MST:" << endl;
//	for (int i = 1; i < parent.size(); i++) {
//		cout << "Edge between vertex " << i << " and vertex " << parent[i] << endl;
//	}
//}
//int main()
//{
//	int numVertices, numEdges;
//	cout << "Enter the number of vertices in the graph: ";
//	cin >> numVertices;
//	cout << "Enter the number of edges in the graph: ";
//	cin >> numEdges;
//	int** adjacencyMatrix = new int* [numVertices];
//	for (int i = 0; i < numVertices; i++)
//	{
//		adjacencyMatrix[i] = new int[numVertices];
//		for (int j = 0; j < numVertices; j++)
//		{
//			adjacencyMatrix[i][j] = 0;
//		}
//	}
//	int fromVertex, toVertex, edgeWeight;
//	for (int i = 0; i < numEdges; i++)
//	{
//		cout << "Enter the edge (u v weight): ";
//		cin >> fromVertex >> toVertex >> edgeWeight;
//		if (fromVertex < 0 || fromVertex >= numVertices || toVertex < 0 || toVertex >= numVertices)
//		{
//			cout << "Invalid input! Vertices must be between 0 and " << numVertices - 1 << "." << endl;
//			i--;
//			continue;
//		}
//		cout << "Edge added with weight " << edgeWeight << " between vertices " << fromVertex << " and " <<
//			toVertex << endl;
//		adjacencyMatrix[fromVertex][toVertex] = edgeWeight;
//		adjacencyMatrix[toVertex][fromVertex] = edgeWeight;
//	}
//	cout << "Adjacency Matrix of the Graph:" << endl;
//	for (int i = 0; i < numVertices; i++)
//	{
//		for (int j = 0; j < numVertices; j++)
//		{
//			cout << adjacencyMatrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	calculateTotalCost(adjacencyMatrix, numVertices);
//	runPrimsAlgorithm(adjacencyMatrix, numVertices);
//	for (int i = 0; i < numVertices; i++)
//	{
//		delete[] adjacencyMatrix[i];
//	}
//	delete[] adjacencyMatrix;
//	return 0;
//}