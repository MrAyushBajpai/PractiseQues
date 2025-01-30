#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

int main() {
    // Local variables within main function
    int localVarMain = 20;
    
    cout << "Inside main function:" << endl;
    cout << "globalVar = " << globalVar << endl;  // Accessing global variable
    cout << "localVarMain = " << localVarMain << endl;  // Accessing local variable within main

    // Block 1
    {
        // Local variables within Block 1
        int localVarBlock1 = 30;
        cout << "\nInside Block 1:" << endl;
        cout << "globalVar = " << globalVar << endl;  // Accessing global variable
        cout << "localVarMain = " << localVarMain << endl;  // Accessing local variable from main
        cout << "localVarBlock1 = " << localVarBlock1 << endl;  // Accessing local variable within Block 1

        // Variable hiding demonstration
        int localVarMain = 40;  // Hides the outer localVarMain
        cout << "\nAfter hiding localVarMain in Block 1:" << endl;
        cout << "localVarMain (inner) = " << localVarMain << endl;  // Accessing hidden local variable
    }

    // Block 2
    {
        // Local variables within Block 2
        int localVarBlock2 = 50;
        cout << "\nInside Block 2:" << endl;
        cout << "globalVar = " << globalVar << endl;  // Accessing global variable
        cout << "localVarMain = " << localVarMain << endl;  // Accessing local variable from main
        // cout << "localVarBlock1 = " << localVarBlock1 << endl;  // Error: localVarBlock1 is out of scope
        cout << "localVarBlock2 = " << localVarBlock2 << endl;  // Accessing local variable within Block 2
    }

    // Attempting to access variables outside their scope
    // cout << "localVarBlock1 = " << localVarBlock1 << endl;  // Error: localVarBlock1 is out of scope
    // cout << "localVarBlock2 = " << localVarBlock2 << endl;  // Error: localVarBlock2 is out of scope

    return 0;
}
