#include <iostream>
using namespace std;

int main() {
    // Pre-increment (++i)
    int x = 5;
    cout << "Pre-increment (++i):" << endl;
    cout << "Original x: " << x << endl;
    cout << "++x: " << ++x << endl;  // Increment x first, then use it
    cout << "After increment, x is: " << x << endl;

    cout << endl;

    // Post-increment (i++)
    int y = 10;
    cout << "Post-increment (i++):" << endl;
    cout << "Original y: " << y << endl;
    cout << "y++: " << y++ << endl;  // Use y first, then increment it
    cout << "After increment, y is: " << y << endl;

    cout << endl;

    // Pre-decrement (--i)
    int a = 8;
    cout << "Pre-decrement (--i):" << endl;
    cout << "Original a: " << a << endl;
    cout << "--a: " << --a << endl;  // Decrement a first, then use it
    cout << "After decrement, a is: " << a << endl;

    cout << endl;

    // Post-decrement (i--)
    int b = 15;
    cout << "Post-decrement (i--):" << endl;
    cout << "Original b: " << b << endl;
    cout << "b--: " << b-- << endl;  // Use b first, then decrement it
    cout << "After decrement, b is: " << b << endl;

    return 0;
}
