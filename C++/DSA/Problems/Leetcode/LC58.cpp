#include <iostream>
#include <vector>
using namespace std;

int lengthOfLastWord(string s) {
    int len = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == ' '){
            if(len != 0){
                break;
            }
        }
        else{
            len++;
        }
    }
    return len;        
}

int main() {
    vector<pair<string, int>> testCases = {
        {"Hello World", 5},
        {"   fly me   to   the moon  ", 4},
        {"luffy is still joyboy", 6},
        {"", 0},
        {" ", 0},
        {"a", 1},
        {" day", 3},
        {"word ", 4},
        {"multiple words in a sentence", 8},
        {"ends with space ", 5}
    };

    for (const auto& [input, expected] : testCases) {
        int result = lengthOfLastWord(input);
        cout << "Input: \"" << input << "\" | Expected: " << expected 
             << " | Result: " << result 
             << (result == expected ? " [PASS]" : " [FAIL]") << endl;
    }

    return 0;
}
