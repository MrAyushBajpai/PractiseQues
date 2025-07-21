#include <iostream>
#include <vector>
using namespace std;

int findMaxSum(vector<int>& arr) {
    if (arr.size() == 0) return 0;
    if (arr.size() == 1) return arr[0];
    
    int prev2 = arr[0];
    int prev1 = max(arr[0], arr[1]);

    for(int i = 2; i < arr.size(); i++){
        int curr = max(prev1, prev2 + arr[i]);
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {
    vector<int> nums = {3, 2, 5, 10, 7};
    int maxSum = findMaxSum(nums);
    cout << "Maximum sum of non-adjacent elements: " << maxSum << endl;
    return 0;
}
