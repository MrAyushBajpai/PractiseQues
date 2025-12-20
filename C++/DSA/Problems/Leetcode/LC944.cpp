#include <iostream>
#include <vector>
#include <string>

using namespace std;

int minDeletionSize(vector<string>& strs) {
    int count = 0;
    for (int i = 0; i < strs[0].size(); i++) {
        for (int j = 0; j < strs.size() - 1; j++) {
            if (strs[j][i] > strs[j + 1][i]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    vector<string> strs = {"cba", "daf", "ghi"};

    int result = minDeletionSize(strs);
    cout << "Minimum columns to delete: " << result << endl;

    return 0;
}
