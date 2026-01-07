#include <iostream>
#include <vector>
using namespace std;

string reversePrefix(string s, int k) {
    int left = 0, right = k - 1;
    char temp;

    while(left < right){
        temp = s[left];
        s[left] = s[right];
        s[right] = temp; 

        left++;
        right--;
    }    

    return s;
}


int main() {
    // Sample test cases
    vector<pair<string, int>> testCases = {
        {"abcdef", 3},   // normal case
        {"hello", 1},    // k = 1 (no visible change)
        {"world", 5},    // k = length of string
        {"coding", 4}    // partial prefix reversal
    };

    for (auto &test : testCases) {
        string s = test.first;
        int k = test.second;

        cout << "Original string: " << s << ", k = " << k << endl;
        cout << "After reversePrefix: " << reversePrefix(s, k) << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}