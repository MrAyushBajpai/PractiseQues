#include <iostream>
using namespace std;

int main() {
    // Logical Operators
    cout << "Logical Operators Example:" << endl;

    // Example 1: Logical AND (&&)
    cout << "Example 1: Logical AND (&&)" << endl;
    int x = 5, y = 3;
    if (x > 0 && y > 0) {
        cout << "Both x and y are greater than 0" << endl;
    } else {
        cout << "At least one of x or y is not greater than 0" << endl;
    }

    // Example 2: Logical OR (||)
    cout << "Example 2: Logical OR (||)" << endl;
    bool isWeekend = true, isHoliday = false;
    if (isWeekend || isHoliday) {
        cout << "It's either a weekend or a holiday (or both)" << endl;
    } else {
        cout << "It's neither a weekend nor a holiday" << endl;
    }

    // Example 3: Logical NOT (!)
    cout << "Example 3: Logical NOT (!)" << endl;
    bool isRaining = true;
    if (!isRaining) {
        cout << "It's not raining" << endl;
    } else {
        cout << "It's raining" << endl;
    }

    return 0;
}
