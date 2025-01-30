#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to convert hexadecimal to octal
string hexadecimalToOctal(string hexString) {
    // Convert hexadecimal to decimal first
    int decimalNumber = 0;
    int base = 1;

    // Iterate over the hexadecimal string from right to left
    for (int i = hexString.length() - 1; i >= 0; --i) {
        // Get decimal value of character
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            decimalNumber += (hexString[i] - '0') * base;
        } else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            decimalNumber += (hexString[i] - 'A' + 10) * base;
        } else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
            decimalNumber += (hexString[i] - 'a' + 10) * base;
        }
        base *= 16;
    }

    // Convert decimal to octal
    string octalString = "";
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 8;
        octalString = to_string(remainder) + octalString;
        decimalNumber /= 8;
    }

    return octalString;
}

// Function to convert octal to hexadecimal
string octalToHexadecimal(string octalString) {
    // Convert octal to decimal first
    int decimalNumber = 0;
    int base = 1;

    // Iterate over the octal string from right to left
    for (int i = octalString.length() - 1; i >= 0; --i) {
        // Get decimal value of character
        decimalNumber += (octalString[i] - '0') * base;
        base *= 8;
    }

    // Convert decimal to hexadecimal
    string hexString = "";
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        if (remainder < 10) {
            hexString = to_string(remainder) + hexString;
        } else {
            hexString = char('A' + remainder - 10) + hexString;
        }
        decimalNumber /= 16;
    }

    return hexString;
}

int main() {
    // Example: Convert hexadecimal to octal
    string hexString = "1A7B";
    string octalResult = hexadecimalToOctal(hexString);
    cout << "Hexadecimal number " << hexString << " is represented in octal as: " << octalResult << endl;

    // Example: Convert octal to hexadecimal
    string octalString = "765";
    string hexResult = octalToHexadecimal(octalString);
    cout << "Octal number " << octalString << " is represented in hexadecimal as: " << hexResult << endl;

    return 0;
}
