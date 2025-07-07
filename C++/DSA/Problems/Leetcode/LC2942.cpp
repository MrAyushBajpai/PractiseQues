#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> findWordsContaining(const vector<string>& words, char x) {
    vector<int> res;
    for (int i = 0; i < words.size(); ++i) {
        if (words[i].find(x) != string::npos) {
            res.push_back(i);
        }
    }
    return res;
}

int main() {
    vector<string> words1 = {"apple", "banana", "cherry", "date"};
    char x1 = 'a';
    
    vector<string> words2 = {"hello", "world", "test", "case"};
    char x2 = 'z';
    
    vector<string> words3 = {"xenon", "oxygen", "neon"};
    char x3 = 'x';

    auto printResult = [](const vector<int>& res) {
        for (int index : res) {
            cout << index << " ";
        }
        cout << endl;
    };

    cout << "Test Case 1 (x = 'a'): ";
    printResult(findWordsContaining(words1, x1));  // Expected: 0 1 3

    cout << "Test Case 2 (x = 'z'): ";
    printResult(findWordsContaining(words2, x2));  // Expected: (empty)

    cout << "Test Case 3 (x = 'x'): ";
    printResult(findWordsContaining(words3, x3));  // Expected: 0 1
}
