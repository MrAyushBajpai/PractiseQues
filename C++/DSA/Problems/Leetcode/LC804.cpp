#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> map = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."
    };
    unordered_set<string> occurence;

    for (const string& word : words) {
        string morse = "";
        for (const char& ch : word) {
            morse += map[ch - 'a'];
        }
        occurence.insert(morse);
    }

    return occurence.size();
}

int main() {
    vector<string> words = {"gin", "zen", "gig", "msg"};
    cout << "Unique Morse Representations: " 
         << uniqueMorseRepresentations(words) << endl;
    return 0;
}
