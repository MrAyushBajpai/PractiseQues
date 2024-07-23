#include <iostream>
using namespace std;

// Function declarations
void functionC(int);
void functionB(int);
void functionA(int);

int main() {
    int num = 5;

    cout << "Main function: Starting with num = " << num << endl;

    // Calling functionA from main
    functionA(num);

    cout << "Main function: Back in main with num = " << num << endl;

    return 0;
}

// Function A definition
void functionA(int x) {
    // Function A receives parameter x
    cout << "Function A: Received x = " << x << endl;
    
    // Incrementing x
    x++;
    
    // Calling functionB with updated x
    functionB(x);
    
    // Printing updated x in function A
    cout << "Function A: Back in A with x = " << x << endl;
}

// Function B definition
void functionB(int y) {
    // Function B receives parameter y
    cout << "Function B: Received y = " << y << endl;
    
    // Doubling y
    y *= 2;
    
    // Calling functionC with updated y
    functionC(y);
    
    // Printing updated y in function B
    cout << "Function B: Back in B with y = " << y << endl;
}

// Function C definition
void functionC(int z) {
    // Function C receives parameter z
    cout << "Function C: Received z = " << z << endl;
    
    // Subtracting 3 from z
    z -= 3;
    
    // Printing final value of z before returning
    cout << "Function C: Returning from C with z = " << z << endl;
}
