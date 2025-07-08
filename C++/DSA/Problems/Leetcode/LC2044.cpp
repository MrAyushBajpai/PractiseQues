#include <iostream>
#include <vector>
using namespace std;

int maxOr = 0;

int helper(vector<int>& nums, int ptr, int currOr){
    if(ptr >= nums.size()){
        if (currOr == maxOr) return 1;
        return 0;
    }
    return helper(nums, ptr+1, currOr | nums[ptr]) + helper(nums, ptr+1, currOr);
}

int countMaxOrSubsets(vector<int>& nums) {
    maxOr = 0;
    for (auto it: nums){
        maxOr |= it;
    }
    return helper(nums, 0, 0);  
}

int main() {
    vector<int> nums = {3, 1};
    int result = countMaxOrSubsets(nums);
    cout << "Number of subsets with maximum OR: " << result << endl;
    // Expected output: 2
    // Explanation: The max OR is 3. Subsets {3}, {3,1} have OR == 3.
    return 0;
}
