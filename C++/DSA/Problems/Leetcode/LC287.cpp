// https://leetcode.com/problems/find-the-duplicate-number/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findDuplicateSort(vector<int>& nums) {
    // This approach will not work on the actual LC problem constraint - 
    // "You must solve the problem without modifying the array nums and using only constant extra space."
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++){
        if (nums[i] == nums[i+1]) return nums[i];
    }
}

int findDuplicateVisitedMarking(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++){
        int index = nums[i];
        if (index < 0) index *= -1;
        if (nums[index] < 0) return index;
        nums[index] *= -1;
    }
}

int findDuplicateSwapPositions(vector<int>& nums) {
    while (true){
        if (nums[0] == nums[nums[0]]) return nums[0];
        int temp = nums[nums[0]];
        nums[nums[0]] = nums[0];
        nums[0] = temp;
    }
    return -1;
}

int main(){
    vector<int> arr = {3,1,3,4,2};
    cout << findDuplicateSort(arr);
}