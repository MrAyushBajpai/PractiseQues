#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findLonely(vector<int>& nums) {
    unordered_map<int, int> freq;
    for(int i = 0; i < nums.size();i++){
        freq[nums[i]]++;
    }

    vector<int> res;
    for(auto it: freq){
        if (it.second == 1 && freq.find(it.first+1) == freq.end() && freq.find(it.first-1) == freq.end()){
            res.push_back(it.first);
        }
    }
    return res;
}


int main(){

}