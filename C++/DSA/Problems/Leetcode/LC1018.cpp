#include <iostream>
#include <vector>
using namespace std;

vector<bool> prefixesDivBy5(vector<int>& nums) {
    vector<bool> res;
    long long val = 0;

    for(int i = 0; i < nums.size(); i++){
        val = ((val * 2) + nums[i]) % 5;
        res.push_back(val == 0);
    }

    return res;
}


int main() {
    vector<int> nums = {0,1,1};
    vector<bool> result = prefixesDivBy5(nums);

    for(bool b : result){
        cout << (b ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}