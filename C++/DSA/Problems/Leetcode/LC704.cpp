#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) end = mid - 1;
        else start = mid + 1;
    }        
    return -1;
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9, 12, 17};

    int target1 = 9;
    int target2 = -3;
    int target3 = 4; // not in the array

    cout << "Index of " << target1 << ": " << search(nums, target1) << endl;
    cout << "Index of " << target2 << ": " << search(nums, target2) << endl;
    cout << "Index of " << target3 << ": " << search(nums, target3) << endl;

    return 0;
}