#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    int maxVal = 0;
    for (int i = 1; i < points.size(); ++i) {
        maxVal = max(maxVal, points[i][0] - points[i - 1][0]);
    }
    return maxVal;
}

int main(){
    // Sample test case
    vector<vector<int>> points = {{8,7}, {9,9}, {7,4}, {9,7}};
    
    int result = maxWidthOfVerticalArea(points);
    cout << "Max width of vertical area: " << result << endl;

    return 0;
}