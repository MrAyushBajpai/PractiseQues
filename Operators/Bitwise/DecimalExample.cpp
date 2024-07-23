#include <iostream>
using namespace std;

int main() {
    // Bitwise AND Operator
    cout << "AND Operator: " << endl;
    cout << "2 & 3: " << (2 & 3) << endl;  // Binary: 10 & 11 = 10 (Decimal: 2)
    cout << "5 & 1: " << (5 & 1) << endl;  // Binary: 101 & 001 = 001 (Decimal: 1)
    cout << "7 & 4: " << (7 & 4) << endl;  // Binary: 111 & 100 = 100 (Decimal: 4)

    cout << endl;

    // Bitwise OR Operator
    cout << "OR Operator: " << endl;
    cout << "2 | 3: " << (2 | 3) << endl;  // Binary: 10 | 11 = 11 (Decimal: 3)
    cout << "5 | 1: " << (5 | 1) << endl;  // Binary: 101 | 001 = 101 (Decimal: 5)
    cout << "7 | 4: " << (7 | 4) << endl;  // Binary: 111 | 100 = 111 (Decimal: 7)

    cout << endl;

    // Bitwise NOT Operator
    cout << "NOT Operator: " << endl;
    cout << "~2: " << (~2) << endl;  // Binary: ~00000010 = 11111101 (Decimal: -3 in two's complement)
    cout << "~5: " << (~5) << endl;  // Binary: ~00000101 = 11111010 (Decimal: -6 in two's complement)
    cout << "~7: " << (~7) << endl;  // Binary: ~00000111 = 11111000 (Decimal: -8 in two's complement)

    cout << endl;

    // Bitwise XOR Operator
    cout << "XOR Operator: " << endl;
    cout << "2 ^ 3: " << (2 ^ 3) << endl;  // Binary: 10 ^ 11 = 01 (Decimal: 1)
    cout << "5 ^ 1: " << (5 ^ 1) << endl;  // Binary: 101 ^ 001 = 100 (Decimal: 4)
    cout << "7 ^ 4: " << (7 ^ 4) << endl;  // Binary: 111 ^ 100 = 011 (Decimal: 3)

    return 0;
}
