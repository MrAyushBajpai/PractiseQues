#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> res(nums.size());
    int pos = 0, neg = 1;

    for(auto it: nums){
        if(it > 0){
            res[pos] = it;
            pos += 2;
        }
        else{
            res[neg] = it;
            neg += 2;
        }
    }
    return res;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> res = rearrangeArray(nums);

    for(auto it: res){
        cout << it << " ";
    }
}