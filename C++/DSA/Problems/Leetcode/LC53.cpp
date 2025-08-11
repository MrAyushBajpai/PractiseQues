#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxVal = nums[0];
    int currVal = nums[0];

    for(int i = 1; i < nums.size(); i++){
        currVal = max(nums[i], currVal + nums[i]);
        maxVal = max(maxVal, currVal);
    }
    return maxVal;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums);
}