#include <iostream>
#include <vector>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
    int maxRight = -1;
    for(int i = n - 1; i >= 0; i--){
        int temp = arr[i];
        arr[i] = maxRight;
        if(temp > maxRight) maxRight = temp;
    }
    return arr;
}


int main() {
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    vector<int> result = replaceElements(arr);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
