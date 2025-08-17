#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string best = "";
        for (int i = 0; i + 2 < (int)num.size(); i++) {
            if (num[i] == num[i+1] && num[i] == num[i+2]) {
                string candidate = num.substr(i, 3);
                if (candidate > best) {
                    best = candidate;
                }
            }
        }
        return best;
    }
};

int main() {
    Solution sol;
    string testCases[] = {"6777133339", "2300019", "42352338", "111", "987654"};

    for (string num : testCases) {
        cout << "num = " << num 
             << " -> largestGoodInteger = \"" 
             << sol.largestGoodInteger(num) << "\"" << endl;
    }

    return 0;
}
