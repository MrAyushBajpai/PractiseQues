#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int x) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x) low = mid + 1;
        else high = mid;
    }
    return low;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int x = 4;
    int idx = lowerBound(arr, x);
    if (idx < arr.size())
        cout << "Lower bound of " << x << " is at index " << idx
             << " with value " << arr[idx] << "\n";
    else
        cout << "Lower bound of " << x << " does not exist\n";
}
