#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to convert decimal to hexadecimal
string decimalToHexadecimal(int n) {
    string hexString = "";
    string hexChars = "0123456789ABCDEF"; // Hexadecimal characters

    // Convert decimal number to hexadecimal digits
    while (n > 0) {
        int remainder = n % 16;
        hexString += hexChars[remainder];
        n /= 16;
    }

    return hexString;
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(string hexString) {
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

    return decimalNumber;
}

int main() {
    // Example: Convert decimal to hexadecimal
    int decimalNumber = 305;
    string hexResult = decimalToHexadecimal(decimalNumber);
    cout << "Decimal number " << decimalNumber << " is represented in hexadecimal as: " << hexResult << endl;

    // Example: Convert hexadecimal to decimal
    string hexString = "131";
    int decimalResult = hexadecimalToDecimal(hexString);
    cout << "Hexadecimal number " << hexString << " is represented in decimal as: " << decimalResult << endl;

    return 0;
}
