#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int arithmeticTriplets(vector<int>& nums, int diff) {
    int pairs = 0;
    unordered_map<int, int> index;
    for(int i = 0; i < nums.size(); i++){
        index[nums[i]] = i;
    }

    for(auto it: nums){
        if (index.find(it-diff) != index.end() && index.find(it-diff-diff) != index.end()){
            pairs++;
        }
    }

    return pairs;
}

int main(){
    vector<int> nums = {0, 1, 4, 6, 7, 10};
    cout << arithmeticTriplets(nums, 3);
}