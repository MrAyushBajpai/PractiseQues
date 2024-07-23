#include <iostream>
using namespace std;

// Function declaration with pass by reference
void incrementByReference(int &num) {
    // Increment num by 1
    num++;
    // Print the incremented value
    cout << "Inside function: Incremented value = " << num << endl;
}

int main() {
    // Define a variable
    int number = 10;

    // Print initial value
    cout << "Before function call: Initial value = " << number << endl;

    // Call function incrementByReference with number as argument
    incrementByReference(number);

    // Print value after function call
    cout << "After function call: Value in main = " << number << endl;

    return 0;
}
