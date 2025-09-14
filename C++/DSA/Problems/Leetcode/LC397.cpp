#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, int> memo;
int integerReplacement(int n) {
    if (n == INT_MAX) return 32;
    if(n == 1) return 0;
    if(memo.find(n) != memo.end()) return memo[n];

    if(n % 2 == 0) return memo[n] = 1 + integerReplacement(n/2);

    return memo[n] = 1 + min(integerReplacement(n + 1), integerReplacement(n - 1));
}

int main() {
    vector<int> testCases = {1, 7, 8, 15, INT_MAX};
    for (int n : testCases) {
        cout << "integerReplacement(" << n << ") = " 
             << integerReplacement(n) << endl;
    }
    return 0;
}