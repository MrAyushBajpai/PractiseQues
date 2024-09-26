#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sortColorsOneLiner(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}

void sortColorsCountingMethod(vector<int> &nums)
{
    int zeroCount = 0, oneCount = 0, twoCount = 0;
    for (auto it : nums)
    {
        if (it == 0)
            zeroCount++;
        else if (it == 1)
            oneCount++;
        else
            twoCount++;
    }

    int i = 0;
    while (zeroCount)
    {
        nums[i] = 0;
        i++;
        zeroCount--;
    }

    while (oneCount)
    {
        nums[i] = 1;
        i++;
        oneCount--;
    }

    while (twoCount)
    {
        nums[i] = 2;
        i++;
        twoCount--;
    }
}

void sortColorsThreePointer(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColorsThreePointer(nums);
    for (auto it : nums)
    {
        cout << it << endl;
    }
}