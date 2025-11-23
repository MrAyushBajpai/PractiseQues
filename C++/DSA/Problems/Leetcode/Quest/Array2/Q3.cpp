#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void cyclicSort(vector<int>& nums){
    int i = 0;
    while (i < nums.size()){
        if(nums[i] != nums[nums[i] - 1]){
            swap(nums[i], nums[nums[i] - 1]);
        }
        else{
            i++;
        }
    }
}

vector<int> findDisappearedNumbers(vector<int>& nums) {
    cyclicSort(nums);
    vector<int> res;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != i + 1){
            res.push_back(i + 1);
        }
    }
    return res;
}

int main(){
    vector<vector<int>> testCases = {
        {4,3,2,7,8,2,3,1},
        {1,1},
        {2,2},
        {1,2,3,4,5},
        {5,4,3,2,1},
        {1,3,3,3,5}
    };

    for(int t = 0; t < testCases.size(); t++){
        vector<int> nums = testCases[t];
        
        cout << "Test case " << t + 1 << ": [ ";
        for(int n : nums) cout << n << " ";
        cout << "]\n";

        vector<int> missing = findDisappearedNumbers(nums);

        cout << "Missing numbers: [ ";
        for(int m : missing) cout << m << " ";
        cout << "]\n\n";
    }

    return 0;
}