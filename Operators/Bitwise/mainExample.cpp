#include <iostream>
using namespace std;

int main(){
    // Bitwise AND Operator
    cout << "AND Operator: " << endl;
    cout << "0 & 0: " << (0 & 0) << endl;
    cout << "0 & 1: " << (0 & 1) << endl;
    cout << "1 & 0: " << (1 & 0) << endl;
    cout << "1 & 1: " << (1 & 1) << endl;

    cout << endl;

    // Bitwise OR Operator
    cout << "OR Operator: " << endl;
    cout << "0 | 0: " << (0 | 0) << endl;
    cout << "0 | 1: " << (0 | 1) << endl;
    cout << "1 | 0: " << (1 | 0) << endl;
    cout << "1 | 1: " << (1 | 1) << endl;

    cout << endl;

    // Bitwise NOT Operator
    cout << "NOT Operator: " << endl;
    cout << "~0: " << (~0) << endl;
    cout << "~1: " << (~1) << endl;

    // This will return a negative number, as the bits are flipped, the MSB responsible for managing the sign in also flipped.
    // This can be overcome by using unsigned values, though not used as much.

    cout << endl;
    
    // Bitwise XOR Operator
    cout << "XOR Operator: " << endl;
    cout << "0 ^ 0: " << (0 ^ 0) << endl;
    cout << "0 ^ 1: " << (0 ^ 1) << endl;
    cout << "1 ^ 0: " << (1 ^ 0) << endl;
    cout << "1 ^ 1: " << (1 ^ 1) << endl;
}