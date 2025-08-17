#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;

        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};

int main() {
    Solution sol;
    int testCases[] = {1, 3, 9, 12, 27, 45, 81, 0, -3};

    for (int n : testCases) {
        cout << "n = " << n 
             << " -> " << (sol.isPowerOfThree(n) ? "true" : "false") 
             << endl;
    }

    return 0;
}
