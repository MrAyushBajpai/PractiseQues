#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int good = 0;
        long long sum = 0;
        long long max = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (a[i] > max) {
                max = a[i];
            }
            if (max == sum - max) {
                good++;
            }
        }

        cout << good << endl;
    }
}