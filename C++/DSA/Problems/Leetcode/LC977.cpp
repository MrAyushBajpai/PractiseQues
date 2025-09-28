#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++){
        nums[i] *= nums[i];
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main(){
    vector<int> nums = {-7, -3, 2, 3, 11};
    
    vector<int> result = sortedSquares(nums);

    cout << "Sorted squares: ";
    for(int n : result){
        cout << n << " ";
    }
    cout << endl;

    return 0;
}