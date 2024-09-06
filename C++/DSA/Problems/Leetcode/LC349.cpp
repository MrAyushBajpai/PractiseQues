#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    // Simple Approach
    // vector<int> res;
    // for (auto it: nums1){
    //     if (find(res.begin(), res.end(), it) == res.end() && find(nums2.begin(), nums2.end(), it) != nums2.end()){
    //        res.push_back(it);
    //    }
    // }
    // return res;

    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> res;

    for(auto it: nums2){
        if (set1.find(it) != set1.end()){
            res.insert(it);
        }
    }

    return vector<int>(res.begin(), res.end());
    
}

int main(){
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};

    vector<int> result = intersection(nums1, nums2);
    for(auto it: result){
        cout << it << endl;
    }
}