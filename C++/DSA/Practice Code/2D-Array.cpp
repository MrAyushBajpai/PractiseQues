#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    // Declare 2D Arrays
    // This creates a simple straight array in the memory, but accesses the elements using the formula c(total no of colums) * i + j
    int arr[3][3];

    // Initialisation
    int n = 3;
    int brr[n][n] = {{1,2,3}, {4,5,6}, {2,4,8}};

    // Iterating
    cout << "Elements in brr in row order: " << endl;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Elements in brr in column order (Transpose): " << endl;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Row Wise Sum
    cout << "Sum of Each Row: " << endl;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum += brr[i][j];
        }
        cout << "Sum of Row " << i << ": " << sum << endl;
    }
    cout << endl;

    // Col Wise Sum
    cout << "Sum of Each Column: " << endl;
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum += brr[j][i];
        }
        cout << "Sum of Column " << i << ": " << sum << endl;
    }
    cout << endl;

    // Linear Search
    cout << "Finding element 8 using Linear Search: " << endl;
    int target = 8;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (brr[i][j] == target){
                cout << "Element " << target <<  " Located at " << "[" << i << "][" << j << "]" << endl;
                target = -1;
            }
        }
    }
    if(target != -1) cout << "Element not found";
    cout << endl;

    // Minimum Element
    cout << "Minimum Value in the array: ";
    int min = INT_MAX;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (brr[i][j] < min) min = brr[i][j];
        }
    }
    cout << min << endl;

    // Maximum Element
    cout << "Maximum value in the array: ";
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (brr[i][j] > max) max = brr[i][j];
        }
    }
    cout << max << endl;
}   