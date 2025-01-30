#include <iostream>
using namespace std;

int main() {
    // Comparison Operators
    cout << "Comparison Operators Example:" << endl;

    // Example 1: Equality Operator (==) and Inequality Operator (!=)
    cout << "Example 1: Equality Operator (==) and Inequality Operator (!=)" << endl;
    int x = 5, y = 3;
    if (x == y) {
        cout << "x is equal to y" << endl;
    } else {
        cout << "x is not equal to y" << endl;
    }

    if (x != y) {
        cout << "x is not equal to y" << endl;
    } else {
        cout << "x is equal to y" << endl;
    }
    cout << endl;

    // Example 2: Relational Operators (<, >, <=, >=)
    cout << "Example 2: Relational Operators (<, >, <=, >=)" << endl;
    double a = 7.5, b = 3.14;
    if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is not less than b" << endl;
    }

    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is not greater than b" << endl;
    }

    if (a <= b) {
        cout << "a is less than or equal to b" << endl;
    } else {
        cout << "a is neither less than nor equal to b" << endl;
    }

    if (a >= b) {
        cout << "a is greater than or equal to b" << endl;
    } else {
        cout << "a is neither greater than nor equal to b" << endl;
    }
    cout << endl;

    return 0;
}
