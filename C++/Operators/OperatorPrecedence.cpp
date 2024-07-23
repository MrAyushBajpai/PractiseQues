#include <iostream>
using namespace std;

int main() {
    // Operator Precedence Example

    // Arithmetic Operators
    int result1 = 5 + 3 * 2;  // '*' has higher precedence than '+'
    int result2 = (5 + 3) * 2;  // Parentheses () have the highest precedence
    int result3 = 10 / 2 + 3;  // '/' has higher precedence than '+'
    int result4 = 10 / (2 + 3);  // Parentheses () can be used to change precedence

    // Relational Operators
    bool isTrue = (result1 > result2) && (result3 <= result4);  // '>' and '<=' have higher precedence than '&&'

    // Logical Operators
    bool logic1 = true || false && !isTrue;  // '!' has the highest precedence, followed by '&&', then '||'

    // Bitwise Operators
    int bitwise1 = 5 & 3 | 1;  // '&' has higher precedence than '|'

    // Assignment Operators
    int a = 10;
    a += 5 * 2;  // '*=' has higher precedence than '+='

    // Conditional Operator (Ternary)
    int x = 10, y = 20;
    int max = (x > y) ? x : y;  // '?' and ':' have lower precedence than arithmetic and relational operators

    // Comma Operator
    int b = (x++, y++);  // ',' has the lowest precedence

    // Output results
    cout << "Arithmetic Operators:" << endl;
    cout << "5 + 3 * 2 = " << result1 << endl;  // Expected: 11
    cout << "(5 + 3) * 2 = " << result2 << endl;  // Expected: 16
    cout << "10 / 2 + 3 = " << result3 << endl;  // Expected: 8
    cout << "10 / (2 + 3) = " << result4 << endl;  // Expected: 2
    cout << endl;

    cout << "Relational Operators:" << endl;
    cout << "result1 > result2 && result3 <= result4 = " << isTrue << endl;  // Expected: 1 (true)
    cout << endl;

    cout << "Logical Operators:" << endl;
    cout << "true || false && !isTrue = " << logic1 << endl;  // Expected: 1 (true)
    cout << endl;

    cout << "Bitwise Operators:" << endl;
    cout << "5 & 3 | 1 = " << bitwise1 << endl;  // Expected: 5
    cout << endl;

    cout << "Assignment Operators:" << endl;
    cout << "a += 5 * 2; a = " << a << endl;  // Expected: 20
    cout << endl;

    cout << "Conditional Operator (Ternary):" << endl;
    cout << "max = " << max << endl;  // Expected: 20 (since y = 20)
    cout << endl;

    cout << "Comma Operator:" << endl;
    cout << "b = " << b << endl;  // Expected: 20 (since y++ evaluates to 20)
    cout << "x = " << x << ", y = " << y << endl;  // Expected: x = 11, y = 21
    cout << endl;

    return 0;
}
