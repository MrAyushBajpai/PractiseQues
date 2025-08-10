#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> &arr) {
    int maxVal = INT_MIN;
    for(int val: arr){
        maxVal = max(val, maxVal);
    }
    return maxVal;
}

int main(){
    vector<int> arr = {1, 8, 7, 56, 90};
    cout << largest(arr);
}