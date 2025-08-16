#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s;
    for(auto it: nums){
        s.insert(it);
    }

    int maxLen = 0;
    for(int val: s){
        if(s.find(val - 1) == s.end()){
            int seq = 1;
            while(s.find(val + 1) != s.end()){
                seq++;
                val++;
            }
            maxLen = max(maxLen, seq);
        }
    }
    return maxLen;
}

int main(){
    vector<int> nums = {100,4,200,1,3,2};
    cout << longestConsecutive(nums);
}