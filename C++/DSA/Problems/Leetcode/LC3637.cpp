#include <iostream>
#include <vector>
using namespace std;

bool isDecreasing(vector<int> &A, int a, int b)
{
    if (a == 0 || b == A.size() - 1)
        return false;
    for (int i = a; i < b; i++)
        if (A[i] <= A[i + 1])
            return false;

    return true;
}

bool isTrionic(vector<int> &nums)
{
    int n = nums.size(), peak = n - 1, valley = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (peak == n - 1 && nums[i] >= nums[i + 1])
            peak = i;
        if (valley == 0 && nums[n - 1 - i] <= nums[n - 2 - i])
            valley = n - 1 - i;
        if (peak < valley)
            return isDecreasing(nums, peak, valley);
    }

    return false;
}

int main() {
    vector<vector<int>> tests = {
        {1, 3, 5, 4, 2, 6, 8},      // valid trionic
        {1, 2, 3, 4, 5},            // only increasing
        {5, 4, 3, 2, 1},            // only decreasing
        {1, 3, 5, 7, 6, 4, 2, 9},   // valid trionic
        {1, 2, 3, 2, 1, 0},         // no final increase
        {3, 2, 1, 2, 3},            // no initial increase
        {1, 5, 3, 4, 2, 6},         // tricky invalid
        {1, 4, 7, 6, 5, 8, 10},     // valid trionic
        {1, 2, 1, 2, 1, 2},         // multiple waves (invalid)
        {2, 2, 2, 2},               // flat
        {1, 3, 2},                  // too short for trionic
        {1, 2, 3, 2, 3},            // valid minimal trionic
    };

    for (int i = 0; i < tests.size(); i++) {
        cout << "Test " << i + 1 << ": ";
        for (int x : tests[i]) cout << x << " ";
        cout << "\nResult: " << (isTrionic(tests[i]) ? "Trionic" : "Not Trionic") << "\n\n";
    }

    return 0;
}
