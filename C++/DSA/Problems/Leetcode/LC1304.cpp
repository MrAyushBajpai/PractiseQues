#include <iostream>
#include <vector>
using namespace std;

vector<int> sumZero(int n) {
    vector<int> res(n);
    res[0] = n * (1 - n) / 2;
    for(int i = 1; i < n; i++){
        res[i] = i;
    }
    return res;
}

int main() {
    int n = 5;
    vector<int> result = sumZero(n);

    cout << "Sample case with n = " << n << ":\n";
    cout << "Resulting array: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
