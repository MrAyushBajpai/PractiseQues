#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxCount = 0;
    for (const int &it : nums)
    {
        if (it == 1)
        {
            ++count;
            maxCount = max(count, maxCount);
        }
        else
        {
            count = 0;
        }
    }
    return maxCount;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums);
}