#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int thirdMax(vector<int>& nums) {
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;

    for (int x : nums) {
        if (x == first || x == second || x == third) continue;

        if (x > first) {
            third = second;
            second = first;
            first = x;
        }
        else if (x > second) {
            third = second;
            second = x;
        }
        else if (x > third) {
            third = x;
        }
    }

    return (third == LLONG_MIN) ? first : third;
}

int main() {
    vector<vector<int>> testCases = {
        {3, 2, 1},          // third max = 1
        {1, 2},             // fewer than 3 distinct → max = 2
        {2, 2, 3, 1},       // third max = 1
        {5, 5, 5},          // all same → max = 5
        {-1, -2, -3, -4}    // third max = -3
    };

    for (int i = 0; i < testCases.size(); i++) {
        cout << "Test case " << i + 1 << ": ";
        for (int x : testCases[i]) {
            cout << x << " ";
        }
        cout << "-> Third max = " << thirdMax(testCases[i]) << endl;
    }

    return 0;
}
