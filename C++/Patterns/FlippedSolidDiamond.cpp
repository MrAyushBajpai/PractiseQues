#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Upper half of the diamond
    for (int i = 0; i < rows; i++) {
        // Print stars (left side)
        for (int j = 0; j < rows - i; j++) {
            cout << "*";
        }
        
        // Print spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        
        // Print stars (right side)
        for (int j = 0; j < rows - i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // Lower half of the diamond
    for (int i = 1; i < rows; i++) {
        // Print stars (left side)
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        
        // Print spaces
        for (int j = 0; j < 2 * (rows - i - 1); j++) {
            cout << " ";
        }
        
        // Print stars (right side)
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}
