#include <iostream>
#include <vector>
using namespace std;

int maxFreqSum(string s) {
    int freq[26], maxVowel = 0, maxConso = 0;
    for (char c : s) {
        int i = c - 'a';
        freq[i]++;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            maxVowel = max(maxVowel, freq[i]);
        }
        else {
            maxConso = max(maxConso, freq[i]);
        }
    }
    return maxVowel + maxConso;
}

int main() {
    string s = "helloopenai";
    int result = maxFreqSum(s);
    cout << "Maximum frequency sum of a vowel and a consonant: " << result << endl;
    return 0;
}
