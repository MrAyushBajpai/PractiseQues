#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

bool checkIfPangram(string sentence) {
    unordered_set<char> alphabet;

    for(const char& ch: sentence){
        alphabet.insert(ch);
    }
    if(alphabet.size() == 26) return true;
    return false;
}


int main() {
    string s1 = "thequickbrownfoxjumpsoverthelazydog";  // pangram
    string s2 = "leetcode";  // not a pangram

    cout << "Sentence 1: " << s1 << endl;
    cout << "Is pangram? " << (checkIfPangram(s1) ? "Yes" : "No") << endl;

    cout << "\nSentence 2: " << s2 << endl;
    cout << "Is pangram? " << (checkIfPangram(s2) ? "Yes" : "No") << endl;

    return 0;
}