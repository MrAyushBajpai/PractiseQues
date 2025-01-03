#include <iostream>
#include <vector>

using namespace std;

int waysToSplitArrayBruteForce(vector<int>& nums) {
    int n = nums.size();
    int splits = 0;

    for(int k = 0; k < n - 1; k++){

        int start_count = 0;
        int end_count = 0;

        for (int i = 0; i <= k; i++){
            start_count += nums[i];
        }

        for (int j = k + 1; j < n; j++) {
            end_count += nums[j];
        }

        if (start_count >= end_count){
            splits++;
        }
    }
    return splits;
}

int prefixSum(vector<int> prefix, int left, int right){
    if (left == 0) return prefix[right];
    return prefix[right] - prefix[left - 1];
}

int waysToSplitArrayPrefixSum(vector<int>& nums) {
    int n = nums.size();
    int splits = 0;

    vector<int> prefix;
    prefix.push_back(nums[0]);
    for(int i = 1; i < nums.size(); i++){
        prefix.push_back(prefix[i-1] + nums[i]);
    }

    for(int k = 0; k < n - 1; k++){
        int start_sum = prefixSum(prefix, 0, k);
        int end_sum = prefixSum(prefix, k+1, n-1);

        if(start_sum >= end_sum) splits++;
    }

    return splits;
}

int waysToSplitArrayPreSum(vector<int>& nums) {
    int n = nums.size();
    int splits = 0;

    long long int left_sum = 0;
    long long int right_sum = 0;

    for(auto it: nums){
        right_sum += it;
    }

    for(int k = 0; k < n - 1; k++){
        left_sum += nums[k];
        right_sum -= nums[k];

        if (left_sum >= right_sum){
            splits++;
        }
    }
    return splits;
}

int main(){
    vector<int> nums = {1, 1, 1, 2, 3};
    cout << waysToSplitArrayPreSum(nums);
}