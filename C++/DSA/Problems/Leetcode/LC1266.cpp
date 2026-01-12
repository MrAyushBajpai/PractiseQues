#include <iostream>
#include <vector>
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int time = 0;

    for (int i = 1; i < points.size(); i++) {
        int dx = abs(points[i][0] - points[i - 1][0]);
        int dy = abs(points[i][1] - points[i - 1][1]);
        time += max(dx, dy);
    }

    return time;
}

int main() {
    vector<vector<int>> case1 = {{1, 1}, {3, 4}, {-1, 0}};
    vector<vector<int>> case2 = {{0, 0}, {5, 0}};
    vector<vector<int>> case3 = {{0, 0}, {3, 3}};
    vector<vector<int>> case4 = {{2, 2}, {2, 2}};
    vector<vector<int>> case5 = {{-5, -5}, {5, 5}, {10, 0}};

    cout << "Case 1: " << minTimeToVisitAllPoints(case1) << endl; // 7
    cout << "Case 2: " << minTimeToVisitAllPoints(case2) << endl; // 5
    cout << "Case 3: " << minTimeToVisitAllPoints(case3) << endl; // 3
    cout << "Case 4: " << minTimeToVisitAllPoints(case4) << endl; // 0
    cout << "Case 5: " << minTimeToVisitAllPoints(case5) << endl; // 15

    return 0;
}