#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0, element = 0;
    for(auto it: nums){
        if(count == 0){
            element = it;
        }
        count += (it == element ? 1: -1);
    }
    return element;
}

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums);
}