#include <iostream>
using namespace std;

int main() {
    // Conditional Operator (Ternary Operator) Example

    int x = 10, y = 20;
    
    // Example 1: Simple conditional assignment
    int max = (x > y) ? x : y;  // If x > y is true, assign x to max; otherwise, assign y to max

    // Example 2: Using conditional operator in output statement
    cout << "Example 2: Using conditional operator in output statement" << endl;
    cout << "The maximum value between " << x << " and " << y << " is " << max << endl;

    // Example 3: Using conditional operator in assignment
    int a = 5, b = 5;
    int result = (a == b) ? (a + b) : (a - b);  // If a == b is true, assign a + b to result; otherwise, assign a - b to result

    // Output results
    cout << "\nExample 3: Using conditional operator in assignment" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Result = " << result << endl;

    return 0;
}
