#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool divideArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i+=2){
        if(nums[i] != nums[i+1]) return false;
    }
    return true;
}

bool divideArrayHashMap(vector<int>& nums) {
    unordered_map<int, int> freq;
    for(auto it: nums){
        freq[it]++;
    }

    for(auto it: freq){
        if(it.second % 2 != 0){
            return false;
        }
    }
    return true;
}


int main() {
    vector<int> test1 = {3, 3, 2, 2, 4, 4};
    vector<int> test2 = {1, 2, 3, 4};
    vector<int> test3 = {1, 1, 1, 1, 2, 2};

    cout << "Sorting Method Results:\n";
    cout << "Test 1: " << (divideArray(test1) ? "true" : "false") << endl;
    cout << "Test 2: " << (divideArray(test2) ? "true" : "false") << endl;
    cout << "Test 3: " << (divideArray(test3) ? "true" : "false") << endl;

    cout << "\nHashMap Method Results:\n";
    cout << "Test 1: " << (divideArrayHashMap(test1) ? "true" : "false") << endl;
    cout << "Test 2: " << (divideArrayHashMap(test2) ? "true" : "false") << endl;
    cout << "Test 3: " << (divideArrayHashMap(test3) ? "true" : "false") << endl;

    return 0;
}