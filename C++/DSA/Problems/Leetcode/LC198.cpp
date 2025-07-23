#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    if(nums.size() == 1) return nums[0];

    int prev2 = nums[0];
    int prev1 = max(nums[0], nums[1]);

    for(int i = 2; i < nums.size(); i++){
        int current = max(prev2 + nums[i], prev1);
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main() {
    vector<int> houses = {2, 7, 9, 3, 1};
    int maxRobbed = rob(houses);
    cout << "Maximum amount that can be robbed: " << maxRobbed << endl;
    return 0;
}
