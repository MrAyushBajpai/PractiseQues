#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    vector<int> pos;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        pos.push_back(m); 
    }

    sort(pos.begin(), pos.end());

    double max_distance = 0;
    for(int i = 1; i < n; i++){
        max_distance = max(max_distance, double(pos[i] - pos[i-1]));
    }

    double first = pos[0];
    double last = l - pos[n-1];

    max_distance = max(max(max_distance/2, first), last);

    cout << fixed << setprecision(9) << max_distance;
}