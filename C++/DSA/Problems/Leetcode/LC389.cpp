#include <iostream>
#include <vector>
using namespace std;

char findTheDifference(const string& s, const string& t) {
    char result = 0;
    for (char c : s) result ^= c;
    for (char c : t) result ^= c;
    return result;
}

int main() {
    vector<pair<string, string>> testCases = {
        {"abcd", "abcde"},   // extra 'e'
        {"", "y"},           // extra 'y'
        {"aabbcc", "abcbcac"}, // extra 'a'
        {"xyz", "xxyz"}      // extra 'x'
    };

    for (size_t i = 0; i < testCases.size(); i++) {
        const string& s = testCases[i].first;
        const string& t = testCases[i].second;

        char diff = findTheDifference(s, t);
        cout << "Test case " << i + 1 << ":\n";
        cout << "s = \"" << s << "\", t = \"" << t << "\"\n";
        cout << "Extra character: " << diff << "\n\n";
    }

    return 0;
}
