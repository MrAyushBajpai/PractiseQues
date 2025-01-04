#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int countPalindromicSubsequence(string s) {
    vector<int> first(26, -1);
    vector<int> last(26, -1);

    for(int i = 0; i < s.size(); i++){
        if(first[s[i] - 'a'] == -1) first[s[i] - 'a'] = i;
        last[s[i] - 'a'] = i;
    }

    int result = 0;

    for(int i = 0; i < 26; i++){
        if (first[i] == - 1 || first[i] == last[i]) continue;

        unordered_set<int> data;
        for (int j = first[i] + 1; j < last[i]; j++){
            data.insert(s[j]);
        }

        result += data.size();
    }

    return result;
}

int main(){
    cout << countPalindromicSubsequence("adc");
}