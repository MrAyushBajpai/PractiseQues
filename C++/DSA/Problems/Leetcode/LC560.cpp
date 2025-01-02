#include <iostream>
#include <vector>

using namespace std;

int subarraySumBruteForce(vector<int>& nums, int k) {
    int count = 0;

    for (int i = 0; i < nums.size(); i++){
        int sum = 0;
        for (int j = i; j < nums.size(); j++){
            sum += nums[j];
            if(sum == k){
                count++;
            }
        }
    }

    return count;
}

int main(){
    vector<int> array = {1,1,1};
    int k = 2;
    cout << subarraySumBruteForce(array, k);
}