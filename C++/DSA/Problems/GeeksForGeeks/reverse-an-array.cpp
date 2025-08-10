#include <iostream>
#include <vector>
using namespace std;

void helper(vector<int> &arr, int start, int end){
    if(start > end) return;
    swap(arr[start], arr[end]);
    helper(arr, start+1, end-1);
}

void reverseArray(vector<int> &arr) {
    helper(arr, 0, arr.size() - 1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    reverseArray(arr);

    for(auto it: arr){
        cout << it << " ";
    }
}