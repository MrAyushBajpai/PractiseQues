// https://leetcode.com/problems/missing-number/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int missingNumberBruteForce(vector<int>& nums) {
    for (int i = 0; i <= nums.size(); i++){
        int missing = 1;
        for (auto it: nums){
            if (it == i){
                missing = 0;
                break;
            }
        }
        if (missing) return i;
    }
    return -1;
}

int missingNumberBitwise(vector<int>& nums){
    int missing = 0;
    for (auto it: nums){
        missing ^= it;
    }

    for (int i = 0; i <= nums.size(); i++){
        missing ^= i;
    }

    return missing;
}

int missingNumberMaths(vector<int>& nums){
    // Using Sum Formula: n*(n+1)/2

    int numSum = 0;
    for(auto it: nums){
        numSum += it;
    }

    int n = nums.size();
    int rangeSum = n * (n+1)/2;
    return rangeSum - numSum;
}

int missingNumberSort(vector<int>& nums){
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] != i){
            return i;
        }
    }
    return nums.size();
}

int missingNumberHashTable(vector<int>& nums){
    unordered_map<int, bool> numMap;
    for(auto it: nums){
        numMap[it] = true;
    }

    for(int i = 0; i <= nums.size(); i++){
        if (numMap.find(i) == numMap.end()){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout << missingNumberHashTable(nums);
}