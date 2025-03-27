#include <iostream>
#include <vector>
using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) {
    int n = nums.size();
    vector<int> result(n);
    int left = 0;
    
    for (int num : nums) {
        if (num < pivot) {
            result[left++] = num;
        }
    }
    
    for (int num : nums) {
        if (num == pivot) {
            result[left++] = num;
        }
    }
    
    for (int num : nums) {
        if (num > pivot) {
            result[left++] = num;
        }
    }
    
    return result;
}

int main(){
    vector<int> val = {9,12,5,10,14,3,10};
    int pivot = 10;

    vector<int> res = pivotArray(val, pivot);
    for(auto it: res){
        cout << it << endl;
    }  
}