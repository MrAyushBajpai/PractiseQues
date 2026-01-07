#include <iostream>
#include <vector>
#include <string>

using namespace std;

string makeSmallestPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while(left < right){
        if(s[left] != s[right]){
            s[left] = min(s[left], s[right]);
            s[right] = s[left];
        }

        left++; right--;
    }

    return s;
}

int main() {
    vector<string> testCases = {
        "egcfe",
        "abcd",
        "seven",
        "racecar",
        "a"
    };

    for (const string& s : testCases) {
        cout << "Input:  " << s << endl;
        cout << "Output: " << makeSmallestPalindrome(s) << endl;
        cout << "-------------------" << endl;
    }

    return 0;
}