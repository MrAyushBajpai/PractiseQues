#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    int maxArea = 0;
    int maxDiag = 0;
    for (vector<int> rectangle : dimensions) {
        int length = rectangle[0];
        int base = rectangle[1];

        int diag = (length * length) + (base * base);
        if (diag > maxDiag) {
            maxArea = length * base;
            maxDiag = diag;
        }
        else if (diag == maxDiag) {
            maxArea = max(maxArea, length * base);
        }
    }

    return maxArea;
}

int main() {
    vector<vector<int>> dimensions = {
        {3, 4},   // diagonal^2 = 25, area = 12
        {5, 12},  // diagonal^2 = 169, area = 60
        {6, 8},   // diagonal^2 = 100, area = 48
        {9, 12}   // diagonal^2 = 225, area = 108 (largest diagonal)
    };

    cout << "Area of rectangle with maximum diagonal: "
         << areaOfMaxDiagonal(dimensions) << endl;

    return 0;
}
