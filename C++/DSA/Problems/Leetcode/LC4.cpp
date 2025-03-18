#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;
    vector<int> ans;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] < nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        else{
            ans.push_back(nums2[j]);
            j++;
        }
    }

    while(i < nums1.size()){
        ans.push_back(nums1[i]);
        i++;
    }

    while(j < nums2.size()){
        ans.push_back(nums2[j]);
        j++;
    }

    if(ans.size() % 2 == 1){
        return ans[(ans.size() / 2)];
    }
    else{
        return (ans[(ans.size() / 2)] + ans[(ans.size() / 2) - 1]) / 2.0;
    }
}

int main(){
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout << findMedianSortedArrays(nums1, nums2) << endl;
}