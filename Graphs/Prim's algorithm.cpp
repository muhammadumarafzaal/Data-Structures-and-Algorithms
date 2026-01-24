//#include <iostream>
//#include <vector>
//#include <queue>
//#include<map>
//using namespace std;
//
//int spanningTree(int V, vector<vector<pair<int, int>>>& adj) {
//    // Priority queue (min-heap): {edge weight, {current node, parent node}}
//    
//   
//    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>pq;
//    // To keep track of nodes included in the MST
//    vector<bool> IsMst(V, false);
//
//    // To store parent of each node in the MST (optional, useful if we want to print the MST edges)
//    vector<int> parent(V, -1);
//
//    // Total cost of the MST
//    int cost = 0;
//
//    // Start with node 0 (arbitrary starting point)
//    pq.push({ 0, {0, -1} }); // {weight, {node, parent}}
//
//    while (!pq.empty()) {
//        // Extract the edge with the smallest weight
//        int wt = pq.top().first;
//        int node = pq.top().second.first;
//        int par = pq.top().second.second;
//        pq.pop();
//
//        // If the node is already in the MST, skip it
//        if (IsMst[node]) continue;
//
//        // Include the current node in the MST
//        IsMst[node] = true;
//        cost += wt;
//        parent[node] = par;
//
//        // Traverse the adjacent nodes
//        for (auto& neighbor : adj[node]) {
//            int adjNode = neighbor.first;    // Adjacent node
//            int edgeWt = neighbor.second;   // Edge weight
//            if (!IsMst[adjNode]) {
//                pq.push({ edgeWt, {adjNode, node} });
//            }
//        }
//    }
//
//    // Optional: Print the MST edges
//    cout << "Edges in the MST:" << endl;
//    for (int i = 1; i < V; i++) {
//        if (parent[i] != -1) {
//            cout << "Edge: " << parent[i] << " - " << i << endl;
//        }
//    }
//
//    return cost; // Total weight of the MST
//}
//
//int main() {
//    int V, E;
//    cin >> V >> E;
//
//    // Adjacency list representation: Each node has a vector of {adjacent node, weight}
//    vector<vector<pair<int, int>>> adj(V); // Use dynamic vector instead of array
//
//    for (int i = 0; i < E; i++) {
//        int u, v, wt;
//        cin >> u >> v >> wt;
//
//        // Undirected graph: Add edges in both directions
//        adj[u].push_back({ v, wt });
//        adj[v].push_back({ u, wt });
//    }
//
//    // Compute the cost of the Minimum Spanning Tree
//    int cost = spanningTree(V, adj);
//    cout << "Total cost of the MST: " << cost << endl;
//
//    return 0;
//}
