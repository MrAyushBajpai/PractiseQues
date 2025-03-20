#include <iostream>
#include <vector>
using namespace std;

int differenceOfSum(vector<int>& nums) {
    int elementSum = 0;
    int digitSum = 0;

    for(auto it: nums){
        elementSum += it;
        while(it != 0){
            digitSum += it % 10;
            it /= 10;
        }
    }
    return abs(elementSum - digitSum);
}

int main(){
    vector<int> val = {1,15,6,3};
    cout << differenceOfSum(val);
}