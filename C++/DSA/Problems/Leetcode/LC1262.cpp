#include <iostream>
#include <vector>
using namespace std;

int maxSumDivThree(vector<int>& nums) {
    vector<int> dp(3, 0);

    for (int x : nums) {
        vector<int> cur(dp);
        for (int r = 0; r < 3; r++) {
            int newSum = dp[r] + x;
            cur[newSum % 3] = max(cur[newSum % 3], newSum);
        }
        dp = cur;
    }
    return dp[0];
}

int main() {
    vector<vector<int>> testCases = {
        {3, 6, 5, 1, 8},   // Expected: 18
        {4},              // Expected: 0
        {1, 2, 3, 4, 4},  // Expected: 12
        {2, 6, 2, 2, 7},  // Expected example: 15
        {3, 3, 3, 3}      // Expected: 12
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test case " << i + 1 << ": ";
        for (int x : testCases[i]) cout << x << " ";
        cout << "\nMax sum divisible by 3 = "
             << maxSumDivThree(testCases[i]) << "\n\n";
    }

    return 0;
}
