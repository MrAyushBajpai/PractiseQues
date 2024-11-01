#include <iostream>
#include <string>
using namespace std;

string removeOccurrences(string s, string part) {
    size_t pos;
    while ((pos = s.find(part)) != string::npos){
        s.erase(pos, part.length());
    }
    return s;
}

int main(){
    string str = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(str, part);
}