#include <iostream>
#include <vector>
using namespace std;

int countPartitions(vector<int>& nums) {
    int count = 0;
    int leftSum = 0;
    int rightSum = 0;
    
    for(int i = 0; i < nums.size(); i++){
        rightSum += nums[i];
    }

    for(int i = 0; i < nums.size() - 1; i++){
        leftSum += nums[i];
        rightSum -= nums[i];
        if ((leftSum & 1) == (rightSum & 1)) count++;
    }

    return count;
}

void printVector(const vector<int>& nums) {
    cout << "[ ";
    for (int x : nums) cout << x << " ";
    cout << "]";
}

int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3, 4},
        {2, 2, 2, 2},
        {1, 1, 1, 1, 1},
        {5, 10, 15},
        {1, 3, 5, 7}
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << ": ";
        printVector(testCases[i]);
        cout << "\nValid partitions = " 
             << countPartitions(testCases[i]) << "\n\n";
    }

    return 0;
}