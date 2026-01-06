#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());

    vector<int> res(2, 0);

    for (int x : nums1) {
        if (s2.count(x)) {
            res[0]++;
        }
    }

    for (int x : nums2) {
        if (s1.count(x)) {
            res[1]++;
        }
    }

    return res;
}

int main() {
    vector<int> nums1 = {4, 3, 2, 3, 1};
    vector<int> nums2 = {2, 2, 5, 2, 3, 6};

    vector<int> result = findIntersectionValues(nums1, nums2);

    cout << "Result: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}