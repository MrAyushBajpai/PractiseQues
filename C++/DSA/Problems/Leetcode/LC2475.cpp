#include <iostream>
#include <vector>
using namespace std;

int unequalTriplets(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            for(int k = j + 1; k < nums.size(); k++){
                if (nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k]){
                    count++;
                }
            }
        }
    }
    return count;
}


int main() {
    vector<int> nums = {4, 4, 2, 3, 1};
    
    int result = unequalTriplets(nums);
    
    cout << "Number of unequal triplets: " << result << endl;

    return 0;
}