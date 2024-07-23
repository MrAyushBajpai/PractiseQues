#include <iostream>
using namespace std;

// Function declaration
void greet() {
    cout << "Hello! Welcome to Functions in C++" << endl;
}

int add(int a, int b) {
    return a + b;
}

double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    // Calling the greet function
    greet();

    // Example 1: Calling the add function
    int sum = add(5, 3);
    cout << "Example 1: 5 + 3 = " << sum << endl;

    // Example 2: Calling the divide function
    double result = divide(10.0, 2.0);
    cout << "Example 2: 10.0 / 2.0 = " << result << endl;

    return 0;
}
