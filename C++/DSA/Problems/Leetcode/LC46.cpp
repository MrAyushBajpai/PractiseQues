#include <iostream>
#include <vector>
using namespace std;

void recurse(vector<int>& nums, vector<int>& current, vector<bool>& used, vector<vector<int>>& res) {
    if (current.size() == nums.size()) {
        res.push_back(current);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;

        used[i] = true;
        current.push_back(nums[i]);
        recurse(nums, current, used, res);

        current.pop_back();
        used[i] = false;
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    vector<bool> used(nums.size(), false);
    vector<int> current;

    recurse(nums, current, used, res);
    return res;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permute(nums);

    cout << "All permutations:\n";
    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
