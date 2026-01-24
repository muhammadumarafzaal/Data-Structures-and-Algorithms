//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits> // For INT_MAX
//using namespace std;
//vector<int> dijkstra(int V, vector<vector<pair<int, int>>>& adj, int S) {
//    // Initialize the `dist` array to store shortest distances from source to each vertex
//    vector<int> dist(V, INT_MAX);
//    dist[S] = 0;
//    vector<bool>Explored(V, 0);
//    // Priority queue (min-heap) to store {distance, node}
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    pq.push({ 0, S }); // Distance to the source node is 0
//
//    while (!pq.empty()) {
//        int currDist = pq.top().first; // Current distance
//        int node = pq.top().second;   // Current node
//        pq.pop();
//        if (Explored[node] == 1)
//            continue;
//        Explored[node] = 1;
//
//        // Traverse all neighbors of the current node
//        for (auto& neighbor : adj[node]) {
//            int adjNode = neighbor.first; // Adjacent node
//            int edgeWeight = neighbor.second; // Weight of the edge
//
//            // Relax the edge if a shorter path is found
//            if (dist[node] + edgeWeight < dist[adjNode]) {
//                dist[adjNode] = dist[node] + edgeWeight;
//                pq.push({ dist[adjNode], adjNode }); // Push the updated distance into the queue
//            }
//        }
//    }
//
//    return dist; // Return the shortest distances
//}
//
//int main() {
//    int V, E;
//    cin >> V >> E;
//
//    // Adjacency list representation: Each node has a vector of {adjacent node, weight}
//    vector<vector<pair<int, int>>> adj(V);
//
//    for (int i = 0; i < E; i++) {
//        int u, v, wt;
//        cin >> u >> v >> wt;
//        // unDirected graph
//        adj[u].push_back({ v, wt });
//        adj[v].push_back({ u, wt });
//    }
//
//    int S;
//    cin >> S; // Source vertex
//
//    vector<int> distances = dijkstra(V, adj, S);
//
//    // Print the shortest distances from the source node
//    cout << "Shortest distances from source node " << S << ":" << endl;
//    for (int i = 0; i < V; i++) {
//        cout << "Node " << i << " -> Distance: ";
//        if (distances[i] == INT_MAX) {
//            cout << "INF"; // Node is not reachable
//        }
//        else {
//            cout << distances[i];
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
