#include <iostream>
#include <vector>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
    int countBottles = 0;
    int empty = 0;

    while (numBottles > 0) {
        countBottles += numBottles;
        empty += numBottles;
        numBottles = empty / numExchange;
        empty = empty % numExchange;
    }
    return countBottles;
}

int main() {
    int numBottles = 9;
    int numExchange = 3;
    cout << "Input: numBottles = " << numBottles 
         << ", numExchange = " << numExchange << endl;

    int result = numWaterBottles(numBottles, numExchange);
    cout << "Output: " << result << endl;  // Expected: 13

    return 0;
}