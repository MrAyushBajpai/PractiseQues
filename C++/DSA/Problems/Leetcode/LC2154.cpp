#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findFinalValue(vector<int>& nums, int original) {
    unordered_set<int> s(nums.begin(), nums.end());
    while(s.find(original) != s.end()) original *= 2;
    return original;
}

int main(){
    vector<int> nums = {5,3,6,1,12};
    int original = 3;

    cout << findFinalValue(nums, original);
}