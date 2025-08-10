#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> countFreq(vector<int>& arr) {
    unordered_map<int, int> freq;
    for(auto it: arr){
        freq[it]++;
    }
    vector<vector<int>> ans;
    for(auto it: freq){
        ans.push_back({it.first, it.second});
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 2, 3, 3, 5};
    vector<vector<int>> res = countFreq(arr);
    for(auto it: res){
        cout << it[0] << " " << it[1] << endl;
    }
}