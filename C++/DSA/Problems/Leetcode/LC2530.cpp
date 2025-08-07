#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

long long maxKelements(vector<int>& nums, int k) {
    priority_queue<int, vector<int>> min_pq;
    for (auto it : nums) {
        min_pq.push(it);
    }

    long long sum = 0;
    while (k--) {
        int maxVal = min_pq.top();
        min_pq.pop();
        sum += maxVal;
        min_pq.push(ceil(maxVal / 3.0));
    }
    return sum;
}

int main(){
    vector<int> nums = {1,10,3,3,3};
    int k = 3;

    cout << maxKelements(nums, k);
}