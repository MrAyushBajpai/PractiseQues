#include <iostream>
#include <vector>
using namespace std;

string truncateSentence(string s, int k) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            count++;
            if (count == k) return s.substr(0, i);
        }
    }
    return s;
}

int main() {
    string s1 = "Hello world this is ChatGPT";
    int k1 = 3;
    cout << "Original: " << s1 << endl;
    cout << "Truncated (k=" << k1 << "): " << truncateSentence(s1, k1) << endl;

    string s2 = "C++ makes string manipulation fun";
    int k2 = 5;
    cout << "\nOriginal: " << s2 << endl;
    cout << "Truncated (k=" << k2 << "): " << truncateSentence(s2, k2) << endl;

    string s3 = "OneWord";
    int k3 = 2;
    cout << "\nOriginal: " << s3 << endl;
    cout << "Truncated (k=" << k3 << "): " << truncateSentence(s3, k3) << endl;

    return 0;
}