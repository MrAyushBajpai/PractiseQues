#include <iostream>
using namespace std;

int addDigits(int num) {
    if((num / 10) == 0) return num;

    int sum = 0;
    while(num != 0){
        sum += num % 10;
        num /= 10;
    }
    return addDigits(sum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Result: " << addDigits(num) << endl;
    return 0;
}
