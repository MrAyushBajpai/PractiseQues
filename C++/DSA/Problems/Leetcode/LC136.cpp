#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;

    // Using XOR Operator as
    // XOR - Same - 0 i.e. cancels same elements
    // XOR - Different - 1 i.e. keeps unique elements

    for (auto it: nums){
        result ^= it;
    }        
    return result;
}

int main(){
    vector<int> arr1 = {2,2,1};
    cout << singleNumber(arr1) << endl;

    vector<int> arr2 = {4,1,2,1,2};
    cout << singleNumber(arr2) << endl;

    vector<int> arr3 = {1};
    cout << singleNumber(arr3) << endl;
}