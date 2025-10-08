#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for(int start = 0; start < nums.size() - 2; start++){
        if (start > 0 && nums[start] == nums[start - 1]) continue;
        int mid = start + 1, end = nums.size() - 1;
        while(mid < end){
            if(nums[start] + nums[mid] + nums[end] == 0){
                res.push_back({nums[start], nums[mid], nums[end]});
                while (mid < end && nums[mid] == nums[mid + 1]) mid++;
                while (mid < end && nums[end] == nums[end - 1]) end--;
                
                mid++;
                end--;
            
            }
            else if(nums[start] + nums[mid] + nums[end] > 0){
                end--;
            }
            else{
                mid++;
            }
        }
    }       
    return res;
}

int main() {
    vector<vector<int>> testCases = {
        { -1, 0, 1, 2, -1, -4 },
        { 0, 0, 0, 0 },
        { 1, 2, -2, -1 },
        { -2, 0, 1, 1, 2 }
    };

    for(int i = 0; i < testCases.size(); i++){
        cout << "Test case " << i+1 << ": ";
        for(int num : testCases[i]) cout << num << " ";
        cout << "\nResulting triplets:\n";

        vector<vector<int>> res = threeSum(testCases[i]);
        for(auto &triplet : res){
            cout << "[ ";
            for(int num : triplet) cout << num << " ";
            cout << "]\n";
        }
        cout << "--------------------\n";
    }

    return 0;
}