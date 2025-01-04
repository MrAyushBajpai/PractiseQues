#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRightDifferenceBruteForce(vector<int>& nums) {
    vector<int> result;

    for (int i = 0; i < nums.size(); i++){
        int left_sum = 0, right_sum = 0;

        if (i == 0) left_sum = 0;
        else{
            for(int j = 0; j < i; j++){
                left_sum += nums[j];
            }
        }

        if (i == nums.size() - 1) right_sum = 0;
        else{
            for(int j = i+1; j < nums.size(); j++){
                right_sum += nums[j];
            }
        }

        int total = right_sum - left_sum;
        result.push_back(total * ((total<0) ? -1: 1));
    }        
    
    return result;
}

vector<int> leftRightDifferencePrefixSum(vector<int>& nums){
    vector<int> prefix;
    vector<int> result;

    prefix.push_back(nums[0]);

    for(int i = 1; i < nums.size(); i++){
        prefix.push_back(prefix[i-1] + nums[i]);
    }

    for(int i = 0; i < nums.size(); i++){
        int left = 0, right = 0;
        if(i != 0){
            left = prefix[i - 1];
        }

        if(i != nums.size() - 1){
            right = prefix.back() - prefix[i];
        }

        int total = right - left;
        result.push_back(total * (total<0? -1:1));
    }

    return result;
}

int main(){
    vector<int> val = {10, 4, 8, 3};
    vector<int> res = leftRightDifferencePrefixSum(val);

    for (auto it: res){
        cout << it << endl;
    }
}