//#include <iostream>
//using namespace std;
//int routeCost(int graph[4][4], int route[], int numCities) {
//    int totalCost = 0;
//    for (int i = 0; i < numCities - 1; i++) {
//        totalCost += graph[route[i]][route[i + 1]];
//    }
//    totalCost += graph[route[numCities - 1]][route[0]]; // Returning to the starting city
//    return totalCost;
//}
//bool nextRoute(int route[], int Cities) {
//    int i = Cities - 2;
//    while (i >= 0 && route[i] >= route[i + 1]) {
//        i--;
//    }
//    if (i < 0) {
//        return false;
//    }
//    int j = Cities - 1;
//    while (route[j] <= route[i]) {
//        j--;
//    }
//    int temp = route[i];
//    route[i] = route[j];
//    route[j] = temp;
//    int left = i + 1;
//    int right = Cities - 1;
//    while (left < right) {
//        temp = route[left];
//        route[left] = route[right];
//        route[right] = temp;
//        left++;
//        right--;
//    }
//    return true;
//}
//void solveTSP(int graph[4][4]) {
//    int route[4] = { 0, 1, 2, 3 };
//    int minCost = INT_MAX; 
//    int shortroute[4] = { 0, 0, 0, 0 };
//    int size = 4;
//    do {
//        int currentCost = routeCost(graph, route, size);
//        if (currentCost < minCost) {
//            minCost = currentCost;
//            for (int i = 0; i < 4; i++) {
//                shortroute[i] = route[i];
//            }
//        }
//    } while (nextRoute(route, size)); // Generate next route
//    cout << "Shortest Route: ";
//    for (int i = 0; i < 4; i++) {
//        cout << shortroute[i] << " ";
//    }
//    cout << shortroute[0] << endl; 
//    cout << "Minimum Cost: " << minCost << endl;
//}
//int main() {
//    int graph[4][4] = {
//        {0, 10, 15, 20},
//        {10, 0, 35, 25},
//        {15, 35, 0, 30},
//        {20, 25, 30, 0}
//    };
//    solveTSP(graph); 
//    return 0;
//}
