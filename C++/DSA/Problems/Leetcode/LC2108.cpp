#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkPalindrome(const string& word) {
    size_t start = 0, end = word.size() - 1;
    while (start < end) {
        if (word[start] != word[end])
            return false;
        start++;
        end--;
    }
    return true;
}

string firstPalindrome(vector<string>& words) {
    for (const string& it : words) {
        if (checkPalindrome(it))
            return it;
    }
    return "";
}

int main(){
    vector<string> words = {"abc","car","ada","racecar","cool"};
    cout << firstPalindrome(words);
}