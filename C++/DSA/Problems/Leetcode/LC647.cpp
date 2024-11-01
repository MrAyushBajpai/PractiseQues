#include <iostream>
#include <string>

using namespace std;

int expandAroundIndex(string s, int i, int j){
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s) {
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        // Odd
        int OddAns = expandAroundIndex(s, i, i);
        count += OddAns;

        int EvenAns = expandAroundIndex(s, i, i+1);
        count += EvenAns;
    }

    return count;   
}

int main(){
    string s = "abc";
    cout << countSubstrings(s);
}