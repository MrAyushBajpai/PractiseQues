#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string removeSpecialChar(string s){
    string ans = "";
    for (auto ch: s){
        if (isalnum(ch)){
            if (ch >= 'A' && ch <= 'Z'){
                ans += ch + 'a' - 'A';
            }
            else{
                ans += ch;
            }
        }
    }
    return ans;
}

bool isPalindrome(string s) {
    s = removeSpecialChar(s);

    int start = 0, end = s.size() - 1;
    while(start < end){
        if (s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main(){
    string str = "0P";
    cout << isPalindrome(str);
}