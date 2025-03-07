#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findMissingAndRepeatedValuesHashMap(vector<vector<int>>& grid) {
    int missing = -1, extra = -1;
    unordered_map<int, int> m;
    int n = grid.size();

    for (const auto& row : grid) {
        for (int val : row) {
            m[val]++;
            if (m[val] > 1)
                extra = val;
        }
    }

    for (int i = 1; i <= n * n; i++) {
        if (m.find(i) == m.end()) {
            missing = i;
            break;
        }
    }

    return {extra, missing};
}

int main() {
    vector<vector<int>> grid = {{1, 3}, {2, 2}}; 
    vector<int> result = findMissingAndRepeatedValuesHashMap(grid);
    
    cout << "Repeated: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}
