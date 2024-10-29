#include <iostream>
#include <vector>
using namespace std;


vector<int> searchRangeLinear(vector<int>& nums, int target) {
    int min = -1, max = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            if (min == -1) {
                min = i;
            }
            max = i;
        }
    }
    return {min, max};
}

vector<int> searchRangeBinary(vector<int>& nums, int target) {
    int min = 0, max = nums.size() - 1;
    int firstOccurrence = -1;

    while(min <= max){
        int mid = (min + max)/ 2;
        if (nums[mid] == target){
            firstOccurrence = mid;
            max = mid - 1;
        }
        else if (nums[mid] < target){
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }

    min = 0, max = nums.size() - 1;
    int lastOccurrence = -1;

    while(min <= max){
        int mid = (min + max)/ 2;
        if (nums[mid] == target){
            lastOccurrence = mid;
            min = mid + 1;
        }
        else if (nums[mid] < target){
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }

    return {firstOccurrence, lastOccurrence};
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    vector<int> res = searchRangeBinary(nums, 8);
    for (auto it: res){
        cout << it << endl;
    }
}