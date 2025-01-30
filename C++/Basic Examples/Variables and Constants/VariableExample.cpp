#include <iostream>
using namespace std;

int main() {
    // Variables and Invalid Variable Names

    // Example 1: Valid variable names
    int age = 30;
    double salary = 2500.50;
    char initial = 'J';
    bool isStudent = true;

    // Example 2: Invalid variable names (commented out)
    // int 2ndPlace = 2;  // Variable name cannot start with a digit
    // float $rate = 4.5;  // Variable name cannot start with a special character (except underscore)
    // char first-name = 'A';  // Variable name cannot contain hyphens

    // Example 3: Using valid variables
    cout << "Example 3: Using valid variables" << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Initial: " << initial << endl;
    cout << "Is a student? " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}
