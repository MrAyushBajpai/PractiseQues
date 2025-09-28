#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Solution {
public:
    int countSegments(const std::string& s) {
        istringstream stream(s);
        string word;
        int count = 0;
        while (stream >> word) {
            ++count;
        }
        return count;
    }
};

int main() {
    Solution sol;
    std::cout << sol.countSegments("Hello, my name is John") << std::endl;
}
