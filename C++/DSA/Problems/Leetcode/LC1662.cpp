#include <iostream>
#include <vector>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int i = 0, j = 0;
    int p = 0, q = 0;

    while(i < word1.size() && j < word2.size()){
        while(p < word1[i].size() && q < word2[j].size()){
            if (word1[i][p] != word2[j][q]) return false;
            p++;
            q++;
        }
        if(p == word1[i].size()){
            p = 0;
            i++;
        }
        if(q == word2[j].size()){
            q = 0;
            j++;
        }
    }
    return i == word1.size() && j == word2.size();
}

int main() {
    vector<string> w1 = {"ab", "c"};
    vector<string> w2 = {"a", "bc"};
    cout << arrayStringsAreEqual(w1, w2) << endl; // Output: 1 (true)

    vector<string> w3 = {"a", "cb"};
    vector<string> w4 = {"ab", "c"};
    cout << arrayStringsAreEqual(w3, w4) << endl; // Output: 0 (false)

    vector<string> w5 = {"abc", "d", "defg"};
    vector<string> w6 = {"abcddefg"};
    cout << arrayStringsAreEqual(w5, w6) << endl; // Output: 1 (true)

    return 0;
}
