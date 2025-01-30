#include <iostream>
using namespace std;

int main() {
    // Assignment Operator
    cout << "Assignment Operator Example:" << endl;

    // Example 1: Assigning values to variables
    cout << "Example 1: Assigning values to variables" << endl;
    int x = 5;
    double y = 3.14;
    char ch = 'A';

    cout << "x = " << x << endl;  // Output: x = 5
    cout << "y = " << y << endl;  // Output: y = 3.14
    cout << "ch = " << ch << endl;  // Output: ch = A
    cout << endl;

    // Example 2: Assignment with arithmetic operations
    cout << "Example 2: Assignment with arithmetic operations" << endl;
    int a = 10;
    a += 5;  // Equivalent to: a = a + 5;
    cout << "a = " << a << endl;  // Output: a = 15

    double b = 7.5;
    b *= 2;  // Equivalent to: b = b * 2;
    cout << "b = " << b << endl;  // Output: b = 15

    cout << endl;

    // Example 3: Chaining assignments
    cout << "Example 3: Chaining assignments" << endl;
    int m, n, p;
    m = n = p = 10;  // Assigning the value 10 to all three variables
    cout << "m = " << m << ", n = " << n << ", p = " << p << endl;  // Output: m = 10, n = 10, p = 10

    return 0;
}
