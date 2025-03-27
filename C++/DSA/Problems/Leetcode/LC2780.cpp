#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int minimumIndex(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (auto num : nums) {
        freq[num]++;
    }
    
    int dominant = -1;
    int maxFreq = 0;
    for (auto& it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            dominant = it.first;
        }
    }
    
    int leftFreq = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        if (nums[i] == dominant) {
            leftFreq++;
        }
            
        int leftSize = i + 1;
        int rightSize = n - leftSize;
        int rightFreq = maxFreq - leftFreq;

        if (leftFreq * 2 > leftSize && rightFreq * 2 > rightSize) {
            return i;
        }
    }
    
    return -1;
}


int main(){
    vector<int> nums = {1,2,2,2};
    cout << minimumIndex(nums);
}