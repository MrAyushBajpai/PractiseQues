#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string decodeMessage(string key, string message) {
    unordered_map<char, char> charMap;
    char next = 'a';

    for (char c : key) {
        if (c == ' ' || charMap.count(c)) {
            continue;
        }
        charMap[c] = next++;
        if (next > 'z') {
            break;
        }
    }

    string decoded;
    for (char c : message) {
        if (c == ' ') {
            decoded.push_back(' ');
        } else {
            decoded.push_back(charMap[c]);
        }
    }

    return decoded;
}

int main() {
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    string result = decodeMessage(key, message);

    cout << "Decoded message: " << result << endl;

    return 0;
}

