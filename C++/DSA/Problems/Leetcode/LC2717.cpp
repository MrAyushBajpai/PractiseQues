#include <iostream>
#include <vector>
using namespace std;

int semiOrderedPermutation(vector<int> &nums)
{
    int l = 0, r = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            l = i;
        }
        if (nums[i] == nums.size())
        {
            r = i;
        }
    }
    if (r < l)
    {
        return l + (nums.size() - r - 1) - 1;
    }
    return l + (nums.size() - r - 1);
}

int main()
{
    vector<int> nums = {2, 1, 4, 3};
    cout << semiOrderedPermutation(nums);
}