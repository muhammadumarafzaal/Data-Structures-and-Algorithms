//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int vertex, edges;
//    cin >> vertex >> edges;
//
//    // Declare an adjacency list as a vector of vectors of pairs
//    vector<vector<pair<int, int>>> AdjList(vertex);
//
//    int u, v, weight;
//    for (int i = 0; i < edges; i++) {
//        cin >> u >> v >> weight;
//        // Add edge u -> v
//        AdjList[u].push_back(make_pair(v, weight));
//        // Add edge v -> u (for undirected graph)
//        AdjList[v].push_back(make_pair(u, weight));
//    }
//
//    // Display the adjacency list
//    for (int i = 0; i < vertex; i++) {
//        cout << "Vertex " << i << " -> ";
//        for (int j = 0; j < AdjList[i].size();j++) {
//            cout << "(" << AdjList[i][j].first << ", " << AdjList[i][j].second << ") ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
