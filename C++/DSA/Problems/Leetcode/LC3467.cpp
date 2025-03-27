#include <iostream>
#include <vector>
using namespace std;

vector<int> transformArray(vector<int>& nums) {
    int zeroCount = 0, oneCount = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] % 2 == 0){
            nums[i] = 0;
            zeroCount++;
        }
        else{
            nums[i] = 1;
            oneCount++;
        }
    }
    int ptr = 0;
    while(zeroCount--){
        nums[ptr] = 0;
        ptr++;
    }

    while(oneCount--){
        nums[ptr] = 1;
        ptr++;
    }

    return nums;
}

int main(){
    vector<int> num = {4, 3, 2, 1};
    vector<int> res = transformArray(num);
    for(auto it: res){
        cout << it << endl;
    }
}