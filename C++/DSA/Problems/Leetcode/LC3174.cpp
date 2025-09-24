#include <iostream>
#include <vector>
using namespace std;

string clearDigits(string s) {
    string result;
    for (char c : s) {
        if (isdigit(c)) {
            if (!result.empty()) {
                result.pop_back();
            }
        } else {
            result.push_back(c);
        }
    }
    return result;
}

int main() {
    vector<string> tests = {
        "abc1",       // '1' deletes 'c' -> "ab"
        "a1b2c3",     // deletes a, b, c -> ""
        "hello123",   // '1' deletes o, '2' deletes l, '3' deletes l -> "he"
        "xy9z",       // '9' deletes y -> "xz"
        "noDigits"    // no digits -> "noDigits"
    };

    for (string &test : tests) {
        cout << "Input: " << test << " -> Output: " << clearDigits(test) << endl;
    }

    return 0;
}