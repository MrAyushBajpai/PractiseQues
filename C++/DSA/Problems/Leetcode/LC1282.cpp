#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    unordered_map<int, vector<int>> groups;
    vector<vector<int>> res;

    for(int i = 0; i < groupSizes.size(); i++){
        groups[groupSizes[i]].push_back(i);
        if(groups[groupSizes[i]].size() == groupSizes[i]){
            res.push_back(groups[groupSizes[i]]);
            groups[groupSizes[i]].clear();
        }
    }

    return res;
}

void printGroups(const vector<vector<int>>& groups) {
    for (const auto& group : groups) {
        cout << "[ ";
        for (int person : group) {
            cout << person << " ";
        }
        cout << "]\n";
    }
    cout << endl;
}

int main() {
    // Test Case 1: Example Input
    vector<int> groupSizes1 = {3,3,3,3,3,1,3};
    cout << "Test Case 1:\n";
    auto result1 = groupThePeople(groupSizes1);
    printGroups(result1);

    // Test Case 2: Single person groups
    vector<int> groupSizes2 = {1,1,1,1};
    cout << "Test Case 2:\n";
    auto result2 = groupThePeople(groupSizes2);
    printGroups(result2);

    // Test Case 3: All in one big group
    vector<int> groupSizes3 = {5,5,5,5,5};
    cout << "Test Case 3:\n";
    auto result3 = groupThePeople(groupSizes3);
    printGroups(result3);

    // Test Case 4: Mixed group sizes
    vector<int> groupSizes4 = {2,1,3,3,3,2};
    cout << "Test Case 4:\n";
    auto result4 = groupThePeople(groupSizes4);
    printGroups(result4);

    // Test Case 5: Empty input
    vector<int> groupSizes5 = {};
    cout << "Test Case 5:\n";
    auto result5 = groupThePeople(groupSizes5);
    printGroups(result5);

    return 0;
}
