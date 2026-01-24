//#include <iostream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <set>
//using namespace std;
//
//class Graph {
//public:
//    // Adjacency list for an unweighted graph
//    map<int, vector<int>> adjList;
//    // Adjacency list for a weighted graph
//    map<int, vector<pair<int, int>>> weightedAdjList;
//
//    // Add edge for unweighted graph
//    void addEdgeUnweighted(int u, int v) {
//        adjList[u].push_back(v);
//        adjList[v].push_back(u); // For undirected graph
//    }
//
//    // Add edge for weighted graph
//    void addEdgeWeighted(int u, int v, int weight) {
//        weightedAdjList[u].push_back(make_pair(v,weight));
//        weightedAdjList[v].push_back({ u, weight }); // For undirected graph
//    }
//
//    // Cycle detection in unweighted graph using BFS
//    bool detectCycleUnweightedBFS() {
//        map<int, bool> visited;
//        map<int, int> parent; // Track parent nodes to detect back edges
//
//        for (auto& node : adjList)
//        {
//            if (!visited[node.first]) {
//                queue<int> q;
//                visited[node.first] = true;
//                parent[node.first] = -1; // Root node has no parent
//                q.push(node.first);
//
//                while (!q.empty()) {
//                    int current = q.front();
//                    q.pop();
//
//                    for (auto neighbor : adjList[current]) {
//                        if (!visited[neighbor]) {
//                            visited[neighbor] = true;
//                            parent[neighbor] = current;
//                            q.push(neighbor);
//                        }
//                        else if (neighbor != parent[current]) {
//                            // If the neighbor is visited and not the parent, we found a cycle
//                            return true;
//                        }
//                    }
//                }
//            }
//        }
//        return false;
//    }
//
//    // Cycle detection in unweighted graph using DFS
//    bool detectCycleUnweightedDFSUtil(int node, int parent, map<int, bool>& visited) {
//        visited[node] = true;
//
//        for (auto neighbor : adjList[node]) {
//            if (!visited[neighbor]) {
//                if (detectCycleUnweightedDFSUtil(neighbor, node, visited)) {
//                    return true;
//                }
//            }
//            else if (neighbor != parent) {
//                // Found a back edge
//                return true;
//            }
//        }
//        return false;
//    }
//
//    bool detectCycleUnweightedDFS() {
//        map<int, bool> visited;
//
//        for (auto& node : adjList) {
//            if (!visited[node.first]) {
//                if (detectCycleUnweightedDFSUtil(node.first, -1, visited)) {
//                    return true;
//                }
//            }
//        }
//        return false;
//    }
//
//    // Cycle detection in weighted graph using DFS
//    bool detectCycleWeightedDFSUtil(int node, int parent, map<int, bool>& visited) {
//        visited[node] = true;
//
//        for (auto& neighbor : weightedAdjList[node]) {
//            int adjacentNode = neighbor.first;
//
//            if (!visited[adjacentNode]) {
//                if (detectCycleWeightedDFSUtil(adjacentNode, node, visited)) {
//                    return true;
//                }
//            }
//            else if (adjacentNode != parent) {
//                // Found a back edge
//                return true;
//            }
//        }
//        return false;
//    }
//
//    bool detectCycleWeightedDFS() {
//        map<int, bool> visited;
//
//        for (auto& node : weightedAdjList) {
//            if (!visited[node.first]) {
//                if (detectCycleWeightedDFSUtil(node.first, -1, visited)) {
//                    return true;
//                }
//            }
//        }
//        return false;
//    }
//
//    // Cycle detection in weighted graph using BFS
//    bool detectCycleWeightedBFS() {
//        map<int, bool> visited;
//        map<int, int> parent;
//
//        for (auto& node : weightedAdjList) {
//            if (!visited[node.first]) {
//                queue<int> q;
//                visited[node.first] = true;
//                parent[node.first] = -1; // Root node has no parent
//                q.push(node.first);
//
//                while (!q.empty()) {
//                    int current = q.front();
//                    q.pop();
//
//                    for (auto& neighbor : weightedAdjList[current]) {
//                        int adjacentNode = neighbor.first;
//
//                        if (!visited[adjacentNode]) {
//                            visited[adjacentNode] = true;
//                            parent[adjacentNode] = current;
//                            q.push(adjacentNode);
//                        }
//                        else if (adjacentNode != parent[current]) {
//                            // Found a back edge
//                            return true;
//                        }
//                    }
//                }
//            }
//        }
//        return false;
//    }
//};
//
//int main() {
//    Graph graph;
//
//    // Example for unweighted graph
//    graph.addEdgeUnweighted(1, 2);
//    graph.addEdgeUnweighted(2, 3);
//    graph.addEdgeUnweighted(3, 4);
//    graph.addEdgeUnweighted(4, 2); // Adding a cycle
//
//    cout << "Cycle detected in unweighted graph (BFS): "
//        << (graph.detectCycleUnweightedBFS() ? "Yes" : "No") << endl;
//
//    cout << "Cycle detected in unweighted graph (DFS): "
//        << (graph.detectCycleUnweightedDFS() ? "Yes" : "No") << endl;
//
//    // Example for weighted graph
//    Graph weightedGraph;
//    weightedGraph.addEdgeWeighted(1, 2, 10);
//    weightedGraph.addEdgeWeighted(2, 3, 15);
//    weightedGraph.addEdgeWeighted(3, 4, 20);
//    weightedGraph.addEdgeWeighted(4, 2, 25); // Adding a cycle
//
//    cout << "Cycle detected in weighted graph (BFS): "
//        << (weightedGraph.detectCycleWeightedBFS() ? "Yes" : "No") << endl;
//
//    cout << "Cycle detected in weighted graph (DFS): "
//        << (weightedGraph.detectCycleWeightedDFS() ? "Yes" : "No") << endl;
//
//    return 0;
//}
