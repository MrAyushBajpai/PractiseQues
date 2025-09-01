#include <iostream>
#include <vector>
#include <queue>
using namespace std;

double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
    auto gain = [](int p, int t) {
            return (double)(p + 1) / (t + 1) - (double)p / t;
    };
    
    priority_queue<pair<double, pair<int,int>>> pq;

    for (auto &c : classes) {
        int p = c[0], t = c[1];
        pq.push({gain(p, t), {p, t}});
    }

    while (extraStudents--) {
        auto top = pq.top(); pq.pop();
        int p = top.second.first, t = top.second.second;
        p++, t++;
        pq.push({gain(p, t), {p, t}});
    }

    double sum = 0.0;
    while (!pq.empty()) {
        auto [g, pt] = pq.top(); pq.pop();
        int p = pt.first, t = pt.second;
        sum += (double)p / t;
    }

    return sum / classes.size();
}

int main() {
    vector<vector<int>> classes = {{1,2}, {3,5}, {2,2}};
    int extraStudents = 2;

    double result = maxAverageRatio(classes, extraStudents);
    cout << "Maximum Average Pass Ratio = " << result << endl;

    return 0;
}