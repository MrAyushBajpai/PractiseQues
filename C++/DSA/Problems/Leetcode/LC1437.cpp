#include <iostream>
#include <vector>
using namespace std;

bool kLengthApart(vector<int>& nums, int k) {
    int gap = k;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1 && gap < k) return false;
        if(nums[i] == 1) gap = 0;
        else gap++;
    }
    return true;
}

int main(){
    vector<int> nums1 = {1,0,0,0,1,0,0,1};
    vector<int> nums2 = {1,0,1,0,0,1};
    int k = 2;

    cout << boolalpha;  // print 'true'/'false' instead of 1/0
    cout << "Test 1: " << kLengthApart(nums1, k) << endl;
    cout << "Test 2: " << kLengthApart(nums2, k) << endl;

    return 0;
}