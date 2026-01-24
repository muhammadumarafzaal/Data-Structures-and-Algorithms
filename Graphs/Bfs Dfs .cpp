////#include<iostream>
////#include<vector>
////#include<queue>
////#include<algorithm>
////using namespace std;
////
//// Function for BFS Traversal
////vector<int> BFS(int start, vector<vector<int>>& adjList) {
////    vector<int> result;
////    vector<bool> visited(adjList.size(), false);
////    queue<int> q;
////
////    q.push(start);
////    visited[start] = true;
////
////    while (!q.empty()) {
////        int node = q.front();
////        q.pop();
////        result.push_back(node);
////
////        for (int neighbor : adjList[node]) {
////            if (!visited[neighbor]) {
////                q.push(neighbor);
////                visited[neighbor] = true;
////            }
////        }
////    }
////
////    return result;
////}
////
//// Function for DFS Traversal
////void DFSUtil(int node, vector<vector<int>>& adjList, vector<bool>& visited, vector<int>& result) {
////    visited[node] = true;
////    result.push_back(node);
////
////    for (int neighbor : adjList[node]) {
////        if (!visited[neighbor]) {
////            DFSUtil(neighbor, adjList, visited, result);
////        }
////    }
////}
////
////vector<int> DFS(int start, vector<vector<int>>& adjList) {
////    vector<int> result;
////    vector<bool> visited(adjList.size(), false);
////    DFSUtil(start, adjList, visited, result);
////    return result;
////}
////
//// Function to find the shortest path using BFS
////void shortestPath(int start, int end, vector<vector<int>>& adjList) {
////    vector<bool> visited(adjList.size(), false);
////    vector<int> parent(adjList.size(), -1);
////    queue<int> q;
////
////    visited[start] = true;
////    q.push(start);
////
////    while (!q.empty()) {
////        int current = q.front();
////        q.pop();
////
////        if (current == end) {
////             Reconstruct the path
////            cout << "Shortest path from " << start << " to " << end << ": ";
////            vector<int> path;
////            for (int node = end; node != -1; node = parent[node]) {
////                path.push_back(node);
////            }
////            reverse(path.begin(), path.end());
////            for (int node : path) {
////                cout << node << " ";
////            }
////            cout << endl;
////            return;
////        }
////
////        for (int neighbor : adjList[current]) {
////            if (!visited[neighbor]) {
////                visited[neighbor] = true;
////                parent[neighbor] = current;
////                q.push(neighbor);
////            }
////        }
////    }
////
////    cout << "No path found from " << start << " to " << end << endl;
////}
////
//// Function to detect a cycle using BFS
////bool detectCycleBFS(int start, vector<vector<int>>& adjList) {
////    vector<bool> visited(adjList.size(), false);
////    queue<pair<int, int>> q; // (node, parent)
////
////    q.push({ start, -1 });
////    visited[start] = true;
////
////    while (!q.empty()) {
////        int node = q.front().first;
////        int parent = q.front().second;
////        q.pop();
////
////        for (int neighbor : adjList[node]) {
////            if (!visited[neighbor]) {
////                visited[neighbor] = true;
////                q.push({ neighbor, node });
////            }
////            else if (neighbor != parent) {
////                return true; // Cycle detected
////            }
////        }
////    }
////
////    return false;
////}
////
//// Function to detect a cycle using DFS
////bool detectCycleDFSUtil(int node, int parent, vector<vector<int>>& adjList, vector<bool>& visited) {
////    visited[node] = true;
////
////    for (int neighbor : adjList[node]) {
////        if (!visited[neighbor]) {
////            if (detectCycleDFSUtil(neighbor, node, adjList, visited)) {
////                return true;
////            }
////        }
////        else if (neighbor != parent) {
////            return true; // Cycle detected
////        }
////    }
////
////    return false;
////}
////
////bool detectCycleDFS(vector<vector<int>>& adjList) {
////    vector<bool> visited(adjList.size(), false);
////
////    for (int i = 0; i < adjList.size(); ++i) {
////        if (!visited[i]) {
////            if (detectCycleDFSUtil(i, -1, adjList, visited)) {
////                return true;
////            }
////        }
////    }
////
////    return false;
////}
////
////int main() {
////    int n, m;
////    cout << "Enter number of nodes and edges: ";
////    cin >> n >> m;
////
////     Input for BFS and DFS (undirected graph)
////    vector<vector<int>> adjList(n);
////    cout << "Enter edges (u v):\n";
////    for (int i = 0; i < m; ++i) {
////        int u, v;
////        cin >> u >> v;
////        adjList[u].push_back(v);
////        adjList[v].push_back(u);
////    }
////
////     Perform BFS and DFS Traversals
////    int startNode;
////    cout << "Enter start node for traversal: ";
////    cin >> startNode;
////
////    vector<int> bfsResult = BFS(startNode, adjList);
////    vector<int> dfsResult = DFS(startNode, adjList);
////
////    cout << "BFS Traversal: ";
////    for (int node : bfsResult) cout << node << " ";
////    cout << endl;
////
////    cout << "DFS Traversal: ";
////    for (int node : dfsResult) cout << node << " ";
////    cout << endl;
////
////     Shortest Path
////    int start, end;
////    cout << "Enter start and end nodes for shortest path: ";
////    cin >> start >> end;
////    shortestPath(start, end, adjList);
////
////     Detect Cycle
////    bool cycleBFS = detectCycleBFS(0, adjList);
////    bool cycleDFS = detectCycleDFS(adjList);
////
////    cout << "Cycle detected using BFS: " << (cycleBFS ? "Yes" : "No") << endl;
////    cout << "Cycle detected using DFS: " << (cycleDFS ? "Yes" : "No") << endl;
////
////    return 0;
////}
