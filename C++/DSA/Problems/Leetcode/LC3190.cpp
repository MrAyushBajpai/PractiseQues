#include <iostream>
#include <vector>
using namespace std;

int minimumOperations(vector<int>& nums) {
    int operations = 0;
    for(int num: nums){
        int remainder = num % 3;
        if(remainder != 0){
            operations++;
        }
    }    
    return operations;
}

int main(){
    vector<int> nums = {1,2,3,4};
    cout << minimumOperations(nums);
}