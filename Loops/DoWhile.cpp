#include <iostream>
using namespace std;

int main() {
    // Do-While Loop
    cout << "Do-While Loop Example:" << endl;

    // Example 1: Print numbers from 1 to 5
    cout << "Example 1: Print numbers from 1 to 5" << endl;
    int i = 1;
    do {
        cout << i << " ";
        i++;  // Increment i after printing
    } while (i <= 5);
    cout << endl;

    // Example 2: Calculate and print squares of numbers from 1 to 5
    cout << "Example 2: Squares of numbers from 1 to 5" << endl;
    i = 1;  // Reset i for the next example
    do {
        cout << i * i << " ";
        i++;  // Increment i after calculating square
    } while (i <= 5);
    cout << endl;

    // Example 3: Iterate backwards from 10 to 1
    cout << "Example 3: Iterate backwards from 10 to 1" << endl;
    i = 10;  // Reset i for the next example
    do {
        cout << i << " ";
        i--;  // Decrement i after printing
    } while (i >= 1);
    cout << endl;

    return 0;
}
