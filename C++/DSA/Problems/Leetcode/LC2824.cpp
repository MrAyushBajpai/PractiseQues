#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPairs(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int start = 0, end = nums.size() - 1, pairCount = 0;

    while (start <= end) {
        if (nums[start] + nums[end] < target) {
            pairCount += end - start;
            start++;
        }
        else {
            end--;
        }
    }
    return pairCount;
}

int main() {
    vector<int> nums = {-1, 1, 2, 3, 1};
    int target = 2;
    cout << countPairs(nums, target) << endl;
    return 0;
}