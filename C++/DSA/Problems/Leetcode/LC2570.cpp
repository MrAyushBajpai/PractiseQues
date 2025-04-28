#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
    vector<vector<int>> result;
    int i = 0, j = 0;
    int n = nums1.size(), m = nums2.size();

    while (i < n && j < m) {
        if (nums1[i][0] == nums2[j][0]) {
            result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
            i++;
            j++;
        } else if (nums1[i][0] < nums2[j][0]) {
            result.push_back(nums1[i]);
            i++;
        } else {
            result.push_back(nums2[j]);
            j++;
        }
    }

    while (i < n) {
        result.push_back(nums1[i]);
        i++;
    }
    while (j < m) {
        result.push_back(nums2[j]);
        j++;
    }

    return result;
}

int main() {
    vector<vector<int>> nums1 = {{1, 3}, {2, 4}, {5, 6}};
    vector<vector<int>> nums2 = {{2, 5}, {3, 7}, {6, 8}};

    vector<vector<int>> merged = mergeArrays(nums1, nums2);

    cout << "Test Case 1: " << endl;
    for (auto& vec : merged) {
        cout << "[" << vec[0] << ", " << vec[1] << "] ";
    }
    cout << endl;

    vector<vector<int>> nums3 = {};
    vector<vector<int>> nums4 = {{1, 2}, {3, 4}};

    merged = mergeArrays(nums3, nums4);

    cout << "Test Case 2: " << endl;
    for (auto& vec : merged) {
        cout << "[" << vec[0] << ", " << vec[1] << "] ";
    }
    cout << endl;

    vector<vector<int>> nums5 = {{1, 1}, {4, 4}};
    vector<vector<int>> nums6 = {{2, 2}, {3, 3}};

    merged = mergeArrays(nums5, nums6);

    cout << "Test Case 3: " << endl;
    for (auto& vec : merged) {
        cout << "[" << vec[0] << ", " << vec[1] << "] ";
    }
    cout << endl;

    return 0;
}
