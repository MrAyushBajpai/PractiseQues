#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isFirstLastVowel(string &s){
    if (s.empty())
        return false;

    const string vowels = "aeiouAEIOU";

    return vowels.find(s.front()) != string::npos && vowels.find(s.back()) != string::npos;
}

vector<int> vowelStringsPrefixSum(vector<string>& words, vector<vector<int>>& queries) {
    vector<int> result;

    vector<int> prefixSum;
    prefixSum.push_back(isFirstLastVowel(words[0]));

    for(int i = 1; i < words.size(); i++){
        if (isFirstLastVowel(words[i])){
            prefixSum.push_back(prefixSum[i-1] + 1);
        }
        else{
            prefixSum.push_back(prefixSum[i-1]);
        }
    }

    for(vector<int> query: queries){
        if(!query[0]){
            result.push_back(prefixSum[query[1]]);
        }
        else{
            result.push_back(prefixSum[query[1]] - prefixSum[query[0]]);
        }
    }

    return result;
}

vector<int> vowelStringsBruteForce(vector<string>& words, vector<vector<int>>& queries) {
    vector<int> result;
    for(vector<int> query: queries){
        int result_count = 0;
        for(int i = query[0]; i <= query[1]; i++){
            if (isFirstLastVowel(words[i])){
                result_count++;
            }
        }
        result.push_back(result_count);
    }
    return result;
}

int main(){
    vector<string> words = {"aba","bcb","ece","aa","e"};
    vector<vector<int>> queries = {{0,2},{1,4},{1,1}};

    vector<int> res = vowelStringsPrefixSum(words, queries);
    for(auto it: res){
        cout << it;
    }
}