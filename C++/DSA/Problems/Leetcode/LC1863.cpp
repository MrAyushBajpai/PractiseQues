#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<int>& nums, int ptr, int current_res){
    if(nums.size() == ptr){
        return current_res;
    }

    return dfs(nums, ptr+1, current_res ^ nums[ptr]) + dfs(nums, ptr+1, current_res);
}

int subsetXORSum(vector<int>& nums) {
    return dfs(nums, 0, 0);
}

int main() {
    vector<vector<int>> test_cases = {
        {1, 3},
        {5, 1, 6},
        {0, 0, 0},
        {2, 4, 6, 8},
        {1}
    };

    for (int i = 0; i < test_cases.size(); ++i) {
        cout << "Test case " << i + 1 << ": ";
        for (int num : test_cases[i]) {
            cout << num << " ";
        }
        cout << "\nSubset XOR sum: " << subsetXORSum(test_cases[i]) << "\n\n";
    }

    return 0;
}
