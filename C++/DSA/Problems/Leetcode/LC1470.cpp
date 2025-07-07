#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> res;
    for(int i = 0; i < n; i++){
        res.push_back(nums[i]);
        res.push_back(nums[i + n]);
    }
    return res;
}

int main() {
    // Sample test case 1
    vector<int> nums1 = {2, 5, 1, 3, 4, 7};
    int n1 = 3;
    vector<int> result1 = shuffle(nums1, n1);
    cout << "Shuffled: ";
    for(int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Sample test case 2
    vector<int> nums2 = {1, 2, 3, 4, 5, 6};
    int n2 = 3;
    vector<int> result2 = shuffle(nums2, n2);
    cout << "Shuffled: ";
    for(int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
