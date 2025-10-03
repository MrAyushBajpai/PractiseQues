#include <iostream>
#include <vector>
using namespace std;

int numberOfCuts(int n) {
    if(n == 1) return 0;
    if(n % 2 == 0) return n / 2;
    return n;    
}

int main() {
    vector<int> testCases = {1, 2, 3, 4, 5, 6, 7, 10};

    for(int n : testCases) {
        cout << "n = " << n 
             << " -> numberOfCuts = " << numberOfCuts(n) 
             << endl;
    }

    return 0;
}