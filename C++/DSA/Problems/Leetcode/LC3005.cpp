#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> freq;
    for(auto it: nums){
        freq[it]++;
    }

    int maxFreq = 0;
    int maxCount = 0;

    for(auto it: freq){
        if(it.second > maxFreq){
            maxFreq = it.second;
            maxCount = it.second;
        }
        else if(it.second == maxFreq){
            maxCount += it.second;
        }
    }
    return maxCount;
}

int main(){
    vector<int> nums = {1,2,2,3,1,4};
    cout << maxFrequencyElements(nums);
}