#include <iostream>
using namespace std;

int main() {
    // While Loop with Break and Continue Statements
    cout << "While Loop with Break and Continue Statements Example:" << endl;

    // Example: Print odd numbers from 1 to 10, but skip number 5
    cout << "Example: Print odd numbers from 1 to 10, skip number 5" << endl;
    int num = 0;
    while (num < 10) {
        num++;
        if (num == 5) {
            continue;  // Skip number 5 and continue to next iteration
        }
        if (num % 2 == 1) {
            cout << num << " ";  // Print odd numbers
        }
        if (num == 7) {
            break;  // Exit the loop when number 7 is reached
        }
    }
    cout << endl;

    cout << "Loop exited because number 7 was reached." << endl;

    return 0;
}
