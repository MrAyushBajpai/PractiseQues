#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) decreasing = false;
        if (nums[i] < nums[i - 1]) increasing = false;
    }
    
    return increasing || decreasing;
}

int main() {
    vector<vector<int>> testCases = {
        {1, 2, 2, 3},       // monotone increasing
        {6, 5, 4, 4},       // monotone decreasing
        {1, 3, 2},          // not monotone
        {1, 2, 4, 5},       // monotone increasing
        {1, 1, 1},          // constant sequence (both increasing & decreasing)
        {10},               // single element (trivially monotone)
        {}                  // empty vector (trivially monotone)
    };

    for (auto& nums : testCases) {
        cout << "{ ";
        for (int x : nums) cout << x << " ";
        cout << "} -> " 
             << (isMonotonic(nums) ? "Monotonic" : "Not Monotonic") 
             << endl;
    }

    return 0;
}