#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int oddCells(int m, int n, vector<vector<int>>& indices) {
    vector<int> row(m, 0), col(n, 0);

    for (auto& index : indices) {
        row[index[0]] ^= 1;
        col[index[1]] ^= 1;
    }

    int oddRows = accumulate(row.begin(), row.end(), 0);
    int oddCols = accumulate(col.begin(), col.end(), 0);

    return oddRows * (n - oddCols) + (m - oddRows) * oddCols;
}

int main() {
    int m = 2, n = 3;
    vector<vector<int>> indices = {{0, 1}, {1, 1}};

    int result = oddCells(m, n, indices);
    cout << "Number of odd cells: " << result << endl;

    return 0;
}
