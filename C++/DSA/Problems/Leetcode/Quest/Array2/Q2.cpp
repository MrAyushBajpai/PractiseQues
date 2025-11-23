#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> counting(101, 0);

    for(const int& num: nums){
        counting[num]++;
    }

    for(int i = 1; i < 101; i++){
        counting[i] += counting[i-1];
    }

    vector<int> res;
    for(const int& num: nums){
        if(num == 0){
            res.push_back(0);
        }
        else{
            res.push_back(counting[num - 1]);
        }
    }

    return res;
}

int main() {
    vector<vector<int>> tests = {
        {8, 1, 2, 2, 3},
        {6, 5, 4, 8},
        {7, 7, 7, 7},
        {0, 0, 1},
        {1}
    };

    for (auto& test : tests) {
        vector<int> result = smallerNumbersThanCurrent(test);

        cout << "Input: ";
        for (int n : test) cout << n << " ";
        
        cout << "\nOutput: ";
        for (int r : result) cout << r << " ";
        
        cout << "\n\n";
    }

    return 0;
}