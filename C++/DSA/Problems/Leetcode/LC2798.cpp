#include <iostream>
#include <vector>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int count = 0;
    for(auto it: hours){
        if (it >= target) count++;
    }        
    return count;
}

int main() {
    vector<vector<int>> testCases = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8},
        {10, 10, 10},
        {1, 1, 1, 1}
    };
    vector<int> targets = {2, 6, 10, 2};

    for (int i = 0; i < testCases.size(); ++i) {
        cout << "Test case " << i + 1 << ": ";
        int result = numberOfEmployeesWhoMetTarget(testCases[i], targets[i]);
        cout << "Employees meeting target = " << result << endl;
    }

    return 0;
}