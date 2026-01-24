//#include <iostream>
//#include <vector>
//#include <limits>
//#include <algorithm>
//using namespace std;
//
//// Function to find the optimal cost for TSP
//int findTSP(vector<vector<int>>& costMatrix)
//{
//    int numberOfNodes = costMatrix.size();
//    vector<int> remainingNodes;
//
//    // Initialize nodes to be visited (excluding the starting node)
//    for (int i = 1; i < numberOfNodes; i++)
//        remainingNodes.push_back(i);
//
//    int minimumCost = numeric_limits<int>::max(); // Store the minimum cost
//
//    // Iterate through all permutations of the nodes
//    do
//    {
//        int currentCost = 0;
//        int currentNode = 0; // Start from the first node (index 0)
//
//        // Calculate the cost for the current permutation
//        for (int i = 0; i < remainingNodes.size(); i++)
//        {
//            currentCost += costMatrix[currentNode][remainingNodes[i]];
//            currentNode = remainingNodes[i];
//        }
//
//        // Add the cost to return to the starting node
//        currentCost += costMatrix[currentNode][0];
//
//        // Update the minimum cost
//        minimumCost = min(minimumCost, currentCost);
//        cout << "Current path cost: " << currentCost << endl;
//
//    } while (next_permutation(remainingNodes.begin(), remainingNodes.end()));
//
//    return minimumCost;
//}
//
//int main()
//{
//    vector<vector<int>> costMatrix = {
//        {0, 10, 15, 20},
//        {10, 0, 35, 25},
//        {15, 35, 0, 30},
//        {20, 25, 30, 0}
//    };
//
//    // Find the optimal TSP path
//    int optimalCost = findTSP(costMatrix);
//
//    // Output the result
//    cout << "Minimum cost to visit all nodes and return to start: " << optimalCost << endl;
//
//    return 0;
//}
