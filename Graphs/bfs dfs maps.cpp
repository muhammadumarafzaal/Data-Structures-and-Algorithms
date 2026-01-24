//#include <iostream>
//#include <map>
//#include <vector>
//#include <queue>
//#include <stack>
//using namespace std;
//
//class Graph {
//public:
//    // Adjacency list stored in a map
//   
//    map<char, vector<char>> adjList;
//
//    // Add an edge to the graph
//    void addEdge(char u, char v) {
//        adjList[u].push_back(v);
//        adjList[v].push_back(u); // For undirected graph
//    }
//
//    // BFS Traversal
//    void BFStraversal(char start) {
//        map<char, bool> visited; // Track visited nodes
//        queue<char> q;           // Queue for BFS
//
//        visited[start] = true;
//        q.push(start);
//
//        cout << "BFS Traversal starting from " << start << ": ";
//        while (!q.empty()) {
//            char current = q.front();
//            q.pop();
//            cout << current << " ";
//
//            // Traverse all unvisited neighbors
//            for (char neighbor : adjList[current]) {
//                if (!visited[neighbor]) {
//                    visited[neighbor] = true;
//                    q.push(neighbor);
//                }
//            }
//        }
//        cout << endl;
//    }
//
//    // DFS utility function
//    void DFS(char node, map<char, bool>& visited) {
//        visited[node] = true;
//        cout << node << " ";
//
//        // Recur for all unvisited neighbors
//        for (char neighbor : adjList[node]) {
//            if (!visited[neighbor]) {
//                DFS(neighbor, visited);
//            }
//        }
//    }
//
//    // DFS Traversal
//    void DFStraversal(char start) {
//        map<char, bool> visited; // Track visited nodes
//        cout << "DFS Traversal starting from " << start << ": ";
//        DFS(start, visited);
//        cout << endl;
//    }
//
//    // Find the shortest path using BFS for an unweighted graph
//    void shortestPath(char start, char end) {
//        map<char, bool> visited;
//        map<char, char> parent; // To reconstruct the path
//        queue<char> q;
//
//        visited[start] = true;
//        q.push(start);
//
//        while (!q.empty()) {
//            char current = q.front();
//            q.pop();
//
//            // Check if we have reached the destination
//            if (current == end) {
//                // Reconstruct the path from end to start
//                cout << "Shortest path from " << start << " to " << end << ": ";
//                stack<char> path;
//                char node = end;
//
//                while (node != start) {
//                    path.push(node);
//                    node = parent[node];
//                }
//                path.push(start);
//
//                // Print the path
//                while (!path.empty()) {
//                    cout << path.top() << " ";
//                    path.pop();
//                }
//                cout << endl;
//                return;
//            }
//
//            // Traverse all unvisited neighbors
//            for (char neighbor : adjList[current]) {
//                if (!visited[neighbor]) {
//                    visited[neighbor] = true;
//                    parent[neighbor] = current;
//                    q.push(neighbor);
//                }
//            }
//        }
//        cout << "No path found from " << start << " to " << end << endl;
//    }
//};
//
//int main() {
//    Graph graph;
//
//    // Add edges
//    graph.addEdge('A', 'B');
//    graph.addEdge('A', 'C');
//    graph.addEdge('B', 'D');
//    graph.addEdge('B', 'E');
//    graph.addEdge('C', 'F');
//
//    // Perform BFS and DFS traversals
//    graph.BFStraversal('A');
//    graph.DFStraversal('A');
//
//    // Find the shortest path
//    graph.shortestPath('A', 'F');
//
//    return 0;
//}
