#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int left = 0;

    int maxLen = 0;
    unordered_set<char> charSet;

    for(int right = 0; right < s.size(); right++){
        while(charSet.find(s[right]) != charSet.end()){
            charSet.erase(s[left]);
            left++;
        }

        charSet.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main(){
    vector<string> testCases = {
        "abcabcbb",   // Expected: 3 ("abc")
        "bbbbb",      // Expected: 1 ("b")
        "pwwkew",     // Expected: 3 ("wke")
        "",           // Expected: 0
        " ",          // Expected: 1
        "dvdf",       // Expected: 3 ("vdf")
        "anviaj"      // Expected: 5 ("nviaj")
    };

    for (const string& testCase : testCases) {
        cout << "Input: \"" << testCase << "\" => Output: " << lengthOfLongestSubstring(testCase) << endl;
    }

    return 0;
}