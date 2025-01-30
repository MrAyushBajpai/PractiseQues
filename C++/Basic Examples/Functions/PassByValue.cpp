#include <iostream>
using namespace std;

// Function declaration
void incrementByValue(int num) {
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

    // Call function incrementByValue with number as argument
    incrementByValue(number);

    // Print value after function call
    cout << "After function call: Value in main = " << number << endl;

    return 0;
}
