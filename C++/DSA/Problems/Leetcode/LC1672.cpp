#include <iostream>
#include <vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxSum = INT_MIN;
    for(auto customer: accounts){
        int sum = 0;
        for(auto it: customer){
            sum += it;
        }
        if(sum > maxSum) maxSum = sum;
    }
    return maxSum;
}

int main() {
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1},
        {5, 1, 1}
    };

    cout << "Maximum wealth: " << maximumWealth(accounts) << endl;
    return 0;
}