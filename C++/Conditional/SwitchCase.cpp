#include <iostream>
using namespace std;

int main() {
    // Switch-Case Example

    int day = 3;
    string dayName;

    // Example 1: Simple switch-case statement
    switch (day) {
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        default:
            dayName = "Weekend day";
    }

    // Example 2: Using switch-case for character comparison
    char grade = 'B';
    string gradeDescription;

    switch (grade) {
        case 'A':
        case 'a':  // Handling both uppercase and lowercase
            gradeDescription = "Excellent";
            break;
        case 'B':
        case 'b':
            gradeDescription = "Good";
            break;
        case 'C':
        case 'c':
            gradeDescription = "Average";
            break;
        case 'D':
        case 'd':
            gradeDescription = "Poor";
            break;
        case 'F':
        case 'f':
            gradeDescription = "Fail";
            break;
        default:
            gradeDescription = "Invalid grade";
    }

    // Output results
    cout << "Example 1: Day " << day << " is " << dayName << endl;
    cout << "Example 2: Grade " << grade << " is " << gradeDescription << endl;

    return 0;
}
