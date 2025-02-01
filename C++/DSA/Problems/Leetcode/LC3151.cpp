#include <iostream>
#include <vector>

using namespace std;

bool isArraySpecial(vector<int>& nums) {
    if (nums.size() == 1) return 1;
    for(int i = 0; i < nums.size() - 1; i++){
        if((nums[i] & 1) == (nums[i+1] & 1)){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> val = {4,3,1,6};
    cout << ((isArraySpecial(val)) ? "True" : "False" ) << endl;
}