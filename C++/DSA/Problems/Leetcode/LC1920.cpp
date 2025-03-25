#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans;
    for (auto it: nums){
        ans.push_back(nums[it]);
    }
    return ans;
}

int main() {
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> result = buildArray(nums);

    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
