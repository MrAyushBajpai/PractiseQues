#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    string first = strs.front();
    string last = strs.back();

    int i = 0;
    while (i < first.length() && i < last.length() && first[i] == last[i]){
        i++;
    }

    return last.substr(0, i);
}

int main(){
    vector<string>strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
}