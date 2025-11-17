#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n * 2);
    for(int i = 0; i < nums.size(); i++){
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }      

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<int> result = getConcatenation(nums);

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}