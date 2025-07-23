#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& nums, int start, int end) {
    if(start == end) return nums[start];

    int prev2 = nums[start];
    int prev1 = max(nums[start], nums[start + 1]);

    for (int i = start + 2; i <= end; i++) {
        int current = max(prev2 + nums[i], prev1);
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int rob(vector<int>& nums) {
    if (nums.size() == 1)
        return nums[0];
    return max(findMax(nums, 0, nums.size() - 2), findMax(nums, 1, nums.size() - 1));
}

int main() {
    vector<int> houses = {2, 3, 2};
    int maxRobbed = rob(houses);
    cout << "Maximum amount that can be robbed: " << maxRobbed << endl;
    return 0;
}
