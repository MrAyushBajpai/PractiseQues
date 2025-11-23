#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> error;
    for(int i = 0; i < nums.size(); i++){
        int idx = abs(nums[i]) - 1;
        if (nums[idx] > 0){
            nums[idx] *= -1;
        }
        else{
            error.push_back(idx + 1);
        }
    }

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            error.push_back(i + 1);
            break;
        }
    }

    return error;
}

int main(){
    vector<int> nums = {1, 2, 2, 4};
    vector<int> res = findErrorNums(nums);
    cout << "[" << res[0] << ", " << res[1] << "]" << endl;
    return 0;
}