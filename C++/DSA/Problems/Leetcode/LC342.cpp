#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;

        if ((n & (n - 1)) != 0) return false;

        return (n & 0x55555555) != 0;
    }
};

int main() {
    Solution sol;
    int testCases[] = {1, 4, 16, 5, 8, 64, -4, 0};

    for (int n : testCases) {
        cout << "n = " << n 
             << " -> " << (sol.isPowerOfFour(n) ? "true" : "false") 
             << endl;
    }

    return 0;
}
