#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

static bool comparator(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
} 

vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    vector<pair<int, int>> corresponding;
    for(int i = 0; i < names.size(); i++){
        corresponding.push_back({i, heights[i]});
    }

    sort(corresponding.begin(), corresponding.end(), comparator);
    vector<string> final;
    for(pair<int, int> it: corresponding){
        final.push_back(names[it.first]);
    }

    return final;
}

int main() {
    vector<string> names = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};

    vector<string> sortedNames = sortPeople(names, heights);

    cout << "Sorted people by height (descending):\n";
    for (const string& name : sortedNames) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}