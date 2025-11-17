#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int maxVal = 0;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == 1) count++;
        else{
            maxVal = max(maxVal, count);
            count = 0;
        }
    }
    maxVal = max(maxVal, count);
    return maxVal;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums) << endl; // Output: 3
    return 0;
}