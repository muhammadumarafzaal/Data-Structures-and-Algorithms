//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//int FindParent(int u, vector<int>& parent) {
//    if (u == parent[u])
//        return u;
//    return parent[u] = FindParent(parent[u], parent);
//}
//
//void UnionByRank(int u, int v, vector<int>& parent, vector<int>& rank) {
//    int Pu = FindParent(u, parent);
//    int Pv = FindParent(v, parent);
//
//    if (Pu != Pv) {
//        if (rank[Pu] > rank[Pv]) {
//            parent[Pv] = Pu;
//        }
//        else if (rank[Pv] > rank[Pu]) {
//            parent[Pu] = Pv;
//        }
//        else {
//            parent[Pv] = Pu;
//            rank[Pu]++;
//        }
//    }
//}
//
//int spanningTree(int v, vector<vector<pair<int, int>>>& adj) {
//    vector<int> parent(v); // To store the parent of each node
//    vector<int> rank(v, 0); // To store the rank of each node
//
//    for (int i = 0; i < v; i++) {
//        parent[i] = i;
//    }
//
//    // Priority queue to store edges with their weights in ascending order
//    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
//
//    // Add all edges to the priority queue
//    for (int i = 0; i < v; i++) {
//        for (auto& edge : adj[i]) {
//            int weight = edge.first;
//            int neighbor = edge.second;
//            pq.push({ weight, {i, neighbor} });
//        }
//    }
//
//    int mstWeight = 0; // To store the total weight of the Minimum Spanning Tree
//    int edgeCount = 0; // Count of edges added to the MST
//
//    while (!pq.empty()&&edgeCount < v - 1) {
//        int wt = pq.top().first;
//        int u = pq.top().second.first;
//        int v = pq.top().second.second;
//        pq.pop();
//        if (FindParent(u, parent) != FindParent(v, parent)) {
//            UnionByRank(u, v, parent, rank);
//            mstWeight += wt;
//            edgeCount++;
//        }
//    }
//   
//
//
//    return mstWeight;
//}
//
//int main() {
//    int v = 5; // Number of vertices
//    vector<vector<pair<int, int>>> adj(v);
//
//    // Example graph (undirected):
//    // Edge list with weights: (weight, u, v)
//    // 1 - 0 - 2
//    // 1 - 0 - 3
//    // 4 - 1 - 2
//    // 6 - 2 - 3
//    // 5 - 1 - 4
//
//    adj[0].push_back({ 1, 2 });
//    adj[0].push_back({ 1, 3 });
//    adj[1].push_back({ 4, 2 });
//    adj[2].push_back({ 6, 3 });
//    adj[1].push_back({ 5, 4 });
//
//    cout << "Total weight of the Minimum Spanning Tree: " << spanningTree(v, adj) << endl;
//
//    return 0;
//}
