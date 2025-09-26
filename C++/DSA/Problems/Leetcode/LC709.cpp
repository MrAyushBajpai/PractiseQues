#include <iostream>
#include <vector>
#include <string>
using namespace std;

string toLowerCase(string s) {
    string res = "";
    for (const char& ch : s)
        res += (ch >= 65 && ch <= 90 ? ch + 'a' - 'A' : ch);
    return res;
}

int main() {
    vector<string> words = {"Hello", "WORLD", "CPlusPlus", "TeStInG"};
    
    for (string& w : words) {
        cout << w << " -> " << toLowerCase(w) << endl;
    }

    return 0;
}
