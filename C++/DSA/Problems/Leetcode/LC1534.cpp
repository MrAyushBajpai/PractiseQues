#include <iostream>
#include <vector>
using namespace std;

int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
    int res = 0;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if(abs(arr[i] - arr[j]) > a) continue;
            for (int k = j + 1; k < arr.size(); k++) {
                if (abs(arr[j] - arr[k]) <= b &&
                    abs(arr[i] - arr[k]) <= c) {
                    res++;
                }
            }
        }
    }

    return res;
}

int main() {
    vector<int> arr = {3, 0, 1, 1, 9, 7};
    int a = 7, b = 2, c = 3;

    int result = countGoodTriplets(arr, a, b, c);
    cout << "Number of good triplets: " << result << endl;

    return 0;
}
