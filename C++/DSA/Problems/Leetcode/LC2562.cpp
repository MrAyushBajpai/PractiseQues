#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long digits(long long val){
    int count = 0;
    while(val > 0){
        count++;
        val /= 10;
    }

    return count;
}

long long concatenate(long long a, long long b){
    int multipler = pow(10, digits(b));
    return a * multipler + b;
}

long long findTheArrayConcVal(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    long long num = 0;

    while(left < right){
        num += concatenate(nums[left], nums[right]);
        left++;
        right--;
    }

    if(left == right){
        num += nums[nums.size() / 2];
    }

    return num;
}

int main() {
    vector<vector<int>> testCases = {
        {7, 52, 2, 4},        // expected: 596 (7||4 + 52||2)
        {5, 14, 13, 8, 12},   // expected: 673 (5||12 + 14||8 + 13)
        {1, 2},              // expected: 12
        {9},                 // expected: 9
        {10, 20, 30, 40},    // expected: 5030 (10||40 + 20||30)
        {0, 1, 0}            // expected: 1 (0||0 + 1)
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << ": ";
        cout << findTheArrayConcVal(testCases[i]) << endl;
    }

    return 0;
}
