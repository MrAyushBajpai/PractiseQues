#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    unordered_set<int> seenA, seenB;
    unordered_set<int> common;
    vector<int> result;
    int count = 0;

    for (int i = 0; i < A.size(); ++i) {
        seenA.insert(A[i]);
        seenB.insert(B[i]);

        if (seenB.count(A[i]) && !common.count(A[i])) {
            count++;
            common.insert(A[i]);
        }
        if (seenA.count(B[i]) && !common.count(B[i])) {
            count++;
            common.insert(B[i]);
        }

        result.push_back(count);
    }

    return result;
}

int main() {
    // Sample test case
    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};

    vector<int> result = findThePrefixCommonArray(A, B);

    cout << "Prefix common array: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
