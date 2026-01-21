//#include <iostream>
//#include <deque>
//#include <vector>
//using namespace std;
//
//int main() {
//    deque<int> q;
//    vector<int> ans;
//    int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k;
//
//    cout << "Enter the kth number for this sliding problem" << endl;
//    cin >> k;
//
//    // Check if k is within the valid range
//    if (k <= 0 || k > 10) {
//        cout << "Invalid value for k." << endl;
//        return 1;
//    }
//
//    for (int i = 0; i < k - 1; i++) {
//        // Just filling the deque initially
//        while (!q.empty() && nums[i] >= nums[q.back()]) {
//            q.pop_back();
//        }
//        q.push_back(i);
//    }
//
//    for (int i = k - 1; i < 10; i++) {
//        // Add the current element index to the deque
//        while (!q.empty() && nums[i] >= nums[q.back()]) {
//            q.pop_back();
//        }
//        q.push_back(i);
//
//        // Remove elements not in the current window
//        if (!q.empty() && q.front() <= i - k) {
//            q.pop_front();
//        }
//
//        // Record the maximum for the current window
//        ans.push_back(nums[q.front()]);
//    }
//
//    // Output the results using a traditional for loop
//    cout << "Maximums in each sliding window: ";
//    for (int i = 0; i < ans.size(); i++) {
//        cout << ans[i] << " ";
//    }
//    cout << endl;
//
//
//    return 0;
//}
