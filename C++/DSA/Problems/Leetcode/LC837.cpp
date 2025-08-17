#include <iostream>
#include <vector>
using namespace std;

double new21Game(int N, int K, int W)
{
    if (K == 0 || N >= K - 1 + W)
        return 1.0;

    vector<double> dp(N + 1, 0.0);
    dp[0] = 1.0;
    double windowSum = 1.0;
    double result = 0.0;

    for (int i = 1; i <= N; i++)
    {
        dp[i] = windowSum / W;
        if (i < K)
        {
            windowSum += dp[i];
        }
        else
        {
            result += dp[i];
        }
        if (i - W >= 0)
        {
            windowSum -= dp[i - W];
        }
    }

    return result;
}

int main() {
    // Sample test cases
    cout << "new21Game(10, 1, 10) = " << new21Game(10, 1, 10) << endl;
    cout << "new21Game(6, 1, 10) = " << new21Game(6, 1, 10) << endl;
    cout << "new21Game(21, 17, 10) = " << new21Game(21, 17, 10) << endl;

    // Optional: allow user input
    int N, K, W;
    cout << "\nEnter N K W: ";
    if (cin >> N >> K >> W) {
        cout << "Result: " << new21Game(N, K, W) << endl;
    }

    return 0;
}
