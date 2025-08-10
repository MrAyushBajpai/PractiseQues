#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindromeRecursive(const string& s, int start, int end) {
    while (start < end && !isalnum(s[start])) start++;
    while (start < end && !isalnum(s[end])) end--;

    if (start >= end) return true;

    if (tolower(s[start]) != tolower(s[end])) return false;

    return isPalindromeRecursive(s, start + 1, end - 1);
}

bool isPalindrome(string s) {
    return isPalindromeRecursive(s, 0, s.size() - 1);
}

int main(){
    string str = "A man, a plan, a canal: Panama";
    cout << isPalindrome(str);
}