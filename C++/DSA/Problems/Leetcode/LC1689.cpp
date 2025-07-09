#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minPartitions(string n) {
    int maxDigit = INT_MIN;
    for(char ch: n){
        maxDigit = max(maxDigit, ch - '0');
    }        
    return maxDigit;
}

int main() {
    string n = "82734"; // Sample case
    int result = minPartitions(n);
    cout << "Minimum number of deci-binary numbers needed: " << result << endl;
    return 0;
}
