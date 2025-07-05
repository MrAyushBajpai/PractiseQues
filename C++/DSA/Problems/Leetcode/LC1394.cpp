#include <iostream>
#include <vector>
using namespace std;

int findLucky(vector<int>& arr) {
    vector<int> freq(501, 0);

    for(auto it: arr){
        freq[it]++;
    }

    for(int i = freq.size() - 1; i > 0; i--){
        if(freq[i] == i) return freq[i];
    }

    return -1;
}

int main() {
    vector<int> arr1 = {2, 2, 3, 4};
    cout << "Test case 1: " << findLucky(arr1) << endl; // Output: 2

    vector<int> arr2 = {1, 2, 2, 3, 3, 3};
    cout << "Test case 2: " << findLucky(arr2) << endl; // Output: 3

    vector<int> arr3 = {5};
    cout << "Test case 3: " << findLucky(arr3) << endl; // Output: -1

    vector<int> arr4 = {7, 7, 7, 7, 7, 7, 7};
    cout << "Test case 4: " << findLucky(arr4) << endl; // Output: 7

    vector<int> arr5 = {4, 4, 4, 4, 4, 4}; // freq[4] = 6, not equal to 4
    cout << "Test case 5: " << findLucky(arr5) << endl; // Output: -1

    return 0;
}
