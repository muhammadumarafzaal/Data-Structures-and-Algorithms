//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//class Node {
//public:
//	char label;
//	Node* next;
//	Node(char label = 0)
//	{
//		this->label = label;
//		next = NULL;
//	}
//};
//class Graph
//{
//	Node* adjacencyList;
//	int numVertices;
//public:
//	Graph(int vertices)
//	{
//		adjacencyList = new Node[vertices];
//		numVertices = vertices;
//		char startLabel = 'A';
//		for (int i = 0; i < vertices; i++) {
//			adjacencyList[i] = Node(startLabel);
//			startLabel++;
//		}
//	}
//	void addEdges()
//	{
//		int numEdges;
//		cout << "Enter the number of edges between vertices: ";
//		cin >> numEdges;
//		char fromVertex, toVertex;
//		cout << "Enter edges : ";
//		for (int i = 0; i < numEdges; i++)
//		{
//			cin >> fromVertex >> toVertex;
//			connectVertices(fromVertex, toVertex);
//			connectVertices(toVertex, fromVertex);
//			cout << "Added a connection between " << fromVertex << " and " << toVertex << endl;
//		}
//	}
//	void connectVertices(char fromVertex, char toVertex)
//	{
//		Node* current = &adjacencyList[fromVertex - 'A'];
//		while (current->next != NULL)
//		{
//			current = current->next;
//		}
//		current->next = new Node(toVertex);
//	}
//	void displayGraph()
//	{
//		cout << "<< Adjacency List of the Graph >>" << endl;
//		for (int i = 0; i < numVertices; i++)
//		{
//			cout << adjacencyList[i].label << " -> ";
//			Node* current = &adjacencyList[i];
//			current = current->next;
//			while (current != NULL)
//			{
//				cout << current->label << " ";
//				current = current->next;
//			}
//			cout << endl;
//		}
//	}
//	void performBFS()
//	{
//		vector<char> traversalOrder;
//		vector<bool> visited(numVertices, false);
//		queue<char> bfsQueue;
//		bfsQueue.push('A');
//		visited['A' - 'A'] = true;
//		while (!bfsQueue.empty())
//		{
//			char currentVertex = bfsQueue.front();
//			bfsQueue.pop();
//			traversalOrder.push_back(currentVertex);
//			Node* current = &adjacencyList[currentVertex - 'A'];
//			current = current->next;
//			while (current != NULL)
//			{
//				if (!visited[current->label - 'A']) {
//					visited[current->label - 'A'] = true;
//					bfsQueue.push(current->label);
//				}
//				current = current->next;
//			}
//		}
//		cout << "BFS Traversal: ";
//		for (char vertex : traversalOrder)
//		{
//			cout << vertex << " ";
//		}
//		cout << endl;
//	}
//	void performDFS(char vertex, vector<char>& traversalOrder, vector<bool>& visited)
//	{
//		visited[vertex - 'A'] = true;
//		traversalOrder.push_back(vertex);
//		Node* current = &adjacencyList[vertex - 'A'];
//		current = current->next;
//		while (current != NULL)
//		{
//			if (!visited[current->label - 'A'])
//			{
//				performDFS(current->label, traversalOrder, visited);
//			}
//			current = current->next;
//		}
//	}
//	void initiateDFS() {
//		vector<char> traversalOrder;
//		vector<bool> visited(numVertices, false);
//		performDFS('A', traversalOrder, visited);
//		cout << "DFS Traversal: ";
//		for (char vertex : traversalOrder)
//		{
//			cout << vertex << " ";
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	int numVertices;
//	cout << "Enter the total number of vertices in the graph: ";
//	cin >> numVertices;
//	cout << "|| The Verttices Will Be In Form Of 'A' 'B' 'C' 'D' ||" << endl;
//	Graph graph(numVertices);
//	graph.addEdges();
//	graph.displayGraph();
//	graph.performBFS();
//	graph.initiateDFS();
//	return 0;
//}