#include <iostream>
#include <vector>
using namespace std;

int differenceOfSums(int n, int m) {
    int total = n * (n + 1) / 2;
    int divisibleSum = m * (n / m) * (n / m + 1);
    return total - divisibleSum;
}

int main(){
    cout << differenceOfSums(5, 6);
}