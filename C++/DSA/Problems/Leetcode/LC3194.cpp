#include <iostream>
#include <vector>
#include <algorithm>
#include <float.h>
using namespace std;

double minimumAverage(vector<int>& nums) {
    double minAvg = DBL_MAX;
    sort(nums.begin(), nums.end());

    int start = 0, end = nums.size() - 1;
    while (start <= end) {
        double minimum = nums[start];
        double maximum = nums[end];

        double avg = (minimum + maximum) / 2.0;
        if (avg < minAvg)
            minAvg = avg;

        start++;
        end--;
    }

    return minAvg;
}

int main(){
    vector<int> nums = {7,8,3,4,15,13,4,1};
    cout << minimumAverage(nums);
}