#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int n) {
    stack<int> binaryStack;
    
    // Convert decimal number to binary digits
    while (n > 0) {
        int remainder = n % 2;
        binaryStack.push(remainder);
        n /= 2;
    }
    
    // Build binary string from stack
    string binaryString = "";
    while (!binaryStack.empty()) {
        binaryString += to_string(binaryStack.top());
        binaryStack.pop();
    }
    
    return binaryString;
}

// Function to convert binary to decimal
int binaryToDecimal(string binaryString) {
    int decimalNumber = 0;
    int power = 0;
    
    // Traverse the binary string from right to left
    for (int i = binaryString.length() - 1; i >= 0; --i) {
        if (binaryString[i] == '1') {
            decimalNumber += pow(2, power);
        }
        power++;
    }
    
    return decimalNumber;
}

int main() {
    // Example: Convert decimal to binary
    int decimalNumber = 26;
    string binaryResult = decimalToBinary(decimalNumber);
    cout << "Decimal number " << decimalNumber << " is represented in binary as: " << binaryResult << endl;

    // Example: Convert binary to decimal
    string binaryString = "11010";
    int decimalResult = binaryToDecimal(binaryString);
    cout << "Binary number " << binaryString << " is represented in decimal as: " << decimalResult << endl;

    return 0;
}
