#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
    unordered_map<string, int> freq;
    for(int i = 0; i < arr.size(); i++){
        freq[arr[i]]++;
    }

    int flip = 1;
    for(int i = 0; i < arr.size(); i++){
        if(freq[arr[i]] == 1){
            if(flip == k) return arr[i];
            else flip++;
        }
    }

    return "";
}

int main(){
    vector<string> arr {"d","b","c","b","c","a"};
    int k = 2;
    cout << kthDistinct(arr, k);
}