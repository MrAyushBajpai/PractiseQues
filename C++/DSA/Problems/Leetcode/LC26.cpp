#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int i = 0;
    for(int j = 1; j < nums.size(); j++){
        if(nums[i] != nums[j]){
            ++i;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    int target = removeDuplicates(arr);
    for(int i = 0; i < target; i++){
        cout << arr[i] << " ";
    }
}
