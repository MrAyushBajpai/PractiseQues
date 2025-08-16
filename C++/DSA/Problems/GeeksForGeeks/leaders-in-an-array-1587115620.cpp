#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leader;
    leader.push_back(arr.back());
    int maxRight = arr.back();

    for(int i = arr.size() - 2; i >= 0; i--){
        if(arr[i] >= maxRight){
            leader.push_back(arr[i]);
        }

        maxRight = max(maxRight, arr[i]);
    }
    reverse(leader.begin(), leader.end());
    return leader;
}

int main(){
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> res = leaders(arr);

    for(auto it: res){
        cout << it << " ";
    }
}