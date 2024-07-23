#include <iostream>
using namespace std;

int main() {
    // Comma Operator Example

    int x = 5, y = 10, z = 15;  // Multiple variables can be initialized in one statement using comma

    // Example 1: Using comma in expressions
    int a = (x += 2, y += 3, z += 4);  // Evaluates each expression from left to right and assigns the value of the rightmost expression to 'a'
    
    // Example 2: Using comma in a for loop
    for (int i = 0, j = 10; i < 5; ++i, ++j) {  // Multiple variables and expressions can be used in the initialization and increment sections of the for loop
        cout << "i = " << i << ", j = " << j << endl;
    }

    // Example 3: Using comma in return statement
    int b = (x++, y++, z++, x + y + z);  // Increments x, y, and z, and then returns the sum of x, y, and z

    // Output results
    cout << "Example 1: Using comma in expressions" << endl;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "a = " << a << endl;  // Expected: a = z + 4 = 19
    cout << endl;

    cout << "Example 2: Using comma in a for loop" << endl;
    // Expected output: i = 0, j = 10
    //                  i = 1, j = 11
    //                  i = 2, j = 12
    //                  i = 3, j = 13
    //                  i = 4, j = 14
    cout << endl;

    cout << "Example 3: Using comma in return statement" << endl;
    cout << "b = " << b << endl;  // Expected: b = x + y + z = 7 + 13 + 19 = 39

    return 0;
}
