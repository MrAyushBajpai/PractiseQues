#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

bool isAnagramHashMap(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, int> freq;
    for(auto ch: s){
        freq[ch]++;
    }

    for(auto ch: t){
        if (freq.find(ch) != freq.end() && freq[ch] > 0){
            freq[ch]--;
        }
        else{
            return false;
        }
    }
    return true;
}

bool isAnagramSorting(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main(){
    string s = "anagram", t = "nagaram";
    cout << isAnagramSorting(s, t);
}