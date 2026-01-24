//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int vertex, edges;
//    cin >> vertex >> edges;
//    // Declare an adjacency list as a vector of vectors
//    vector<vector<int>> AdjList(vertex);
//
//    int u, v;
//    for (int i = 0; i < edges; i++) {
//        cin >> u >> v;
//        // Add edge u -> v
//        AdjList[u].push_back(v);
//        // Add edge v -> u (for undirected graph)
//        AdjList[v].push_back(u);
//    }
//    // Display the adjacency list
//    for (int i = 0; i < vertex; i++) {
//        cout << "Vertex " << i << " -> ";
//        for (int j = 0; j < AdjList[i].size();j++) {
//            cout << AdjList[i][j]<<" ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
