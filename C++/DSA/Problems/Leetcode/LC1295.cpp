#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int findNumbers(vector<int>& nums) {
    int count = 0;
    for(auto it: nums){
        if(it == 0) continue;
        if(abs((int)log10(it) + 1) % 2 == 0) count++;
    }
    return count;
}

int main() {
    // Sample input
    vector<int> nums = {12, 345, 2, 6, 7896};

    // Call the function
    int result = findNumbers(nums);

    // Output the result
    cout << "Numbers with even number of digits: " << result << endl;

    return 0;
}
