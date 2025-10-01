#include <iostream>
#include <vector>
using namespace std;

bool detectCapitalUse(string word) {
    bool firstCapital = word[0] >= 'A' && word[0] <= 'Z' ? 1:0;
    bool secondCapital = word[1] >= 'A' && word[1] <= 'Z' ? 1:0;

    for(int i = 1; i < word.size(); i++){
        if(firstCapital && secondCapital && !(word[i] >= 'A' && word[i] <= 'Z')) return false;
        if(firstCapital && !secondCapital && (word[i] >= 'A' && word[i] <= 'Z')) return false;
        if(!firstCapital && (word[i] >= 'A' && word[i] <= 'Z')) return false;
    }

    return true;
}

int main() {
    vector<string> testWords = {
        "USA",     // All capitals -> true
        "leetcode",// All lowercase -> true
        "Google",  // First letter capital -> true
        "FlaG",    // Mixed case -> false
        "aBC",     // Invalid capitalization -> false
        "Z",       // Single capital letter -> true
        "m"        // Single lowercase letter -> true
    };

    for(const string& word : testWords) {
        cout << word << " -> " << (detectCapitalUse(word) ? "true" : "false") << endl;
    }

    return 0;
}