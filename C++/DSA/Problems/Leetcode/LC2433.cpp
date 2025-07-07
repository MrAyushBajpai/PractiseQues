#include <iostream>
#include <vector>
using namespace std;

vector<int> findArray(vector<int>& pref) {
    vector<int> res(pref.size());
    res[0] = pref[0];

    for(int i = 1; i < pref.size(); ++i){
        res[i] = pref[i] ^ pref[i - 1];
    }

    return res;
}

int main() {
    vector<int> pref = {5, 2, 0, 3, 1};  // Example input

    vector<int> result = findArray(pref);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


