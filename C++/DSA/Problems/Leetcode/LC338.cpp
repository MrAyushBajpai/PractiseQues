#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> countBits(int n) {
    vector<int> res(n + 1);

    res[0] = 0;
    for(int i = 1; i <= n; i++){
        res[i] = res[i / 2] + i % 2;
    }    
    return res;
}

int main() {
    // Test case 1
    int n1 = 2;
    vector<int> result1 = countBits(n1);
    cout << "countBits(" << n1 << "): ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 2
    int n2 = 5;
    vector<int> result2 = countBits(n2);
    cout << "countBits(" << n2 << "): ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    // Test case 3
    int n3 = 10;
    vector<int> result3 = countBits(n3);
    cout << "countBits(" << n3 << "): ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}