#include <iostream>
using namespace std;

int main() {
    // For Loop
    cout << "For Loop Example:" << endl;

    // Example 1: Print numbers from 1 to 5
    cout << "Example 1: Print numbers from 1 to 5" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Example 2: Calculate and print squares of numbers from 1 to 5
    cout << "Example 2: Squares of numbers from 1 to 5" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i * i << " ";
    }
    cout << endl;

    // Example 3: Iterate backwards from 10 to 1
    cout << "Example 3: Iterate backwards from 10 to 1" << endl;
    for (int i = 10; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
