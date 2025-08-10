#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int main(){
    vector<int> arr = {10, 20, 30, 40, 50};
    cout << isSorted(arr);
}