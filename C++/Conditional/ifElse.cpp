#include <iostream>
using namespace std;

int main() {
    // If-Else If-Else Example

    int score = 85;

    // Example 1: Simple if-else statement
    if (score >= 90) {
        cout << "Grade A" << endl;
    } else if (score >= 80) {
        cout << "Grade B" << endl;
    } else if (score >= 70) {
        cout << "Grade C" << endl;
    } else if (score >= 60) {
        cout << "Grade D" << endl;
    } else {
        cout << "Grade F" << endl;
    }

    // Example 2: Using if-else without curly braces for single line statements
    int num = 12;
    if (num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;

    return 0;
}
