#include <iostream>
#include <vector>
using namespace std;

int findPermutationDifference(string s, string t) {
    int sum = 0;
    vector<int> pos(26);

    for(int i = 0; i < s.size(); i++){
        pos[s[i] - 'a'] = i;
    }

    for(int j = 0; j < s.size(); j++){
        sum += abs(j - pos[t[j] - 'a']);
    }

    return sum;
}

int main(){
    string  s = "abc", t = "bac";
    cout << findPermutationDifference(s, t);
}