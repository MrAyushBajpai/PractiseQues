#include <iostream>
#include <vector>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int maxVal = 0;
    for(string sentence: sentences){
        int count = 0;
        for(char ch: sentence){
            if (ch == ' ') count++;
        }
        maxVal = max(count + 1, maxVal);
    }
    return maxVal;
}

int main(){
    vector<string> sentences1 = {
        "Alice and Bob love programming",
        "Bob loves coding",
        "Coding is fun"
    };

    vector<string> sentences2 = {
        "One two three four five",
        "Just one",
        "Two words"
    };

    cout << "Max words in sentences1: " << mostWordsFound(sentences1) << endl;
    cout << "Max words in sentences2: " << mostWordsFound(sentences2) << endl;

    return 0;
}