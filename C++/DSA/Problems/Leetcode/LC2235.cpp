#include <iostream>
using namespace std;

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a = 5, b = 10;
    cout << "Sum: " << sum(a, b) << endl;
    return 0;
}