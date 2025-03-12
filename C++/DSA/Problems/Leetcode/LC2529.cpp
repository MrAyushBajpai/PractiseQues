#include <iostream>
#include <vector>
using namespace std;

int maximumCount(vector<int>& nums) {
    int negCount = 0, posCount = 0;
    for(auto it: nums){
        if (it < 0){
            negCount++;
        }
        else if (it > 0){
            posCount++;
        }
    }   
    return max(negCount, posCount);
}

int main() {
    vector<int> nums1 = {-3, -2, -1, 0, 1, 2, 3};
    vector<int> nums2 = {-5, -4, -3, -2, -1};  // All negatives
    vector<int> nums3 = {1, 2, 3, 4, 5};       // All positives
    vector<int> nums4 = {0, 0, 0};             // No positive or negative numbers

    cout << "Test Case 1: " << maximumCount(nums1) << endl; // Output: 3
    cout << "Test Case 2: " << maximumCount(nums2) << endl; // Output: 5
    cout << "Test Case 3: " << maximumCount(nums3) << endl; // Output: 5
    cout << "Test Case 4: " << maximumCount(nums4) << endl; // Output: 0

    return 0;
}