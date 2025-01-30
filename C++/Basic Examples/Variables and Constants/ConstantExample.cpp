#include <iostream>
using namespace std;

int main() {
    // Constants Example

    // Example 1: Integer constant
    const int MAX_VALUE = 100;

    // Example 2: Double constant
    const double PI = 3.14159;

    // Example 3: Character constant
    const char NEW_LINE = '\n';

    // Example 4: String constant (C++11 and later)
    const string GREETING = "Hello, World!";

    // Example 5: Boolean constant
    const bool IS_ACTIVE = true;

    // Example 6: Using constants
    cout << "Example 6: Using constants" << endl;
    cout << "MAX_VALUE: " << MAX_VALUE << endl;
    cout << "PI: " << PI << endl;
    cout << "NEW_LINE: " << NEW_LINE << endl;
    cout << "GREETING: " << GREETING << endl;
    cout << "IS_ACTIVE: " << (IS_ACTIVE ? "true" : "false") << endl;

    return 0;
}
