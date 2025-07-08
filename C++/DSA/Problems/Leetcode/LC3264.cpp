#include <iostream>
#include <vector>
using namespace std;

vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    while(k--){
        int minVal = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[minVal]) minVal = i;
        }
        nums[minVal] *= multiplier;
    }
    return nums; 
}

int main() {
    // Sample input
    vector<int> nums = {1, 2, 3, 4};
    int k = 2;
    int multiplier = 3;

    // Call the function
    vector<int> result = getFinalState(nums, k, multiplier);

    // Output the result
    cout << "Final state of the array: ";
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}