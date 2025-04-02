#include <iostream>
#include <vector>
using namespace std;

long long maximumTripletValue(vector<int>& nums) {
    // Sort?
    long long maxVal = 0;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                long long val = (long long)(nums[i] - nums[j]) * nums[k];
                if (val > maxVal)
                    maxVal = val;
            }
        }
    }

    return maxVal;
}

int main(){
    vector<int> nums = {12,6,1,2,7};
    cout << maximumTripletValue(nums);
}