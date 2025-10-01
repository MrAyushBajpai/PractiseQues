#include <iostream>
#include <vector>
using namespace std;

int getLucky(string s, int k) {
    string digits = "";
    
    for (char c : s) {
        int val = c - 'a' + 1;
        digits += to_string(val);
    }
    
    int res = 0;
    while (k--) {
        res = 0;
        for (char d : digits) {
            res += d - '0';
        }
        digits = to_string(res);
    }
    
    return res;
}


int main() {
    cout << getLucky("iiii", 1) << endl;
    cout << getLucky("leetcode", 2) << endl;
    cout << getLucky("zbax", 2) << endl;
    
    string s;
    int k;
    cout << "\nEnter a string (lowercase only): ";
    cin >> s;
    cout << "Enter k: ";
    cin >> k;

    cout << "Result: " << getLucky(s, k) << endl;
    
    return 0;
}