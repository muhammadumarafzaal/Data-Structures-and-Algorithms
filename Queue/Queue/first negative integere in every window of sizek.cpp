//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int display(queue<int> q) {
//    while (!q.empty()) {
//        if (q.front() < 0) {
//            return q.front();
//        }
//        q.pop();
//    }
//    return -1; 
//}
//int main() {
//    int arr[8] = { 2, -3, -4, -2, 7, 8, 9, -10 };
//    int n = 8;
//    int k = 3;
//    queue<int> q;
//    vector<int> ans;
//    for (int i = 0; i < k - 1; i++) {
//        q.push(arr[i]);
//    }
//    for (int i = k - 1; i < n; i++) {
//        q.push(arr[i]);  
//        ans.push_back(display(q)); 
//        q.pop(); 
//    }
//    // Print the results stored in ans
//    for (int value : ans) {
//        if (value != -1) {
//            cout << value << " ";
//        }
//        else {
//            cout << "No negative numbers found ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}
