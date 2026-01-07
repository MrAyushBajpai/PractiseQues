#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        if (nums[left] % 2 == 0) {
            left++;
        } else if (nums[right] % 2 == 1) {
            right--;
        } else {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
    return nums;
}


void printVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    // Sample Test Case 1
    vector<int> nums1 = {3, 1, 2, 4};
    cout << "Original array 1: ";
    printVector(nums1);
    sortArrayByParity(nums1);
    cout << "After sorting by parity: ";
    printVector(nums1);
    cout << endl;

    // Sample Test Case 2
    vector<int> nums2 = {0, 2, 1};
    cout << "Original array 2: ";
    printVector(nums2);
    sortArrayByParity(nums2);
    cout << "After sorting by parity: ";
    printVector(nums2);
    cout << endl;

    // Sample Test Case 3
    vector<int> nums3 = {1, 3, 5, 7};
    cout << "Original array 3: ";
    printVector(nums3);
    sortArrayByParity(nums3);
    cout << "After sorting by parity: ";
    printVector(nums3);
    cout << endl;

    return 0;
}