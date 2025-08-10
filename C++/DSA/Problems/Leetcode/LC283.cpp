#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i = 0, j = 1;
    while(j < nums.size()){
        if(nums[i] != 0){
            i++;
        }
        else if(nums[j] == 0){
            j++;
        }
        else{
            swap(nums[i], nums[j]);
        }
    }
}

int main(){
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    for(auto it: nums){
        cout << it << " ";
    }
}