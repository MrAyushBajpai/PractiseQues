#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

// Function to convert decimal to octal
string decimalToOctal(int n) {
    stack<int> octalStack;
    
    // Convert decimal number to octal digits
    while (n > 0) {
        int remainder = n % 8;
        octalStack.push(remainder);
        n /= 8;
    }
    
    // Build octal string from stack
    string octalString = "";
    while (!octalStack.empty()) {
        octalString += to_string(octalStack.top());
        octalStack.pop();
    }
    
    return octalString;
}

// Function to convert octal to decimal
int octalToDecimal(string octalString) {
    int decimalNumber = 0;
    int power = 0;
    
    // Traverse the octal string from right to left
    for (int i = octalString.length() - 1; i >= 0; --i) {
        int digit = octalString[i] - '0'; // Convert char to integer
        decimalNumber += digit * pow(8, power);
        power++;
    }
    
    return decimalNumber;
}

int main() {
    // Example: Convert decimal to octal
    int decimalNumber = 83;
    string octalResult = decimalToOctal(decimalNumber);
    cout << "Decimal number " << decimalNumber << " is represented in octal as: " << octalResult << endl;

    // Example: Convert octal to decimal
    string octalString = "123";
    int decimalResult = octalToDecimal(octalString);
    cout << "Octal number " << octalString << " is represented in decimal as: " << decimalResult << endl;

    return 0;
}
