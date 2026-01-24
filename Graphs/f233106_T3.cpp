#include <iostream>
#include <map>
#include <queue>
#include <stack>
using namespace std;
class Graph {
public:
    // Creating a Adjacency list stored in a map
    map<char, vector<char>> adjList;
    void addEdge(char u, char v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);  // For undirected graph
    }
    void BFStraversal(char start) {
        map<char, bool> visited;
        queue<char> q;
        visited[start] = true;
        q.push(start);
        cout << "BFS Traversal starting from " << start << ": ";
        while (!q.empty()) {
            char temp = q.front();//temp->current node
            q.pop();
            cout << temp << " ";
            // Visit all unvisited neighbors using a simple for loop
            for (int i = 0; i < adjList[temp].size(); i++) {
                char neighbor = adjList[temp][i];//temp current vertex
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
    void DFStraversal(char start) {
        map<char, bool> visited;
        stack<char> s;
        s.push(start);
        cout << "DFS Traversal starting from " << start << ": ";
        while (!s.empty()) {
            char node = s.top();
            s.pop();
            if (!visited[node]) {
                visited[node] = true;
                cout << node << " ";
            }
            // Visit all unvisited neighbors using a simple for loop
            for (int i = 0; i < adjList[node].size(); i++) {
                char neighbor = adjList[node][i];
                if (!visited[neighbor]) {
                    s.push(neighbor);
                }
            }
        }
        cout << endl;
    }

    // Find the shortest path between two users using BFS traversal for an unweughted graph
    void shortestPath(char start, char end) {
        map<char, bool> visited;
        map<char, char> parent; //track the parent node of each visited node 
        queue<char> q;
        visited[start] = true;
        q.push(start);
        while (!q.empty()) {
            char temp = q.front();//temp->current node
            q.pop();
            if (temp == end) {
                // Found the destination to reconstruct the path
                cout << "Shortest path from " << start << " to " << end << ": ";
                stack<char> path;
                char current = end;
                while (current != start) {
                    path.push(current);
                    current = parent[current];
                }
                path.push(start);
                while (!path.empty()) {
                    cout << path.top() << " ";
                    path.pop();
                }
                cout << endl;
                return;
            }
            // Visit all unvisited neighbors using a simple for loop
            for (int i = 0; i < adjList[temp].size(); i++) {
                char neighbor = adjList[temp][i];
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    parent[neighbor] = temp;
                    q.push(neighbor);
                }
            }
        }
        cout << "No path found from " << start << " to " << end << endl;
    }
};
int main() {
    Graph graph;
    graph.addEdge('A', 'B');
    graph.addEdge('A', 'C');
    graph.addEdge('B', 'D');
    graph.addEdge('B', 'E');
    graph.addEdge('C', 'F');
    graph.addEdge('C', 'X');
    graph.BFStraversal('A');
    graph.DFStraversal('A');
    graph.shortestPath('A', 'X');
    return 0; 
}
