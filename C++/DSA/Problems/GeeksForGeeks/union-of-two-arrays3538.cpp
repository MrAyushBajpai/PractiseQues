// https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int doUnion(vector<int> arr1, vector<int> arr2){
    unordered_set<int> result;

    for(auto it: arr1){
        result.insert(it);
    }

    for(auto it: arr2){
        result.insert(it);
    }

    return result.size();
}

int main(){
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {1,2,3};
    cout << doUnion(nums1, nums2);
}