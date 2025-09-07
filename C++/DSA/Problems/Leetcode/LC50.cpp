#include <iostream>
using namespace std;

double myPow(double x, int n) {
    if (n == 0) return 1.0;

    if (n < 0) {
        if (n == INT_MIN) {
            return (1 / x) * myPow(1 / x, -(n + 1));
        }
        return myPow(1 / x, -n);
    }

    double half = myPow(x, n / 2);

    if (n % 2 == 0) {
        return half * half;
    } else {
        return half * half * x;
    }
}

int main() {
    cout << myPow(2.0, 10) << endl;   // 1024
    cout << myPow(2.0, -2) << endl;   // 0.25
    cout << myPow(2.1, 3) << endl;    // 9.261
    return 0;
}
