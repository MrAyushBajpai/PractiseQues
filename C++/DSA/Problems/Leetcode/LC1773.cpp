#include <iostream>
#include <vector>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int idx = (ruleKey == "type") ? 0 : (ruleKey == "color") ? 1 : 2;
    int count = 0;
    for (auto& item : items) {
        if (item[idx] == ruleValue) count++;
    }
    return count;
}

int main() {
    vector<vector<string>> items = {
        {"phone", "blue", "pixel"},
        {"computer", "silver", "lenovo"},
        {"phone", "gold", "iphone"}
    };

    cout << countMatches(items, "color", "silver") << endl; // Expected output: 1
    cout << countMatches(items, "type", "phone") << endl;   // Expected output: 2
    cout << countMatches(items, "name", "pixel") << endl;   // Expected output: 1

    return 0;
}