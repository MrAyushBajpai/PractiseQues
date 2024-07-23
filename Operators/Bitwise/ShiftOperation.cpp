#include <iostream>
using namespace std;

int main() {
    // Bitwise Left Shift Operator (<<)
    cout << "Left Shift Operator (<<): " << endl;
    cout << "2 << 1: " << (2 << 1) << endl;   // Binary: 00000010 << 1 = 00000100 (Decimal: 4)
    cout << "5 << 2: " << (5 << 2) << endl;   // Binary: 00000101 << 2 = 00010100 (Decimal: 20)
    cout << "7 << 3: " << (7 << 3) << endl;   // Binary: 00000111 << 3 = 00111000 (Decimal: 56)

    cout << endl;

    // Bitwise Right Shift Operator (>>)
    cout << "Right Shift Operator (>>): " << endl;
    cout << "16 >> 1: " << (16 >> 1) << endl; // Binary: 00010000 >> 1 = 00001000 (Decimal: 8)
    cout << "32 >> 2: " << (32 >> 2) << endl; // Binary: 00100000 >> 2 = 00001000 (Decimal: 8)
    cout << "64 >> 3: " << (64 >> 3) << endl; // Binary: 01000000 >> 3 = 00001000 (Decimal: 8)

    return 0;
}
