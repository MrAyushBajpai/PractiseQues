#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;

    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        groups[key].push_back(s);
    }

    vector<vector<string>> res;
    for (auto& entry : groups) {
        res.push_back(entry.second);
    }

    return res;
}


int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = groupAnagrams(strs);

    for (auto& group : result) {
        for (auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
}